/**
 *  @file RootController.m
 *  @brief RFIDReader
 *  @author Surendra
 *  @date 08/03/14
 */

/*
 * Copyright (c) 2014 Trimble, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


#import "RDViewController.h"
#import "RDReadValuesCollectonViewCell.h"
#import "RDRscMgrInterface.h"
#import <QuartzCore/QuartzCore.h>
#include <arpa/inet.h>

@interface RDViewController ()<RDRscMgrInterfaceDelegate>
@property(nonatomic, retain) NSNetServiceBrowser *serviceBrowser;
@property(nonatomic, retain) NSNetService *serviceResolver;
@property(nonatomic, retain) NSMutableArray* services;
@end


NSMutableArray *epcLabelsArray = nil;
NSMutableArray *tagcountArray= nil;
NSString *exceptionlbl = @"";

int uniqCount = 0;
int totalCount = 0;
int pagePosition = 0;
int startIndex = 0;
int sectionCoun = 0;
NSString *serviceIp = @"";
BOOL tag = TRUE;

TMR_Region region;

@implementation RDViewController
@synthesize readTimeOut,readsegment,arraylock,uniqueTagsCount,silenceTimer;

- (void)ReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}


- (IBAction)readerViewAction:(id)sender
{
    if (self.readerViewSegmentAction.selectedSegmentIndex == 0)
    {
        self.readtext.userInteractionEnabled = FALSE;
        
        servicelistBtn.enabled = NO;
        [[RDRscMgrInterface sharedInterface] setDelegate:self];
        if ([[RDRscMgrInterface sharedInterface] cableState] == kCableNotConnected)
        {
            self.readerViewSegmentAction.enabled = TRUE;
            [self disconnectImageIndication];
            self.readsegment.enabled = FALSE;
            self.connectBtn.titleLabel.textColor = [UIColor lightGrayColor];
        }
        else
        {
            self.readerViewSegmentAction.enabled = TRUE;
            [self connectImageIndication];
            self.readsegment.enabled = FALSE;
        }
    }
    else
    {
        self.readerViewSegmentAction.enabled = TRUE;
        servicelistBtn.enabled = YES;
        self.readtext.userInteractionEnabled = TRUE;
        [self.readtext setText:@""];
    }
    [epcLabelsArray removeAllObjects];
    [tagcountArray removeAllObjects];
}

- (IBAction)getAvailbleServices:(id)sender
{
    if (tag)
    {
        tag = FALSE;
        services_TableView.hidden = NO;
        [self searchForBonjourServices];
    }
    else
    {
        self.readerViewSegmentAction.enabled = TRUE;
        services_TableView.hidden = YES;
        tag = TRUE;
    }
}

-(IBAction)textFieldDidChange:(id)sender
{
    if ([self.readTimeOut.text intValue] > 65535)
    {
        [spinner stopAnimating];
        [self readTimeExceptionRised];
        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                          message:@"Read timeout must be less than 65535"
                                                         delegate:nil
                                                cancelButtonTitle:@"OK"
                                                otherButtonTitles:nil];
        [message show];
    }
}

#pragma mark - View lifecycle

- (void)viewDidLoad
{
    [super viewDidLoad];
    readTimeOut.delegate = self;
    self.readtext.delegate = self;
    self.readBtn.enabled = FALSE;
    self.clearBtn.enabled = TRUE;
    self.stopread.hidden = TRUE;
    [self.readTimeOut setText:@"500"];
    servicelistBtn.enabled = NO;
    
    [self.readTimeOut addTarget:self
                         action:@selector(textFieldDidChange:)
               forControlEvents:UIControlEventEditingChanged];
    
    
    services_TableView = [[UITableView alloc] init];
    services_TableView.layer.borderWidth = 1;
    services_TableView.layer.cornerRadius = 4;
    services_TableView.dataSource = self;
    services_TableView.delegate = self;
    services_TableView.bounces = FALSE;
    [self.view addSubview:services_TableView];
    
    self.services = [[NSMutableArray alloc] init];
    self.serviceBrowser = [[NSNetServiceBrowser alloc] init];
    self.serviceBrowser.delegate = self;
    
    epcLabelsArray = [[NSMutableArray alloc] init];
    tagcountArray = [[NSMutableArray alloc] init];
    
    
    table_View = [[UITableView alloc] initWithFrame:CGRectMake(20, 208, 728, 760) style:UITableViewStylePlain];
    table_View.dataSource = self;
    table_View.delegate = self;
    table_View.bounces = FALSE;
    [table_View setAllowsSelection:NO];
    [table_View setSeparatorStyle:UITableViewCellSeparatorStyleNone];
    [self.view addSubview:table_View];
    
    spinner = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleGray];
    
    self.readtext.userInteractionEnabled = FALSE;
    [[RDRscMgrInterface sharedInterface] setDelegate:self];
    
    if ([[RDRscMgrInterface sharedInterface] cableState] == kCableNotConnected)
    {
        [self disconnectImageIndication];
        self.readsegment.enabled = FALSE;
        self.readerViewSegmentAction.enabled = TRUE;
        self.connectBtn.titleLabel.textColor = [UIColor lightGrayColor];
    }
    else
    {
        [self connectImageIndication];
        self.readsegment.enabled = FALSE;
        self.readerViewSegmentAction.enabled = TRUE;
    }
    
    //pagenation view settings....
    
    firstButton.enabled = FALSE;
    previousButton.enabled = FALSE;
    nextButton.enabled = FALSE;
    lastButton.enabled = FALSE;
    pagenationView.hidden = YES;
    
    firstButton.layer.cornerRadius = 3.0;
    previousButton.layer.cornerRadius = 3.0;
    nextButton.layer.cornerRadius = 3.0;
    lastButton.layer.cornerRadius = 3.0;
    pagenationView.layer.cornerRadius = 3.0;
    //...................
    
    
    HUD = [[MBProgressHUD alloc] initWithView:table_View];
    [table_View addSubview:HUD];
    HUD.color = [UIColor colorWithRed:0.23 green:0.50 blue:0.82 alpha:0.90];
    HUD.delegate = self;
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(exceptioncall:) name:@"AddException" object:Nil];
    
#if DEBUG
    self.logWindow = [[LogController alloc] initWithNibName:@"LogController" bundle:nil];
#endif
}


- (void)searchForBonjourServices
{
    [self.serviceBrowser searchForServicesOfType:@"_llrp._tcp" inDomain:@"local"];
}

- (void)disconnectImageIndication
{
    if ([spinner isAnimating])
    {
        [spinner stopAnimating];
    }
    
    UIImage *img = [UIImage imageNamed:@"RedLight.png"];
    self.connectedIndicator.image = img;
    self.connectBtn.enabled = FALSE;
    [self.readtext setText:@""];
    self.readtimelabel.hidden = TRUE;
    self.readTimeOut.hidden = TRUE;
    self.stopread.hidden = TRUE;
    self.readBtn.hidden = FALSE;
}

- (void)connectImageIndication
{
    UIImage *img = [UIImage imageNamed:@"OrangeLight.png"];
    self.connectedIndicator.image = img;
    self.connectBtn.enabled = TRUE;
    NSArray *accessories = [[EAAccessoryManager sharedAccessoryManager] connectedAccessories];
    for (EAAccessory *accessory in accessories)
    {
        if (self.readerViewSegmentAction.selectedSegmentIndex == 0)
        {
            [self.readtext setText:[NSString stringWithFormat:@"%@ %@",accessory.manufacturer,accessory.modelNumber]];
            NSLog(@"accessory name %@ Accessory MManufacturer %@",accessory.manufacturer,accessory.modelNumber);
        }
        else
        {
            [self.readtext setText: self.readtext.text];
        }
    }
    self.readtimelabel.hidden = TRUE;
    self.readTimeOut.hidden = TRUE;
    readsegment.selectedSegmentIndex = 0;
    self.connectBtn.userInteractionEnabled = TRUE;
}

- (void)rscMgrCableConnected
{
    if (self.readerViewSegmentAction.selectedSegmentIndex == 0)
    {
        [self connectImageIndication];
        self.connectBtn.selected = FALSE;
        self.readsegment.enabled = FALSE;
        self.readerViewSegmentAction.enabled = TRUE;
    }
}


- (void)rscMgrCableDisconnected
{
    if (self.readBtn.tag == 1)
    {
        //waiting for show exception..
        self.readBtn.tag = 0;
    }
    else
    {
        if (self.readerViewSegmentAction.selectedSegmentIndex == 0)
        {
            [self disconnectImageIndication];
            self.connectBtn.selected = FALSE;
            self.readBtn.enabled = FALSE;
            self.readsegment.enabled = FALSE;
            self.readerViewSegmentAction.enabled = TRUE;
            self.connectBtn.titleLabel.textColor = [UIColor lightGrayColor];
        }
    }
}


- (void)viewDidUnload
{
    [self setConnectedIndicator:nil];
    [super viewDidUnload];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return UIInterfaceOrientationIsPortrait(interfaceOrientation);
}

//tableview delegates............
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    if (tableView == table_View)
    {
        return sectionCoun;
    }
    else
    {
        int count = [self.services count];
        services_TableView.frame = CGRectMake(20, 109, 262, count*30);
        if (count == 0)
        {
            return 1;
        } else
        {
            return count;
        }
    }
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 30;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *MyIdentifier = @"MyIdentifier";
    static NSString *CellIdentifier = @"Cell";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:MyIdentifier];
    if (cell == nil)
    {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIdentifier];
        
        if (tableView == table_View)
        {
            startIndex = (pagePosition*25)+indexPath.row;
            
            UILabel *lbl1 = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 110, 29)];
            lbl1.text = [NSString stringWithFormat:@"%d",startIndex+1];
            lbl1.font = [UIFont boldSystemFontOfSize:15];
            lbl1.layer.borderColor = ([[UIColor grayColor] CGColor]);
            lbl1.layer.borderWidth = 1;
            lbl1.textAlignment = NSTextAlignmentCenter;
            
            UILabel *lbl2 = [[UILabel alloc] initWithFrame:CGRectMake(109, 0, 503, 29)];
            lbl2.text = [NSString stringWithFormat:@"%@%@",@" ",[epcLabelsArray objectAtIndex:startIndex]];
            lbl2.font = [UIFont boldSystemFontOfSize:13];
            lbl2.numberOfLines=2;
            lbl2.layer.borderColor = ([[UIColor grayColor] CGColor]);
            lbl2.layer.borderWidth = 1;
            
            UILabel *lbl3 = [[UILabel alloc] initWithFrame:CGRectMake(611, 0, 115, 29)];
            lbl3.text = [tagcountArray objectAtIndex:startIndex];
            lbl3.layer.borderColor = ([[UIColor grayColor] CGColor]);
            lbl3.layer.borderWidth = 1;
            lbl3.textAlignment = NSTextAlignmentCenter;
            
            toLabel.text = [NSString stringWithFormat:@"%d",pagePosition+1];
            
            [cell addSubview:lbl1];
            [cell addSubview:lbl2];
            [cell addSubview:lbl3];
        }
        else
        {
            int count = [self.services count];
            NSString* displayString;
            if (count == 0)
            {
                displayString = @"Searching...";
            }
            else
            {
                NSNetService *service = [self.services objectAtIndex:indexPath.row];
                displayString = [service name];
            }
            cell.textLabel.text = displayString;
            cell.textLabel.font = [UIFont boldSystemFontOfSize:13];
        }
    }
    
    return cell;
}

//#pragma mark UITableViewDelegate
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (tableView == services_TableView)
    {
        NSNetService *service = [self.services objectAtIndex:indexPath.row];
        [self.readtext setText: service.name];
        [self connectImageIndication];
        services_TableView.hidden = YES;
        self.readerViewSegmentAction.enabled = TRUE;
        
        if (self.serviceResolver)
        {
            [self.serviceResolver stop];
        }
        int count = [self.services count];
        if (count != 0)
        {
            self.serviceResolver = [self.services objectAtIndex:indexPath.row];
            self.serviceResolver.delegate = self;
            [self.serviceResolver resolveWithTimeout:0.0];
        }
        
        tag = TRUE;
    }
}

//tableview delegates end............


//#pragma mark NSNetServiceDelegate

- (void)netServiceDidResolveAddress:(NSNetService *)service
{
    [self.serviceResolver stop];
    serviceIp = @"";
    char addressBuffer[INET6_ADDRSTRLEN];
    
    for (NSData *data in [service addresses])
    {
        memset(addressBuffer, 0, INET6_ADDRSTRLEN);
        
        typedef union
        {
            struct sockaddr sa;
            struct sockaddr_in ipv4;
            struct sockaddr_in6 ipv6;
        } ip_socket_address;
        
        ip_socket_address *socketAddress = (ip_socket_address *)[data bytes];
        if (socketAddress && (socketAddress->sa.sa_family == AF_INET || socketAddress->sa.sa_family == AF_INET6))
        {
            const char *addressStr = inet_ntop(
                                               socketAddress->sa.sa_family,
                                               (socketAddress->sa.sa_family == AF_INET ? (void *)&(socketAddress->ipv4.sin_addr) : (void *)&(socketAddress->ipv6.sin6_addr)),
                                               addressBuffer,
                                               sizeof(addressBuffer));
            
            int port = ntohs(socketAddress->sa.sa_family == AF_INET ? socketAddress->ipv4.sin_port : socketAddress->ipv6.sin6_port);
            if (addressStr && port)
            {
                NSLog(@"Found service at %s:%d", addressStr, port);
                serviceIp = [[NSString stringWithFormat:@"%s",addressStr] copy];
            }
        }
    }
}


- (void)netService:(NSNetService *)sender didNotResolve:(NSDictionary *)errorDict
{
    [self.serviceResolver stop];
}

#pragma mark NSNetserviceBrowserDelegate
- (void)netServiceBrowser:(NSNetServiceBrowser *)aNetServiceBrowser didFindService:(NSNetService *)aNetService moreComing:(BOOL)moreComing
{
    [self.services addObject:aNetService];
    
    if (!moreComing)
    {
        [services_TableView reloadData];
    }
}

- (void)netServiceBrowser:(NSNetServiceBrowser *)netServiceBrowser didRemoveService:(NSNetService *)aNetService moreComing:(BOOL)moreServicesComing
{
    if (self.serviceResolver && [aNetService isEqual:self.serviceResolver])
    {
        [self.serviceResolver stop];
    }
    
    [self.services removeObject:aNetService];
    if (!moreServicesComing)
    {
        [services_TableView reloadData];
    }
}


- (IBAction)connectBtnTouched:(id)sender
{
    self.readerViewSegmentAction.enabled = FALSE;
    [self.readtext resignFirstResponder];
    services_TableView.hidden = YES;
    [self clearBtnTouched:nil];
    DLog(@"connectBtnTouched");
    
    
    if (self.readerViewSegmentAction.selectedSegmentIndex == 0)
    {
        
    }
    else
    {
        //validate ip address...
        if (serviceIp.length == 0)
        {
            const char *utf8 = [self.readtext.text UTF8String];
            int success;
            struct in_addr dst;
            success = inet_pton(AF_INET, utf8, &dst);
            if (success != 1)
            {
                UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                  message:@"Invalid ip"
                                                                 delegate:nil
                                                        cancelButtonTitle:@"OK"
                                                        otherButtonTitles:nil];
                
                [message show];
                return;
            }
        }
    }
    
    spinner.center = table_View.center;
    [self.view addSubview:spinner];
    [spinner startAnimating];
    
    self.connectBtn.userInteractionEnabled = FALSE;
    self.connectBtn.titleLabel.textColor = [UIColor lightGrayColor];
    
    if (self.connectBtn.selected)
    {
        [self disconnectBtnTouched:nil];
    }
    else
    {
        rp = &r;
        if (self.readerViewSegmentAction.selectedSegmentIndex == 0)
        {
            if ([[RDRscMgrInterface sharedInterface] cableState] == kCableNotConnected)
            {
                ULog(@"Please connect Redpark cable");
                return;
            }
            
            NSArray *accessories = [[EAAccessoryManager sharedAccessoryManager] connectedAccessories];
            const char *deviceURI;
            for (EAAccessory *accessory in accessories)
            {
                NSString *name = accessory.manufacturer;
                NSString *model = accessory.modelNumber;
                
                deviceURI = [[NSString stringWithFormat:@"tmr:///%@/%@",name,model] UTF8String];
            }
            
            NSLog(@"my device uri %s",deviceURI);
            ret = TMR_create(rp, deviceURI);
            DLog(@"TMR_create Status:%d", ret);
            uint32_t baudrate = 9600;
            ret = TMR_paramSet(rp, TMR_PARAM_BAUDRATE, &baudrate);
        }
        else
        {
            const char *deviceURI;
            
            if (serviceIp.length == 0)
            {
                deviceURI = [[NSString stringWithFormat:@"tmr://%@",self.readtext.text] UTF8String];
            }
            else
            {
                deviceURI = [[NSString stringWithFormat:@"tmr://%@",serviceIp] UTF8String];
            }
            
            ret = TMR_create(rp, deviceURI);
        }
        
        dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0), ^{
            
            ret = TMR_connect(rp);
            
            dispatch_async( dispatch_get_main_queue(), ^{
                
                if (TMR_SUCCESS == ret)
                {
                    // Add code here to update the UI/send notifications based on the results of the background processing
                    [spinner stopAnimating];
                    UIImage *img = [UIImage imageNamed:@"GreenLight.png"];
                    self.connectedIndicator.image = img;
                    self.connectBtn.selected = TRUE;
                    self.readBtn.enabled = TRUE;
                    self.readsegment.enabled = TRUE;
                    self.readerViewSegmentAction.enabled = FALSE;
                    self.connectBtn.userInteractionEnabled = TRUE;
                    self.readtimelabel.hidden = FALSE;
                    self.readTimeOut.hidden = FALSE;
                    
                    servicelistBtn.enabled = NO;
                    self.readtext.userInteractionEnabled = NO;
                }
                else
                {
                    [spinner stopAnimating];;
                    self.connectBtn.userInteractionEnabled = TRUE;
                    self.clearBtn.enabled = TRUE;
                    self.readerViewSegmentAction.enabled = TRUE;
                    NSLog(@"Couldn't open device");
                    UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                      message:@"Couldn't open device"
                                                                     delegate:nil
                                                            cancelButtonTitle:@"OK"
                                                            otherButtonTitles:nil];
                    
                    [message show];
                }
            });
        });
    }
    
}


- (IBAction)readBtnTouched:(id)sender
{
    [self.readTimeOut resignFirstResponder];
    [self clearBtnTouched:nil];
    self.connectBtn.userInteractionEnabled = FALSE;
    self.connectBtn.titleLabel.textColor = [UIColor lightGrayColor];
    
    if(readsegment.selectedSegmentIndex == 0)
    {
        self.readBtn.tag = 0;
        self.readsegment.enabled = FALSE;
        self.readTimeOut.userInteractionEnabled = NO;
        [self syncRead];
    }
    else if (readsegment.selectedSegmentIndex == 1)
    {
        self.readBtn.tag = 1;
        self.readsegment.enabled = FALSE;
        self.clearBtn.enabled = TRUE;
        self.clearBtn.hidden = FALSE;
        
        self.readBtn.hidden = TRUE;
        self.stopread.enabled = TRUE;
        self.stopread.hidden = FALSE;
        [self asyncRead];
    }
}

-(void)syncRead
{
    spinner.center = self.exceptionlabel.center;
    [self.view addSubview:spinner];
    [spinner startAnimating];
    
    if (self.readTimeOut.text.length == 0)
    {
        [spinner stopAnimating];
        [self readTimeExceptionRised];
        
        self.readsegment.enabled = TRUE;
        self.readTimeOut.userInteractionEnabled = YES;
        
        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                          message:@"Read timeout can't be empty"
                                                         delegate:nil
                                                cancelButtonTitle:@"OK"
                                                otherButtonTitles:nil];
        [message show];
    }
    else if ([self.readTimeOut.text intValue] == 0)
    {
        [spinner stopAnimating];
        [self readTimeExceptionRised];
        
        self.readsegment.enabled = TRUE;
        self.readTimeOut.userInteractionEnabled = YES;
        
        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                          message:@"Read timeout should be greater than zero"
                                                         delegate:nil
                                                cancelButtonTitle:@"OK"
                                                otherButtonTitles:nil];
        [message show];
    }
    else if ([readTimeOut.text intValue] > 65535)
    {
        [spinner stopAnimating];
        [self readTimeExceptionRised];
        
        self.readsegment.enabled = TRUE;
        self.readTimeOut.userInteractionEnabled = YES;
        
        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                          message:@"Read timeout must be less than 65535"
                                                         delegate:nil
                                                cancelButtonTitle:@"OK"
                                                otherButtonTitles:nil];
        [message show];
    }
    else
    {
        
        self.readBtn.enabled = FALSE;
        self.clearBtn.enabled = TRUE;
        self.exceptionlabel.hidden = TRUE;
        [self clearBtnTouched:nil];
        
        dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0), ^{
            TMR_Region region;
            region = TMR_REGION_NONE;
            
            ret = TMR_paramGet(rp, TMR_PARAM_REGION_ID, &region);
            DLog(@"region TMR_paramGet %d", region);
            
            if (TMR_REGION_NONE == region)
            {
                TMR_RegionList regions;
                TMR_Region _regionStore[32];
                regions.list = _regionStore;
                regions.max = sizeof(_regionStore)/sizeof(_regionStore[0]);
                regions.len = 0;
                
                ret = TMR_paramGet(rp, TMR_PARAM_REGION_SUPPORTEDREGIONS, &regions);
                
                if (regions.len < 1)
                {
                    DLog(@"Reader does not support any region");
                }
                
                region = regions.list[0];
                ret = TMR_paramSet(rp, TMR_PARAM_REGION_ID, &region);
                DLog(@"Setting region %d", region);
            }
            
            ret = TMR_read(rp,readTimeOut.text.intValue, NULL);
            if (TMR_ERROR_TIMEOUT == ret)
            {
                dispatch_async( dispatch_get_main_queue(), ^{
                    self.exceptionlabel.hidden = FALSE;
                    self.readBtn.enabled = FALSE;
                    self.clearBtn.enabled = TRUE;
                    self.connectBtn.selected = FALSE;
                    UIImage *img = [UIImage imageNamed:@"OrangeLight.png"];
                    self.connectBtn.userInteractionEnabled = TRUE;
                    self.connectedIndicator.image = img;
                    NSLog(@"Operation timeout");
                    [spinner stopAnimating];
                    self.readsegment.enabled = TRUE;
                    self.readTimeOut.userInteractionEnabled = YES;
                    self.connectBtn.userInteractionEnabled = TRUE;
                    self.connectBtn.titleLabel.textColor = [UIColor colorWithRed:(0/255.0) green:(105/255.0) blue:(229/255.0) alpha:1];
                    
                    UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                      message:@"Operation timeout"
                                                                     delegate:nil
                                                            cancelButtonTitle:@"OK"
                                                            otherButtonTitles:nil];
                    [message show];
                });
            }
            else
            {
                if (TMR_ERROR_CRC_ERROR == ret)
                {
                    dispatch_async( dispatch_get_main_queue(), ^{
                        [self ExceptionRaised];
                        NSLog(@"CRC error");
                        [spinner stopAnimating];
                        self.readsegment.enabled = TRUE;
                        self.readTimeOut.userInteractionEnabled = YES;
                        
                        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                          message:@"CRC error"
                                                                         delegate:nil
                                                                cancelButtonTitle:@"OK"
                                                                otherButtonTitles:nil];
                        [message show];
                    });
                }
                if((TMR_ERROR_TIMEOUT == ret))
                {
                    dispatch_async( dispatch_get_main_queue(), ^{
                        [self ExceptionRaised];
                        self.connectBtn.selected = FALSE;
                        UIImage *img = [UIImage imageNamed:@"OrangeLight.png"];
                        self.connectBtn.userInteractionEnabled = TRUE;
                        self.connectedIndicator.image = img;
                        NSLog(@"Operation timeout");
                        [spinner stopAnimating];
                        self.readsegment.enabled = TRUE;
                        self.readTimeOut.userInteractionEnabled = YES;
                        
                        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                          message:@"Operation timeout"
                                                                         delegate:nil
                                                                cancelButtonTitle:@"OK"
                                                                otherButtonTitles:nil];
                        [message show];
                    });
                }
                
                DLog(@"TMR_read Status:%d", ret);
                
                if(TMR_ERROR_NO_ANTENNA == ret)
                {
                    dispatch_async( dispatch_get_main_queue(), ^{
                        [self ExceptionRaised];
                        NSLog(@"Antenna not connected");
                        [spinner stopAnimating];
                        self.readsegment.enabled = TRUE;
                        self.readTimeOut.userInteractionEnabled = YES;
                        
                        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                          message:@"Antenna not connected"
                                                                         delegate:nil
                                                                cancelButtonTitle:@"OK"
                                                                otherButtonTitles:nil];
                        [message show];
                    });
                }
                else
                {
                    while (TMR_SUCCESS == TMR_hasMoreTags(rp))
                    {
                        TMR_TagReadData trd;
                        char epcStr[128];
                        ret = TMR_getNextTag(rp, &trd);
                        if((TMR_SUCCESS != ret) && (TMR_ERROR_CRC_ERROR == ret))
                        {
                            dispatch_async( dispatch_get_main_queue(), ^{
                                [self ExceptionRaised];
                                NSLog(@"CRC error");
                                [spinner stopAnimating];
                                self.readsegment.enabled = TRUE;
                                self.readTimeOut.userInteractionEnabled = YES;
                                
                                UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                                  message:@"CRC error"
                                                                                 delegate:nil
                                                                        cancelButtonTitle:@"OK"
                                                                        otherButtonTitles:nil];
                                [message show];
                            });
                        }
                        DLog(@"TMR_getNextTag Status: %d", ret);
                        TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
                        if (![epcLabelsArray containsObject:[NSString stringWithFormat:@"%s", epcStr]])
                        {
                            [epcLabelsArray addObject:[NSString stringWithFormat:@"%s", epcStr]];
                            [tagcountArray addObject:[NSString stringWithFormat:@"%@", [NSNumber numberWithInt:trd.readCount]]];
                        }
                        else
                        {
                            NSInteger epcStrPosition = [epcLabelsArray indexOfObject:[NSString stringWithFormat:@"%s", epcStr]];
                            int tagcount = [[tagcountArray objectAtIndex:epcStrPosition] intValue]+[[NSString stringWithFormat:@"%@", [NSNumber numberWithInt:trd.readCount]] intValue];
                            [tagcountArray replaceObjectAtIndex:epcStrPosition withObject:[NSString stringWithFormat:@"%d",tagcount]];
                        }
                        
                        NSString *strcount = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:trd.readCount]];
                        totalCount = totalCount +[strcount intValue];
                        
                        DLog(@"EPC:%s ant:%d, count:%d\n", epcStr, trd.antenna, trd.readCount);
                    }
                    if ((TMR_ERROR_NO_TAGS != ret) && (TMR_ERROR_CRC_ERROR == ret))
                    {
                        dispatch_async( dispatch_get_main_queue(), ^{
                            [self ExceptionRaised];
                            NSLog(@"CRC error");
                            [spinner stopAnimating];
                            
                            self.readsegment.enabled = TRUE;
                            self.readTimeOut.userInteractionEnabled = YES;
                            
                            UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                              message:@"CRC error"
                                                                             delegate:nil
                                                                    cancelButtonTitle:@"OK"
                                                                    otherButtonTitles:nil];
                            [message show];
                        });
                    }
                    
                    dispatch_async( dispatch_get_main_queue(), ^{
                        // Add code here to update the UI/send notifications based on the results of the background processing
                        self.connectBtn.userInteractionEnabled = TRUE;
                        self.connectBtn.titleLabel.textColor = [UIColor colorWithRed:(0/255.0) green:(105/255.0) blue:(229/255.0) alpha:1];
                        self.readBtn.enabled = TRUE;
                        self.clearBtn.enabled = TRUE;
                        self.uniqueTagsCount.text = [NSString stringWithFormat:@"%d", [epcLabelsArray count]];
                        self.totalTagsCount.text = [NSString stringWithFormat:@"%d", totalCount];
                        
                        [spinner stopAnimating];
                        self.readsegment.enabled = TRUE;
                        self.readTimeOut.userInteractionEnabled = YES;
                        [self reloadtableView];
                    });
                }
            }
        });
    }
}


-(void)asyncRead
{
    spinner.center = self.exceptionlabel.center;
    [self.view addSubview:spinner];
    [spinner startAnimating];
    
    dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0), ^{
        
        region = TMR_REGION_NONE;
        ret = TMR_paramGet(rp, TMR_PARAM_REGION_ID, &region);
        if (self.readerViewSegmentAction.selectedSegmentIndex == 0)
        {
            uint32_t timeout = 5000;
            ret = TMR_paramSet(rp, TMR_PARAM_TRANSPORTTIMEOUT, &timeout);
            ret = TMR_paramSet(rp, TMR_PARAM_COMMANDTIMEOUT, &timeout);
        }
        
        DLog(@"region TMR_paramGet %d", region);
        
        if (TMR_REGION_NONE == region)
        {
            TMR_RegionList regions;
            TMR_Region _regionStore[32];
            regions.list = _regionStore;
            regions.max = sizeof(_regionStore)/sizeof(_regionStore[0]);
            regions.len = 0;
            
            ret = TMR_paramGet(rp, TMR_PARAM_REGION_SUPPORTEDREGIONS, &regions);
            
            if (regions.len < 1)
            {
                DLog(@"Reader does not support any region");
            }
            
            region = regions.list[0];
            ret = TMR_paramSet(rp, TMR_PARAM_REGION_ID, &region);
            DLog(@"Setting region %d", region);
        }
        
        dispatch_async( dispatch_get_main_queue(), ^{
            
            rlb.listener = callback;
            rlb.cookie = NULL;
            reb.listener = exceptionCallback;
            reb.cookie = NULL;
            ret = TMR_addReadListener(rp, &rlb);
            ret = TMR_addReadExceptionListener(rp, &reb);
            ret = TMR_startReading(rp);
            
            UIBackgroundTaskIdentifier bgTask = 0;
            UIApplication  *app = [UIApplication sharedApplication];
            bgTask = [app beginBackgroundTaskWithExpirationHandler:^{
                [app endBackgroundTask:bgTask];
            }];
            self.silenceTimer = [NSTimer scheduledTimerWithTimeInterval:2.0 target:self
                                                               selector:@selector(reloadtableView) userInfo:nil repeats:YES];
            
        });
    });
}

-(void)reloadtableView
{
    @autoreleasepool
    {
        self.uniqueTagsCount.text = [NSString stringWithFormat:@"%d", [epcLabelsArray count]];
        self.totalTagsCount.text = [NSString stringWithFormat:@"%d", totalCount];
        
        
        if ([epcLabelsArray count]%25 == 0)
        {
            ttlCountLabel.text = [NSString stringWithFormat:@"%d",[epcLabelsArray count]/25];
        }
        else
        {
            ttlCountLabel.text = [NSString stringWithFormat:@"%d",[epcLabelsArray count]/25+1];
        }
        
        if(pagePosition*25 < [epcLabelsArray count])
        {
            sectionCoun = 0;
            sectionCoun = [epcLabelsArray count]-(pagePosition*25);
            
            if (!(sectionCoun <= 25))
            {
                sectionCoun = 25;
                nextButton.enabled = TRUE;
                lastButton.enabled = TRUE;
                pagenationView.hidden = NO;
            }
            else
            {
                pagenationView.hidden = YES;
            }
            
            if ([epcLabelsArray count] > 25)
            {
                pagenationView.hidden = NO;
            }
        }
        else
        {
            sectionCoun = [epcLabelsArray count];
            pagenationView.hidden = YES;
        }
        
        [table_View reloadData];
    }
}


- (IBAction)firstPageView:(id)sender
{
    [HUD show:YES];
    pagePosition = 0;
    sectionCoun = 25;
    
    [table_View reloadData];
    
    firstButton.enabled = FALSE;
    previousButton.enabled = FALSE;
    
    if ([epcLabelsArray count] >= 25)
    {
        nextButton.enabled = TRUE;
        lastButton.enabled = TRUE;
    }
    [HUD hide:YES afterDelay:0.5];
}

- (IBAction)nextPageView:(id)sender
{
    
    [HUD show:YES];
    
    if((pagePosition+1)*25 < [epcLabelsArray count])
    {
        pagePosition = pagePosition+1;
        
        if(pagePosition*25 <= [epcLabelsArray count])
        {
            sectionCoun = 0;
            sectionCoun = [epcLabelsArray count]-(pagePosition*25);
            
            if (!(sectionCoun <= 25))
            {
                sectionCoun = 25;
                nextButton.enabled = TRUE;
                lastButton.enabled = TRUE;
            }
            else
            {
                nextButton.enabled = FALSE;
                lastButton.enabled = FALSE;
            }
        }
        else
        {
            sectionCoun = [epcLabelsArray count];
            nextButton.enabled = FALSE;
            lastButton.enabled = FALSE;
        }
        
        firstButton.enabled = TRUE;
        previousButton.enabled = TRUE;
    }
    [table_View reloadData];
    [HUD hide:YES afterDelay:0.5];
}

- (IBAction)previousPageView:(id)sender
{
    [HUD show:YES];
    if (!pagePosition <= 0)
    {
        pagePosition = pagePosition-1;
        sectionCoun = 25;
        nextButton.enabled = TRUE;
        lastButton.enabled = TRUE;
        
        if (pagePosition == 0)
        {
            firstButton.enabled = FALSE;
            previousButton.enabled = FALSE;
        }
        
        toLabel.text = [NSString stringWithFormat:@"%d",pagePosition];
        [table_View reloadData];
    }
    else
    {
        firstButton.enabled = FALSE;
        previousButton.enabled = FALSE;
    }
    [HUD hide:YES afterDelay:0.5];
}


- (IBAction)lastPageView:(id)sender
{
    [HUD show:YES];
    int count = [epcLabelsArray count];
    pagePosition = count/25;
    int pageOffset = count%25;
    if (pageOffset == 0)
    {
        pagePosition -= 1;
    }
    startIndex = (pagePosition*25)+1;
    sectionCoun = (count - startIndex)+1;
    [table_View reloadData];
    [HUD hide:YES afterDelay:0.5];
    
    firstButton.enabled = TRUE;
    previousButton.enabled = TRUE;
    nextButton.enabled = FALSE;
    lastButton.enabled = FALSE;
}


void callback(TMR_Reader *reader, const TMR_TagReadData *t, void *cookie)
{
    @autoreleasepool
    {
        char epcStr[128];
        TMR_bytesToHex(t->tag.epc, t->tag.epcByteCount, epcStr);
        
        NSString *epcString = [NSString stringWithFormat:@"%s", epcStr];
        NSString *epcCount = [NSString stringWithFormat:@"%@",[NSNumber numberWithInt:t->readCount]];
        
        if (![epcString isEqualToString:@""] && ![epcCount isEqualToString:@""])
        {
            if (![epcLabelsArray containsObject:epcString])
            {
                [epcLabelsArray addObject:epcString];
                [tagcountArray addObject:epcCount];
            }
            else
            {
                NSInteger epcStrPosition = [epcLabelsArray indexOfObject:epcString];
                int tagcount = [[tagcountArray objectAtIndex:epcStrPosition] intValue]+[epcCount intValue];
                [tagcountArray replaceObjectAtIndex:epcStrPosition withObject:[NSString stringWithFormat:@"%d",tagcount]];
            }
            totalCount = totalCount + [epcCount intValue];
        }
    }
}


void exceptionCallback(TMR_Reader *reader, TMR_Status error, void *cookie)
{
    exceptionlbl =  [NSString stringWithFormat:@"%s",TMR_strerr(reader, error)];
    [[NSNotificationCenter defaultCenter] postNotificationName:@"AddException" object:nil userInfo:nil];
}

-(void)exceptioncall:(NSNotification *)notify
{
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        
        [self.silenceTimer invalidate];
        
        TMR_removeReadListener(rp, &rlb);
        TMR_removeReadExceptionListener(rp, &reb);
        
        dispatch_async(dispatch_get_main_queue(), ^{
            
            [spinner stopAnimating];
            
            if (self.readerViewSegmentAction.selectedSegmentIndex == 0)
            {
                [[RDRscMgrInterface sharedInterface] setDelegate:self];
            }
            else
            {
                servicelistBtn.enabled = YES;
                self.readtext.userInteractionEnabled = TRUE;
                [self.readtext setText:@""];
                self.services = [[NSMutableArray alloc] init];
                self.serviceBrowser = [[NSNetServiceBrowser alloc] init];
                self.serviceBrowser.delegate = self;
                [self disconnectImageIndication];
                self.connectBtn.userInteractionEnabled = TRUE;
                self.connectBtn.selected = FALSE;
            }
            
            [table_View reloadData];
            
            [HUD hide:YES];
            UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                              message:exceptionlbl
                                                             delegate:nil
                                                    cancelButtonTitle:@"OK"
                                                    otherButtonTitles:nil];
            [message show];
            return;
        });
    });
}


- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    if([alertView.message isEqualToString:exceptionlbl])
    {
        
    }
}

- (IBAction)clearBtnTouched:(id)sender
{
    uniqCount = 0;
    totalCount = 0;
    sectionCoun = 0;
    pagePosition = 0;
    startIndex = 0;
    
    self.uniqueTagsCount.text = @"0";
    self.totalTagsCount.text = @"0";
    
    fromLabel.text = @"";
    toLabel.text = @"";
    ttlCountLabel.text = @"";
    
    
    if ([epcLabelsArray count] != 0)
    {
        [epcLabelsArray removeAllObjects];
        [tagcountArray removeAllObjects];
    }
    
    [table_View reloadData];
    self.clearBtn.enabled = TRUE;
    pagenationView.hidden = YES;
}


- (IBAction)disconnectBtnTouched:(id)sender
{
    TMR_destroy(rp);
    [self clearBtnTouched:nil];
    UIImage *img = [UIImage imageNamed:@"OrangeLight.png"];
    self.connectBtn.userInteractionEnabled = TRUE;
    self.connectedIndicator.image = img;
    self.readBtn.enabled = FALSE;
    self.clearBtn.enabled = TRUE;
    self.readsegment.selectedSegmentIndex = 0;
    
    self.readsegment.enabled = FALSE;
    self.readerViewSegmentAction.enabled = TRUE;
    self.connectBtn.selected = FALSE;
    self.connectBtn.userInteractionEnabled = TRUE;
    self.connectBtn.titleLabel.textColor = [UIColor colorWithRed:(0/255.0) green:(105/255.0) blue:(229/255.0) alpha:1];
    [spinner stopAnimating];
    self.readtimelabel.hidden = TRUE;
    self.readTimeOut.hidden = TRUE;
    
    servicelistBtn.enabled = YES;
    self.readtext.userInteractionEnabled = YES;
}

- (IBAction)stopBtnTouched:(id)sender
{
    [HUD show:YES];
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        
        [self.silenceTimer invalidate];
        if (rp != NULL)
        {
            ret = TMR_stopReading(rp);
            ret = TMR_removeReadListener(rp, &rlb);
            ret = TMR_removeReadExceptionListener(rp, &reb);
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            
            [spinner stopAnimating];
            self.readsegment.enabled = TRUE;
            self.stopread.enabled = FALSE;
            self.readBtn.hidden = FALSE;
            self.connectBtn.userInteractionEnabled = TRUE;
            self.connectBtn.titleLabel.textColor = [UIColor colorWithRed:(0/255.0) green:(105/255.0) blue:(229/255.0) alpha:1];
            self.stopread.hidden = TRUE;
            
            [self reloadtableView];
            NSLog(@"Stop the module to read data");
            [HUD hide:YES afterDelay:0.5];
        });
    });
}

- (IBAction)segmentChange:(id)sender
{
    if (self.readsegment.selectedSegmentIndex == 1)
    {
        self.readtimelabel.hidden = TRUE;
        self.readTimeOut.hidden = TRUE;
    }
    else if (self.readsegment.selectedSegmentIndex == 0)
    {
        self.readtimelabel.hidden = FALSE;
        self.readTimeOut.hidden = FALSE;
    }
}


- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string{
    
    if (textField == self.readtext)
    {
        if (self.readerViewSegmentAction.selectedSegmentIndex == 0)
        {
            
        }
        else
        {
            self.readerViewSegmentAction.enabled = FALSE;
            [self connectImageIndication];
        }
    }
    else
    {
        if (textField == readTimeOut)
        {
            NSLog(@"read %d",[readTimeOut.text intValue]);
            // in case you need to limit the max number of characters
            if ([readTimeOut.text stringByReplacingCharactersInRange:range withString:string].length > 5)
            {
                return NO;
            }
        }
    }
    // verify the text field you wanna validate
    if (textField.keyboardType == UIKeyboardTypeNumberPad)
    {
        if ([string rangeOfCharacterFromSet:[[NSCharacterSet decimalDigitCharacterSet] invertedSet]].location != NSNotFound)
        {
            return NO;
        }
    }
    return YES;
}


- (BOOL)textFieldShouldReturn:(UITextField *)textField
{
    [textField resignFirstResponder];
    return YES;
}

- (void)readTimeExceptionRised
{
    [self clearBtnTouched:nil];
    self.clearBtn.enabled = TRUE;
    self.connectBtn.userInteractionEnabled = TRUE;
    self.connectBtn.titleLabel.textColor = [UIColor colorWithRed:(0/255.0) green:(105/255.0) blue:(229/255.0) alpha:1];
}

- (void)ExceptionRaised
{
    self.readBtn.enabled = TRUE;
    self.clearBtn.enabled = TRUE;
    self.connectBtn.userInteractionEnabled = TRUE;
    self.connectBtn.titleLabel.textColor = [UIColor colorWithRed:(0/255.0) green:(105/255.0) blue:(229/255.0) alpha:1];
}

#pragma mark - UIToolbarButton Callbacks


- (IBAction)log:(id)sender
{
    [self presentViewController:self.logWindow animated:YES completion:nil];
}

@end
