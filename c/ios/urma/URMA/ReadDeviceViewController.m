//
//  ReadDeviceViewController.m
//  URMA
//
//  Created by Raju on 02/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import "ReadDeviceViewController.h"
#import "ReadDeviceTableViewCell.h"

#import "SerialDeviceViewController.h"
#import "SerialSmartCaseDeviceViewController.h"
#import "NetworkDeviceViewController.h"
#import "AddDeviceViewController.h"

#import <QuartzCore/QuartzCore.h>
#include <arpa/inet.h>
#import "Global.h"
#import "SettingVO.h"

int serviceselectedindex = 0;

@interface ReadDeviceViewController (){
    NSString *accessoryName;
    ReadDeviceTableViewCell *cell;
    
}
@property(nonatomic, retain) NSNetServiceBrowser *serviceBrowser;
@property(nonatomic, retain) NSNetService *serviceResolver;
@end


@implementation ReadDeviceViewController
@synthesize detailViewController,serialDeviceViewController,networkDeviceViewController,addDeviceViewController;
@synthesize tableView,availDeviceslbl;


- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    
    }
    return self;
}

- (IBAction)refreshDeviceListAction:(id)sender {
    
    [spinner startAnimating];
    //[self searchForBonjourServices];
    [self stopSpinner];
    //[self.tableView reloadData];
}



-(void) viewWillAppear:(BOOL)animated
{
    
        //[super  viewWillAppear:NO];
    
        //Device detection Notifications
       [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(cableConnectedNotified) name:EAAccessoryDidConnectNotification  object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(dummy) name:EAAccessoryDidDisconnectNotification  object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(cableDisConnectedNotified) name:@"NotificationFromReadResultsViewDisconnect" object:nil];
}


- (void)viewDidLoad
{
    [super viewDidLoad];
    
    //set font....
    self.availDeviceslbl.font = font_ExtraBold_16;
    
    
    // Add First(default) Item to "services" Array.....
    [services insertObject:[NSArray arrayWithObjects:@"Add device manually...",@"",[[SettingVO alloc] init],@"FALSE",@"", nil] atIndex:0];
    
    
    // Bonjor servicess calling here.....
    self.serviceBrowser = [[NSNetServiceBrowser alloc] init];
    self.serviceBrowser.delegate = self;
    [self searchForBonjourServices];
   
    //SerialCable delegates....
    [[RDRscMgrInterface sharedInterface] setDelegate:self];
    if ([[RDRscMgrInterface sharedInterface] cableState] == kCableNotConnected){
        [self disconnectImageIndication];
    }
    else{
        [self connectImageIndication];
    }
    
    
    //spinner ....
    spinner.frame = CGRectMake(235, 67, 50, 50);
    spinner.color = [UIColor whiteColor];
    [self.view addSubview:spinner];
    
    
    // Notification objects.....
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(connectionSccess) name:@"con_Success" object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(connectionDisconnected) name:@"conn_Disconnect" object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(connectionSccessManual) name:@"con_Success_Manual" object:nil];
}

/** serialcable disconnect method.. */
- (void)disconnectImageIndication{
    
    //[writelog writeData:[@"-disconnectImageIndication-123 \n" dataUsingEncoding:NSUTF8StringEncoding]];
    
    /** Remove serialcable from list of services */
    if ([services count] > 1) {
        
        //    /** spinner start here.. */
        [spinner startAnimating];
        
        for (int i=0; i<[services count]; i++) {
            
            @try {
                if ([[[services objectAtIndex:i] objectAtIndex:1] isEqualToString:accessoryName]) {
                    
                    /** If file is existed removing the file of correponding service.. */
                    if (![[[services objectAtIndex:i] objectAtIndex:4] isEqualToString:@""]) {
                        
                        NSFileManager *fileManager = [NSFileManager defaultManager];
                        NSError *error;
                        [fileManager removeItemAtPath:[[services objectAtIndex:i] objectAtIndex:4] error:&error];
                    }
                    
                    /** Remove service from the list of services... */
                    [services removeObjectAtIndex:i];
   
                    /** Delete identified service here with list of selected index... */
                    NSIndexPath *indexPath = [NSIndexPath indexPathForRow:i inSection:0];
                    [tableView deleteRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationFade];
                    
                    /** If selected service is removed, reload splitViewController... */
                    if (serviceselectedindex == i) {
                        self.serialDeviceViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"SerialDeviceViewController"];
                        self.detailViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"DetailViewController"];
                        self.splitViewController.viewControllers = [NSArray arrayWithObjects:[[[self splitViewController] viewControllers] objectAtIndex:0],self.detailViewController, nil];
                        
                        //[HUD show:NO];
                    }
                    
                    // selected index identification...
                    if (serviceselectedindex == i) {
                        serviceselectedindex = 0;
                        globalsServiceselectedindex = serviceselectedindex;
                    }
                    else if (serviceselectedindex > i){
                        serviceselectedindex -= 1;
                        globalsServiceselectedindex = serviceselectedindex;
                    }

                    break;
                }
            }
            @catch (NSException *exception) {
                //NSLog(@"%@",exception);
            }
        }
        [self stopSpinner];
    }
}


/** Serialcable connection method.. */
- (void)connectImageIndication{
    
    [spinner startAnimating];
    
    //[writelog writeData:[@"-connectImageIndication- \n" dataUsingEncoding:NSUTF8StringEncoding]];
    
    /** Get the current AccessoryName here......*/
    //accessoryName = [[NSString stringWithFormat:@"%@ %@",[[[[EAAccessoryManager sharedAccessoryManager] connectedAccessories] objectAtIndex:0] manufacturer],[[[[EAAccessoryManager sharedAccessoryManager] connectedAccessories] objectAtIndex:0] modelNumber]] copy];
    
    NSLog(@"**** Connected Manufacturer  In connectImageIndication ");
    
    NSArray *connectAccessoriesArray = [[EAAccessoryManager sharedAccessoryManager] connectedAccessories];
    
    if([connectAccessoriesArray count] > 0)
    {
        
        NSString *manufacturer = [[connectAccessoriesArray objectAtIndex:0] manufacturer];
        
        NSLog(@"**** Connected Manufacturer -- %@", manufacturer);

        if([manufacturer containsString:@"Trimble"])
        {
            isTrimble = TRUE;
        }
        else
        {
            isTrimble = FALSE;
        }

        if(isTrimble)
        {
            accessoryName = [[NSString stringWithFormat:@"%@",[[connectAccessoriesArray objectAtIndex:0] modelNumber]] copy];
        }
        else
        {
            accessoryName = [[NSString stringWithFormat:@"%@ %@",[[connectAccessoriesArray objectAtIndex:0] manufacturer],[[connectAccessoriesArray objectAtIndex:0] modelNumber]] copy];
        }
    }
    
    
    if([accessoryName length] > 0)
    {
        for (int i=0; i<[services count]; i++) {
            
            @try {
                if (![[[services objectAtIndex:i] objectAtIndex:1] isEqualToString:accessoryName]) {
                    
                    /** Add Items to "services" Array.....*/
                    
                    if(isTrimble)
                    {
                        [services insertObject:[NSArray arrayWithObjects:@"S",accessoryName,[[SettingVO alloc] init],@"FALSE",@"", nil] atIndex:0];
                    }
                    else
                    {
                        [services insertObject:[NSArray arrayWithObjects:@"R",accessoryName,[[SettingVO alloc] init],@"FALSE",@"", nil] atIndex:0];
                    }
                    
                    /** change header view bulp for connect state.....*/
                    headerView.statusShowIcon.image=[UIImage imageNamed:@"light-orange.png"];
                    
                    /** Insert new service to service list.....*/
                    NSIndexPath *indexPath = [NSIndexPath indexPathForRow:0 inSection:0];
                    [self.tableView insertRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationAutomatic];
                    
                    if (globalsServiceselectedindex > -1) {
                        serviceselectedindex += 1;
                        globalsServiceselectedindex = serviceselectedindex;
                    }

                    //Selected cell text color
                    ReadDeviceTableViewCell *cell1 = (ReadDeviceTableViewCell *)[self.tableView cellForRowAtIndexPath:indexPath];
                    cell1.ttlLbl.textColor = [UIColor blackColor];
                    
                    //[spinner stopAnimating];
                    break;
                }
            }
            @catch (NSException *exception) {
                //NSLog(@"%@",exception);
            }
        }
    }

   [self stopSpinner];
}

/****Serial cable connect Notification */


-(void)dummy
{
    
}
- (void)cableConnectedNotified
{
    //NSLog(@"**** CABLE CONNECTED HElllllllllooooo*******");
    NSArray *connectAccessoriesArray = [[EAAccessoryManager sharedAccessoryManager] connectedAccessories];
    
    if([connectAccessoriesArray count] > 0)
    {
        
        NSString *manufacturer = [[connectAccessoriesArray objectAtIndex:0] manufacturer];
        
        if([manufacturer containsString:@"Trimble"])
        {
            isTrimble = TRUE;
        }
        else
        {
            isTrimble = FALSE;
        }
    }
    if(isTrimble)
    {
        [self connectImageIndication];
    }
}

/****Serial cable disconnect Notification */
- (void)cableDisConnectedNotified
{
    //NSLog(@"**** CABLE DISCONNECTED NOTIFICATION FRM READ RESULTS VIEW*******");
    //[self disconnectImageIndication];
}


/** serialcable connect delegate method.. */
- (void)rscMgrCableConnected{
    
    //NSLog(@"******* CABLE CONNECTED READ DEVICE");
    //[writelog writeData:[@"-rscMgrCableConnected- \n" dataUsingEncoding:NSUTF8StringEncoding]];
    [self connectImageIndication];
}


/** serialcable disconnect delegate method.. */
- (void)rscMgrCableDisconnected{
    
     NSLog(@"******* CABLE DISCONNECTED READ DEVICE");
    //[writelog writeData:[@"-rscMgrCableDisconnected- \n" dataUsingEncoding:NSUTF8StringEncoding]];
    [self disconnectImageIndication];
    [[NSNotificationCenter defaultCenter] postNotificationName:@"CableDisconneted" object:self];
    if (isSerialReading) {
        [[NSNotificationCenter defaultCenter] postNotificationName:@"StopTimer" object:nil];
        [[NSNotificationCenter defaultCenter] postNotificationName:@"DisplayException" object:nil];
        isSerialReading = FALSE;
    }

}


- (void)searchForBonjourServices
{
    //[self.serviceBrowser searchForServicesOfType:@"_m4api._udp." inDomain:@"local"];
    [self.serviceBrowser searchForServicesOfType:@"_llrp._tcp" inDomain:@"local"];
}


//#pragma mark NSNetServiceDelegate
- (void)netServiceDidResolveAddress:(NSNetService *)service {
    
    [self.serviceResolver stop];
    serviceIp = @"";
    char addressBuffer[INET6_ADDRSTRLEN];
    
    for (NSData *data in [service addresses]){
        memset(addressBuffer, 0, INET6_ADDRSTRLEN);
        
        typedef union {
            struct sockaddr sa;
            struct sockaddr_in ipv4;
            struct sockaddr_in6 ipv6;
        } ip_socket_address;
        
        ip_socket_address *socketAddress = (ip_socket_address *)[data bytes];
        if (socketAddress && (socketAddress->sa.sa_family == AF_INET || socketAddress->sa.sa_family == AF_INET6)){
            const char *addressStr = inet_ntop(
                                               socketAddress->sa.sa_family,
                                               (socketAddress->sa.sa_family == AF_INET ? (void *)&(socketAddress->ipv4.sin_addr) : (void *)&(socketAddress->ipv6.sin6_addr)),
                                               addressBuffer,
                                               sizeof(addressBuffer));
            
            int port = ntohs(socketAddress->sa.sa_family == AF_INET ? socketAddress->ipv4.sin_port : socketAddress->ipv6.sin6_port);
            if (addressStr && port){
                //NSLog(@"Found service at %s:%d", addressStr, port);
                serviceIp = [[NSString stringWithFormat:@"%s",addressStr] copy];
                
                //serviceIp =  [@"192.168.0.139" copy];
                //serviceIp =  [@"192.168.0.120" copy];
            }
        }
    }
}


- (void)netService:(NSNetService *)sender didNotResolve:(NSDictionary *)errorDict {
    [self.serviceResolver stop];
    //[spinner stopAnimating];
}

#pragma mark NSNetserviceBrowserDelegate
- (void)netServiceBrowser:(NSNetServiceBrowser *)aNetServiceBrowser didFindService:(NSNetService *)aNetService moreComing:(BOOL)moreComing
{
    
    [spinner startAnimating];
    
    // Add Items to "services" Array.....
    [services insertObject:[NSArray arrayWithObjects:@"N",aNetService,[[SettingVO alloc] init],@"FALSE",@"", nil] atIndex:0];
    
    headerView.statusShowIcon.image = [UIImage imageNamed:@"light-orange.png"];
    
    if (!moreComing) {
        //[self.tableView reloadData];
        NSIndexPath *indexPath = [NSIndexPath indexPathForRow:0 inSection:0];
        [self.tableView insertRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationAutomatic];
        //[spinner stopAnimating];
        
        //Selected cell text color
        ReadDeviceTableViewCell *cell1 = (ReadDeviceTableViewCell *)[self.tableView cellForRowAtIndexPath:indexPath];
        cell1.ttlLbl.textColor = [UIColor blackColor];
    }
    
    [self stopSpinner];
}

- (void)netServiceBrowser:(NSNetServiceBrowser *)netServiceBrowser didRemoveService:(NSNetService *)aNetService moreComing:(BOOL)moreServicesComing
{
    [spinner startAnimating];
    
    if (self.serviceResolver && [aNetService isEqual:self.serviceResolver]) {
        [self.serviceResolver stop];
    }
    
    
    NSArray *arry = [[NSString stringWithFormat:@"%@",[aNetService name]] componentsSeparatedByString:@"("];
    NSString* weekservice = [[arry objectAtIndex:1] substringToIndex:[[arry objectAtIndex:1] length]-1];
    
    if ([services count]) {
        
        for (int i=0; i<[services count]; i++) {
            
            @try {
                
                //NSArray *tmparry = [services objectAtIndex:i];
                NSArray *arry1 = [[NSString stringWithFormat:@"%@",[[services objectAtIndex:i] objectAtIndex:1]] componentsSeparatedByString:@"("];
                NSString* weekservice1 = [[arry1 objectAtIndex:1] substringToIndex:[[arry objectAtIndex:1] length]-1];
                
                if ([weekservice1 isEqualToString:weekservice]) {
                    
                    //If file is existed removing the file of correponding service..
                    
                    if (![[[services objectAtIndex:i] objectAtIndex:4] isEqualToString:@""]) {
                        
                        NSFileManager *fileManager = [NSFileManager defaultManager];
                        NSError *error;
                        [fileManager removeItemAtPath:[[services objectAtIndex:i] objectAtIndex:4] error:&error];
                    }
                    
                    //Remove service from the list of services...
                    [services removeObjectAtIndex:i];
                    
                    //Add VO objects to dictionary....
                    //[settingInfoDictionary setObject:services forKey:@"VO_Object"];
                    
                    
                    NSIndexPath *indexPath = [NSIndexPath indexPathForRow:i inSection:0];
                    [tableView deleteRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationFade];
                    
                    if (serviceselectedindex == i) {
                        self.networkDeviceViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"NetworkDeviceViewController"];
                        self.detailViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"DetailViewController"];
                        self.splitViewController.viewControllers = [NSArray arrayWithObjects:[[[self splitViewController] viewControllers] objectAtIndex:0],self.detailViewController, nil];
                        
                        //[HUD show:NO];
                    }
                    
                    // selected index identification...
                    if (serviceselectedindex == i) {
                        serviceselectedindex = 0;
                        globalsServiceselectedindex = serviceselectedindex;
                    }
                    else if (serviceselectedindex > i){
                        serviceselectedindex -= 1;
                        globalsServiceselectedindex = serviceselectedindex;
                    }
                    break;
                }
            }
            @catch (NSException *exception) {
                //NSLog(@"%@",exception);
            }
        }
    }
    
    if ([services count] == 1) {
        headerView.statusShowIcon.image = [UIImage imageNamed:@"light-red.png"];
    }

    [self stopSpinner];
}

-(void) stopSpinner{
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0), ^{
        [NSThread sleepForTimeInterval:2];
        dispatch_async(dispatch_get_main_queue(), ^{
            [spinner stopAnimating];
        });
    });
}


- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;    //count of section
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    
    long count = [services count];
    if (count == 0) {
        return 1;
    } else {
        
        self.tableView.frame = CGRectMake(0, 124, self.view.frame.size.width, count*51);
        return count;
    }   //count number of row from counting array hear cataGorry is An Array
}


- (UITableViewCell *)tableView:(UITableView *)table_View cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *MyIdentifier = @"Cell";
    cell = [table_View dequeueReusableCellWithIdentifier:MyIdentifier];
    
    if (cell == nil){
        cell = [[ReadDeviceTableViewCell alloc] initWithStyle:UITableViewCellStyleDefault
                                              reuseIdentifier:MyIdentifier];
    }
    
    
    if ([services count]-1 == indexPath.row) {
        NSArray *tmp = [services objectAtIndex:indexPath.row];
        [cell setTableViewCell:[tmp objectAtIndex:0] deviveTpyeImage:nil image:nil];
    }
    else{
        long count = [services count];
        if (!count == 0) {
            
            NSString* displayString;
            NSArray *serviceType = [services objectAtIndex:indexPath.row];
            
            if ([[serviceType objectAtIndex:0] isEqualToString:@"S"] || [[serviceType objectAtIndex:0] isEqualToString:@"R"])
            {
                displayString = [serviceType objectAtIndex:1];
                
                if ([[serviceType objectAtIndex:3] isEqualToString:@"FALSE"]) {
                    
                    [cell setTableViewCell:displayString deviveTpyeImage:[UIImage imageNamed:@"serialicon.png"] image:[UIImage imageNamed:@"broken.png"]];
                }
                else{
                    [cell setTableViewCell:displayString deviveTpyeImage:[UIImage imageNamed:@"serialicon.png"] image:[UIImage imageNamed:@"link-active.png"]];
                }
            }
            else{
                
                NSNetService *service = [[services objectAtIndex:indexPath.row] objectAtIndex:1];
                @try {
                    
                    NSArray *arry = [[NSString stringWithFormat:@"%@",[service name]] componentsSeparatedByString:@"("];
                    displayString = [[arry objectAtIndex:1] substringToIndex:[[arry objectAtIndex:1] length]-1];
                    
                    if ([[serviceType objectAtIndex:3] isEqualToString:@"FALSE"]) {
                        
                        [cell setTableViewCell:displayString deviveTpyeImage:[UIImage imageNamed:@" networkicon.png"] image:[UIImage imageNamed:@"broken.png"]];
                    }
                    else{
                        [cell setTableViewCell:displayString deviveTpyeImage:[UIImage imageNamed:@" networkicon.png"] image:[UIImage imageNamed:@"link-active.png"]];
                    }
                }
                @catch (NSException *exception) {
                    
                    if ([[serviceType objectAtIndex:3] isEqualToString:@"FALSE"]) {
                        
                        [cell setTableViewCell:[NSString stringWithFormat:@"%@",service] deviveTpyeImage:[UIImage imageNamed:@" networkicon.png"] image:[UIImage imageNamed:@"broken.png"]];
                    }
                    else{
                        [cell setTableViewCell:[NSString stringWithFormat:@"%@",service] deviveTpyeImage:[UIImage imageNamed:@" networkicon.png"] image:[UIImage imageNamed:@"link-active.png"]];
                    }
                }
            }
        }
    }
    
    return cell;
}

- (void)tableView:(UITableView *)tableView1 didDeselectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    //Selected cell background color
    ReadDeviceTableViewCell *cell1 = (ReadDeviceTableViewCell *)[tableView1 cellForRowAtIndexPath:indexPath];
    cell1.ttlLbl.textColor = [UIColor blackColor];
}

- (void)tableView:(UITableView *)tableView1 didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    //Selected cell background color
    ReadDeviceTableViewCell *cell1 = (ReadDeviceTableViewCell *)[tableView1 cellForRowAtIndexPath:indexPath];
    UIView *selectionBackground = [[UIView alloc] init];
    selectionBackground.backgroundColor = [UIColor colorWithRed:0.0/255 green:130.0/255.0 blue:255.0/255.0 alpha:1];
    cell1.selectedBackgroundView = selectionBackground;
    cell1.ttlLbl.textColor = [UIColor whiteColor];
    //cell1.textLabel.highlightedTextColor = [UIColor whiteColor];
    
    serviceselectedindex = indexPath.row;
    globalsServiceselectedindex = serviceselectedindex;
    
    NSArray *serviceType = [services objectAtIndex:indexPath.row];
    if ([[serviceType objectAtIndex:0] isEqualToString:@"S"]) {
        
        if ([serviceType count]== 5) {
            
            self.serialSmartCaseDeviceViewController = (SerialSmartCaseDeviceViewController*)[self.storyboard instantiateViewControllerWithIdentifier:@"SerialSmartCaseDeviceViewController"];
            self.serialSmartCaseDeviceViewController.selectedIndex = indexPath.row;
            
            [services replaceObjectAtIndex:indexPath.row withObject:[NSArray arrayWithObjects:[serviceType objectAtIndex:0],[serviceType objectAtIndex:1],[serviceType objectAtIndex:2],[serviceType objectAtIndex:3],[serviceType objectAtIndex:4],self.serialSmartCaseDeviceViewController, nil]];
            
            self.splitViewController.viewControllers = [NSArray arrayWithObjects:[[[self splitViewController] viewControllers] objectAtIndex:0],[[services objectAtIndex:indexPath.row] objectAtIndex:5], nil];
            
        }
        else{
            self.splitViewController.viewControllers = [NSArray arrayWithObjects:[[[self splitViewController] viewControllers] objectAtIndex:0],[[services objectAtIndex:indexPath.row] objectAtIndex:5], nil];
        }
    }
    else if ([[serviceType objectAtIndex:0] isEqualToString:@"R"]) {
        
        if ([serviceType count]== 5) {
            
            self.serialDeviceViewController = (SerialDeviceViewController*)[self.storyboard instantiateViewControllerWithIdentifier:@"SerialDeviceViewController"];
            self.serialDeviceViewController.selectedIndex = indexPath.row;
            
            [services replaceObjectAtIndex:indexPath.row withObject:[NSArray arrayWithObjects:[serviceType objectAtIndex:0],[serviceType objectAtIndex:1],[serviceType objectAtIndex:2],[serviceType objectAtIndex:3],[serviceType objectAtIndex:4],self.serialDeviceViewController, nil]];
            
            self.splitViewController.viewControllers = [NSArray arrayWithObjects:[[[self splitViewController] viewControllers] objectAtIndex:0],[[services objectAtIndex:indexPath.row] objectAtIndex:5], nil];
            
        }
        else{
            self.splitViewController.viewControllers = [NSArray arrayWithObjects:[[[self splitViewController] viewControllers] objectAtIndex:0],[[services objectAtIndex:indexPath.row] objectAtIndex:5], nil];
        }
    }
    else if([[serviceType objectAtIndex:0] isEqualToString:@"N"]){
        
        @try {
            int count = [services count];
            if (count != 0) {
                self.serviceResolver = [serviceType objectAtIndex:1];
                self.serviceResolver.delegate = self;
                [self.serviceResolver resolveWithTimeout:0.0];
            }
        }
        @catch (NSException *exception) {
            serviceIp = [[serviceType objectAtIndex:1] copy];
        }
        //.........
        
        if ([serviceType count] == 5) {
            
            self.networkDeviceViewController = (NetworkDeviceViewController*)[self.storyboard instantiateViewControllerWithIdentifier:@"NetworkDeviceViewController"];
            self.networkDeviceViewController.selectedIndex = indexPath.row;
            
            [services replaceObjectAtIndex:indexPath.row withObject:[NSArray arrayWithObjects:[serviceType objectAtIndex:0],[serviceType objectAtIndex:1],[serviceType objectAtIndex:2],[serviceType objectAtIndex:3],[serviceType objectAtIndex:4],self.networkDeviceViewController, nil]];
            
            self.splitViewController.viewControllers = [NSArray arrayWithObjects:[[[self splitViewController] viewControllers] objectAtIndex:0],[[services objectAtIndex:indexPath.row] objectAtIndex:5], nil];
        }
        else{
            self.splitViewController.viewControllers = [NSArray arrayWithObjects:[[[self splitViewController] viewControllers] objectAtIndex:0],[[services objectAtIndex:indexPath.row] objectAtIndex:5], nil];
        }
    }
    else{
        
        if ([serviceType count] == 5) {
            
            self.addDeviceViewController = (AddDeviceViewController*)[self.storyboard instantiateViewControllerWithIdentifier:@"AddDeviceViewController"];
            self.addDeviceViewController.selectedIndex = indexPath.row;
            
            [services replaceObjectAtIndex:indexPath.row withObject:[NSArray arrayWithObjects:[serviceType objectAtIndex:0],[serviceType objectAtIndex:1],[serviceType objectAtIndex:2],[serviceType objectAtIndex:3],[serviceType objectAtIndex:4],self.addDeviceViewController, nil]];
            self.splitViewController.viewControllers = [NSArray arrayWithObjects:[[[self splitViewController] viewControllers] objectAtIndex:0],[[services objectAtIndex:indexPath.row] objectAtIndex:5], nil];
            
        }
        else{
            self.splitViewController.viewControllers = [NSArray arrayWithObjects:[[[self splitViewController] viewControllers] objectAtIndex:0],[[services objectAtIndex:indexPath.row] objectAtIndex:5], nil];
        }
    }
}



-(void)connectionSccess
{
    NSArray *serviceType = [services objectAtIndex:serviceselectedindex];
    
    [services replaceObjectAtIndex:serviceselectedindex withObject:[NSArray arrayWithObjects:[serviceType objectAtIndex:0],[serviceType objectAtIndex:1],[serviceType objectAtIndex:2],@"TRUE",[serviceType objectAtIndex:4],[serviceType objectAtIndex:5], nil]];
    [self.tableView reloadData];
    [self tableViewCellSeleceted];
}

-(void)connectionDisconnected
{
    NSLog(@"*************connectionDisconnected******************");
    
    if([services count] > 0)
    {
        NSArray *serviceType = [services objectAtIndex:serviceselectedindex];
        if([serviceType count] > 5)
        {
            [services replaceObjectAtIndex:serviceselectedindex withObject:[NSArray arrayWithObjects:[serviceType objectAtIndex:0],[serviceType objectAtIndex:1],[serviceType objectAtIndex:2],@"FALSE",[serviceType objectAtIndex:4],[serviceType objectAtIndex:5], nil]];
        }
    }
    [self.tableView reloadData];
    [self tableViewCellSeleceted];
}


-(void)connectionSccessManual{
    
    [self.tableView reloadData];
    [self tableViewCellSeleceted];
}

- (void)tableViewCellSeleceted{
    
    NSIndexPath *indexPath=[NSIndexPath indexPathForRow:serviceselectedindex inSection:0];
    [tableView selectRowAtIndexPath:indexPath animated:YES  scrollPosition:UITableViewScrollPositionBottom];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
