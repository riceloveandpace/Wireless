//
//  AddDeviceViewController.m
//  URMA
//
//  Created by Raju on 03/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import "AddDeviceViewController.h"
#include <arpa/inet.h>
#import "Global.h"
#import "SettingVO.h"
#import "ReadResultsViewController.h"
#import "ReadResultsVO.h"

int selectedIndex_a = 0;

@interface AddDeviceViewController (){
    TMR_Region region;
    NSString *tplogfile;
    UIView *tplogView;
    UITextView *textView;
    
    UIButton *clearBtn;
    UIButton *closeBtn;
}
@end

@implementation AddDeviceViewController
@synthesize hostlbl,regionlbl,tranceportloglbl,readlbl,timeout_rfOn_lbl,fastsearchlbl;
@synthesize connectBtn,cancelBtn,hostTxtfield,regionValuelbl,tranceportlogBtn,readTypeSegment,timeout_rfOn_TxtField,rfOnTxtfield,fastSearchBtn,discontBtn;
@synthesize serviceIp;
@synthesize readBtn,disconnectBtn,lastlineView,transportLogViewBtn;
@synthesize selectedIndex,silenceTimer;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
    
    
    //set font style...
    self.hostlbl.font = font_Semibold_12;
    self.regionlbl.font = font_Semibold_12;
    self.tranceportloglbl.font = font_Semibold_12;
    self.readlbl.font = font_Semibold_12;
    self.timeout_rfOn_lbl.font = font_Semibold_12;
    self.fastsearchlbl.font = font_Semibold_12;
    self.rfoff.font = font_Semibold_12;
    
    self.regionValuelbl.font = font_Semibold_12;
    
    self.readBtn.titleLabel.font = font_ExtraBold_12;
    self.disconnectBtn.titleLabel.font = font_Normal_12;
    self.connectBtn.titleLabel.font = font_ExtraBold_12;
    self.cancelBtn.titleLabel.font = font_Normal_12;
    self.discontBtn.titleLabel.font = font_ExtraBold_12;
    
    self.readBtn.enabled = NO;
    self.disconnectBtn.enabled = NO;
    self.transportLogViewBtn.hidden = YES;
    self.fastSearchBtn.enabled = NO;
    self.tranceportlogBtn.enabled = YES;
    
    self.hostTxtfield.layer.borderWidth = 1.0;
    self.hostTxtfield.layer.borderColor = [[UIColor lightGrayColor] CGColor];
    self.hostTxtfield.backgroundColor = [UIColor whiteColor];
    //self.hostTxtfield.layer.cornerRadius = 3;
    self.hostTxtfield.delegate = self;
    
    self.timeout_rfOn_TxtField.layer.borderWidth = 1.0;
    self.timeout_rfOn_TxtField.layer.borderColor = [[UIColor lightGrayColor] CGColor];
    self.timeout_rfOn_TxtField.backgroundColor = [UIColor whiteColor];
    //self.timeout_rfOn_TxtField.layer.cornerRadius = 3;
    self.timeout_rfOn_TxtField.delegate = self;
    self.timeout_rfOn_TxtField.keyboardType = UIKeyboardTypeNumberPad;
    
    self.rfOnTxtfield.layer.borderWidth = 1.0;
    self.rfOnTxtfield.layer.borderColor = [[UIColor lightGrayColor] CGColor];
    self.rfOnTxtfield.backgroundColor = [UIColor whiteColor];
    //self.rfOnTxtfield.layer.cornerRadius = 3;
    self.rfOnTxtfield.delegate = self;
    self.rfOnTxtfield.keyboardType = UIKeyboardTypeNumberPad;
    
    self.timeout_rfOn_TxtField.text = @"250";
    self.rfOnTxtfield.text = @"0";
    
    [self.disconnectBtn setTitleColor:[UIColor grayColor] forState:UIControlStateNormal];
    //-------------------------------------------------------------------------
    
    self.hostTxtfield.text = [[[services objectAtIndex:selectedIndex] objectAtIndex:2] getHostName];
    self.regionValuelbl.text = [[[services objectAtIndex:selectedIndex] objectAtIndex:2] getRegion];
    [self.tranceportlogBtn setOn:[[[services objectAtIndex:selectedIndex] objectAtIndex:2] getTransportLog]];
    [self.readTypeSegment setSelectedSegmentIndex:[[[services objectAtIndex:selectedIndex] objectAtIndex:2] getRead]];
    self.timeout_rfOn_TxtField.text = [[[services objectAtIndex:selectedIndex] objectAtIndex:2] getTimeOut];
    [self.fastSearchBtn setSelected:[[[services objectAtIndex:selectedIndex] objectAtIndex:2] getFastSearch]];
    
    
    //------------------------------------------------------------------------
    
    self.rfoff.hidden = YES;
    self.rfOnTxtfield.hidden = YES;
    self.lastlineView.hidden = YES;
    self.discontBtn.hidden = YES;
    
    self.hostTxtfield.enabled = TRUE;
    self.readTypeSegment.enabled = FALSE;
    self.timeout_rfOn_TxtField.enabled = FALSE;
    self.rfOnTxtfield.enabled = FALSE;
    
    self.fastsearchlbl.frame = CGRectMake(20, 385, 250, 30);
    self.fastSearchBtn.frame = CGRectMake(self.fastSearchBtn.frame.origin.x, self.fastSearchBtn.frame.origin.y-50, self.view.frame.size.width, self.view.frame.size.height);
    
    self.connectBtn.frame = CGRectMake(self.connectBtn.frame.origin.x, self.connectBtn.frame.origin.y-50, self.connectBtn.frame.size.width, self.connectBtn.frame.size.height);
    self.discontBtn.frame = CGRectMake(self.discontBtn.frame.origin.x, self.discontBtn.frame.origin.y-50, self.discontBtn.frame.size.width, self.discontBtn.frame.size.height);
    self.cancelBtn.frame = CGRectMake(self.cancelBtn.frame.origin.x, self.cancelBtn.frame.origin.y-50, self.cancelBtn.frame.size.width, self.cancelBtn.frame.size.height);
}

- (IBAction)readTypeSegmentAction:(id)sender {
    
    if (self.readTypeSegment.selectedSegmentIndex == 0) {
        
        self.timeout_rfOn_lbl.text = @"Time Duration (ms)";
        self.rfoff.hidden = YES;
        self.rfOnTxtfield.hidden = YES;
        self.lastlineView.hidden = YES;
        
        self.timeout_rfOn_TxtField.text = @"250";

        
        self.fastsearchlbl.frame = CGRectMake(20, 385, 250, 30);
        self.fastSearchBtn.frame = CGRectMake(self.fastSearchBtn.frame.origin.x, self.fastSearchBtn.frame.origin.y-50, self.view.frame.size.width, self.view.frame.size.height);
        
        self.connectBtn.frame = CGRectMake(self.connectBtn.frame.origin.x, self.connectBtn.frame.origin.y-50, self.connectBtn.frame.size.width, self.connectBtn.frame.size.height);
        self.discontBtn.frame = CGRectMake(self.discontBtn.frame.origin.x, self.discontBtn.frame.origin.y-50, self.discontBtn.frame.size.width, self.discontBtn.frame.size.height);
        self.cancelBtn.frame = CGRectMake(self.cancelBtn.frame.origin.x, self.cancelBtn.frame.origin.y-50, self.cancelBtn.frame.size.width, self.cancelBtn.frame.size.height);
    }
    else{
        
        self.timeout_rfOn_lbl.text = @"RF On (ms)";
        self.rfoff.hidden = NO;
        self.rfOnTxtfield.hidden = NO;
        self.fastSearchBtn.hidden = NO;
        self.lastlineView.hidden = NO;
        
        self.fastsearchlbl.frame = CGRectMake(20, 435, 250, 30);
        self.fastSearchBtn.frame = CGRectMake(self.fastSearchBtn.frame.origin.x, self.fastSearchBtn.frame.origin.y+50, self.view.frame.size.width, self.view.frame.size.height);
        
        self.connectBtn.frame = CGRectMake(self.connectBtn.frame.origin.x, self.connectBtn.frame.origin.y+50, self.connectBtn.frame.size.width, self.connectBtn.frame.size.height);
        self.discontBtn.frame = CGRectMake(self.discontBtn.frame.origin.x, self.discontBtn.frame.origin.y+50, self.discontBtn.frame.size.width, self.discontBtn.frame.size.height);
        self.cancelBtn.frame = CGRectMake(self.cancelBtn.frame.origin.x, self.cancelBtn.frame.origin.y+50, self.cancelBtn.frame.size.width, self.cancelBtn.frame.size.height);
        
        self.timeout_rfOn_TxtField.text = @"1000";
        self.rfOnTxtfield.text = @"0";
        
    }
}

- (BOOL)isValidIPAddress
{
    const char *utf8 = [self.hostTxtfield.text UTF8String];
    int success;
    
    struct in_addr dst;
    success = inet_pton(AF_INET, utf8, &dst);
    if (success != 1) {
        struct in6_addr dst6;
        success = inet_pton(AF_INET6, utf8, &dst6);
    }
    
    return (success == 1 ? TRUE : FALSE);
}


- (IBAction)connectAction:(id)sender {
    
    [self.view addSubview:HUD];
    
    //show HUD (Spinner).....
    [HUD show:YES];
    [timeout_rfOn_TxtField resignFirstResponder];
    //NSLog(@"connectBtnTouched");
    //[writelog writeData:[@"connectBtnTouched \n" dataUsingEncoding:NSUTF8StringEncoding]];
    
    [self.hostTxtfield resignFirstResponder];
    
    //validate ip address...
    if ([[[self.hostTxtfield text] stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] length] == 0) {
        
        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                          message:@"* Enter valid IP Address"
                                                         delegate:nil
                                                cancelButtonTitle:@"OK"
                                                otherButtonTitles:nil];
        
        [message show];
        [HUD hide:YES];
        return;
    }
    else if(![self isValidIPAddress]) {
        
        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                          message:@"* Invalid IP"
                                                         delegate:nil
                                                cancelButtonTitle:@"OK"
                                                otherButtonTitles:nil];
        
        [message show];
        [HUD hide:YES];
        return;
        
    };
    
    /** If service is stoping from enumareated list...*/
    if ([[[services objectAtIndex:selectedIndex] objectAtIndex:0] isEqualToString:@"Add device manually..."]) {
        
        for (int i=0; i<[services count]; i++) {
            @try {
                if ([[[services objectAtIndex:i] objectAtIndex:1] isEqualToString:self.hostTxtfield.text]) {
                    
                    UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                      message:@"* Service Existed"
                                                                     delegate:nil
                                                            cancelButtonTitle:@"OK"
                                                            otherButtonTitles:nil];
                    
                    [message show];
                    [HUD hide:YES];
                    return;
                    // }
                }
            }
            @catch (NSException *exception) {
                
            }
        }
    }
    
    
    rp = &r;
    const char *deviceURI = [[NSString stringWithFormat:@"tmr://%@",self.hostTxtfield.text] UTF8String];
    ret = TMR_create(rp, deviceURI);
    
    //Transport log listener..............................................
    
    if ([self.tranceportlogBtn isOn]) {
        
        NSString *documentsDirectory = [NSSearchPathForDirectoriesInDomains (NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0];
        tplogfile = [documentsDirectory stringByAppendingPathComponent:[NSString stringWithFormat:@"%@.log",self.hostTxtfield.text]];
        //create file if it doesn't exist
        if(![[NSFileManager defaultManager] fileExistsAtPath:tplogfile])
            [[NSFileManager defaultManager] createFileAtPath:tplogfile contents:nil attributes:nil];
        
        //append text to file (you'll probably want to add a newline every write)
        writetplog = [NSFileHandle fileHandleForUpdatingAtPath:tplogfile];
        
        
        NSArray *serviceType = [services objectAtIndex:selectedIndex];
        [services replaceObjectAtIndex:selectedIndex withObject:[NSArray arrayWithObjects:[serviceType objectAtIndex:0],[serviceType objectAtIndex:1],[serviceType objectAtIndex:2],[serviceType objectAtIndex:3],tplogfile,[serviceType objectAtIndex:5], nil]];
        
        self.transportLogViewBtn.hidden = NO;
        
        //call TransportListener
        tb.listener = stringPrinter;
        
        tb.cookie = NULL;
        ret = TMR_addTransportListener(rp, &tb);
    }
    
    dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0), ^{
        
        ret = TMR_connect(rp);
        dispatch_async( dispatch_get_main_queue(), ^{
            
            if (TMR_SUCCESS == ret)
            {
                //NSLog(@"-success-");
                
                self.connectBtn.hidden = YES;
                self.discontBtn.hidden = NO;
                //headerView.statusShowIcon.image=[UIImage imageNamed:@"light-orange.png"];
                self.readBtn.enabled = YES;
                self.disconnectBtn.enabled = YES;
                
                self.tranceportlogBtn.enabled = NO;
                ret = TMR_removeTransportListener(rp, &tb);
                
                
                if (![[[services objectAtIndex:selectedIndex] objectAtIndex:0] isEqualToString:@"N"]) {
                    
                    // Add Items to "services" Array.....
                    [services insertObject:[NSArray arrayWithObjects:@"N",self.hostTxtfield.text,[[SettingVO alloc] init],@"TRUE",[[services objectAtIndex:selectedIndex] objectAtIndex:4],[[services objectAtIndex:selectedIndex] objectAtIndex:5], nil] atIndex:[services count]-1];
                    
                    
                    long index = [services count]-1;
                    NSArray *serviceType = [services objectAtIndex:index];
                    [services replaceObjectAtIndex:index withObject:[NSArray arrayWithObjects:[serviceType objectAtIndex:0],[serviceType objectAtIndex:1],[serviceType objectAtIndex:2],@"FALSE",[serviceType objectAtIndex:4], nil]];
                    
                    
                    headerView.statusShowIcon.image = [UIImage imageNamed:@"light-orange.png"];
                    
                    //region = TMR_REGION_NONE;
                    ret = TMR_paramGet(rp, TMR_PARAM_REGION_ID, &region);
                    int regValue = [[NSString stringWithFormat:@"%d",region] intValue];
                    
                    if (regValue == 0) {
                        self.regionValuelbl.text = @"NONE";
                    }else if(regValue == 1){
                        self.regionValuelbl.text = @"NA";
                    }
                    else if(regValue == 2){
                        self.regionValuelbl.text = @"EU";
                    }
                    else if(regValue == 3){
                        self.regionValuelbl.text = @"KR";
                    }
                    else if(regValue == 4){
                        self.regionValuelbl.text = @"IN";
                    }
                    else if(regValue == 5){
                        self.regionValuelbl.text = @"JP";
                    }
                    else if(regValue == 6){
                        self.regionValuelbl.text = @"PRC";
                    }
                    else if(regValue == 7){
                        self.regionValuelbl.text = @"EU2";
                    }
                    else if(regValue == 8){
                        self.regionValuelbl.text = @"EU3";
                    }
                    else if(regValue == 9){
                        self.regionValuelbl.text = @"KR2";
                    }
                    else if(regValue == 10){
                        self.regionValuelbl.text = @"PRC2";
                    }
                    else if(regValue == 11){
                        self.regionValuelbl.text = @"AU";
                    }
                    else if(regValue == 12){
                        self.regionValuelbl.text = @"NZ";
                    }
                }
                else{
                    
                    [services replaceObjectAtIndex:selectedIndex withObject:[NSArray arrayWithObjects:@"N",self.hostTxtfield.text,[[services objectAtIndex:selectedIndex] objectAtIndex:2],@"TRUE",[[services objectAtIndex:selectedIndex] objectAtIndex:4],[[services objectAtIndex:selectedIndex] objectAtIndex:5], nil]];
                    
                }
                self.readTypeSegment.enabled = TRUE;
                self.timeout_rfOn_TxtField.enabled = TRUE;
                self.rfOnTxtfield.enabled = TRUE;
                self.hostTxtfield.enabled = FALSE;
                [self.disconnectBtn setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
                
                [[NSNotificationCenter defaultCenter] postNotificationName:@"con_Success_Manual" object:self];
                
            }
            else{
                
                //NSLog(@"* Couldn't open device");
                UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                  message:@"Couldn't open device"
                                                                 delegate:nil
                                                        cancelButtonTitle:@"OK"
                                                        otherButtonTitles:nil];
                
                [message show];
            }
            [HUD hide:YES];
        });
    });
}



void stringPrinter(bool tx,uint32_t dataLen, const uint8_t data[],uint32_t timeout, void *cookie)
{
    //[writelog writeData:[@"serialDeviceStringPrinter \n" dataUsingEncoding:NSUTF8StringEncoding]];
    @try {
        [writetplog writeData:[[NSString stringWithFormat:@"%s",tx ? "Sending: " : "Received:"] dataUsingEncoding:NSUTF8StringEncoding]];
        [writetplog writeData:[[NSString stringWithFormat:@"%s\n",data] dataUsingEncoding:NSUTF8StringEncoding]];
    }
    @catch (NSException *exception) {
        //NSLog(@"%@",exception);
    }
    
}

-(void) discontBtnAction{
    
    [self.view addSubview:HUD];
    [HUD show:YES];
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0), ^{
        [self.silenceTimer invalidate];
        if (rp != NULL) {
            ret = TMR_stopReading(rp);
            ret = TMR_removeReadListener(rp, &rlb);
            ret = TMR_removeReadExceptionListener(rp, &reb);
            
            TMR_destroy(rp);
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            
            timeInSec = @"0";
            tagBySec = @"0";
            alltotalTags = 0;
            [allReadResultsArray removeAllObjects];
            [allepclblsArray removeAllObjects];
            
            self.connectBtn.hidden = NO;
            self.connectBtn.userInteractionEnabled = YES;
            
            self.discontBtn.hidden = YES;
            self.readBtn.enabled = NO;
            self.disconnectBtn.enabled = NO;
            //NSLog(@"read results stoped.");
            [HUD hide:YES];
            
            self.transportLogViewBtn.hidden = YES;
            self.tranceportlogBtn.enabled = YES;
            [self.tranceportlogBtn setOn:NO animated:YES];
            self.readTypeSegment.enabled = FALSE;
            self.timeout_rfOn_TxtField.enabled = FALSE;
            self.rfOnTxtfield.enabled = FALSE;
            self.hostTxtfield.enabled = TRUE;
            [self.disconnectBtn setTitleColor:[UIColor grayColor] forState:UIControlStateNormal];
            
            [[NSNotificationCenter defaultCenter] postNotificationName:@"conn_Disconnect" object:self];
            
        });
    });
}

- (IBAction)discontBtnAction:(id)sender {
    
    [self.view addSubview:HUD];
    [HUD show:YES];
    
    TMR_destroy(rp);
    self.transportLogViewBtn.hidden = YES;
    self.tranceportlogBtn.enabled = YES;
    [self.tranceportlogBtn setOn:NO animated:YES];
    self.connectBtn.hidden = NO;
    self.connectBtn.userInteractionEnabled = YES;
    self.discontBtn.hidden = YES;
    //headerView.statusShowIcon.image=[UIImage imageNamed:@"light-red.png"];
    self.readBtn.enabled = NO;
    self.disconnectBtn.enabled = NO;
    self.readTypeSegment.enabled = FALSE;
    self.timeout_rfOn_TxtField.enabled = FALSE;
    self.rfOnTxtfield.enabled = FALSE;
    self.hostTxtfield.enabled = TRUE;
    [self.disconnectBtn setTitleColor:[UIColor grayColor] forState:UIControlStateNormal];
    
    if ((UIButton *)sender == self.discontBtn) {
        [[NSNotificationCenter defaultCenter] postNotificationName:@"conn_Disconnect" object:self];
    }
    [HUD hide:YES];
}

- (IBAction)cancelAction:(id)sender {    
}


- (IBAction)readAction:(id)sender {
    
    [[[services objectAtIndex:selectedIndex] objectAtIndex:2] setRead:self.readTypeSegment.selectedSegmentIndex];
    
    self.connectBtn.userInteractionEnabled = FALSE;
    self.connectBtn.titleLabel.textColor = [UIColor lightGrayColor];
    [timeout_rfOn_TxtField resignFirstResponder];
    if(self.readTypeSegment.selectedSegmentIndex == 0){
        
        [self syncRead];
    }
    else if (self.readTypeSegment.selectedSegmentIndex == 1)
    {
        
        NSString *rsON = [self.timeout_rfOn_TxtField.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        NSString *rsOff = [self.rfOnTxtfield.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        
        if ([rsON length] == 0 )
        {
            UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                              message:@"read timeout can't be empty"
                                                             delegate:nil
                                                    cancelButtonTitle:@"Cancel"
                                                    otherButtonTitles:nil];
            
            [message show];
            
            self.timeout_rfOn_TxtField.text = @"1000";
            [HUD hide:YES];
            
        }
        if ([rsOff length] == 0)
        {
            UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                              message:@"read timeout can't be empty"
                                                             delegate:nil
                                                    cancelButtonTitle:@"Cancel"
                                                    otherButtonTitles:nil];
            
            [message show];
            self.rfOnTxtfield.text = @"0";
            [HUD hide:YES];
            
        }
        
        else if ([rsON intValue] > 65535)
        {
            UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                              message:@"read timeout must be less than 65535"
                                                             delegate:nil
                                                    cancelButtonTitle:@"Cancel"
                                                    otherButtonTitles:nil];
            [message show];
            self.timeout_rfOn_TxtField.text = @"1000";
            [HUD hide:YES];
        }
        else if ([rsOff intValue] > 65535)
        {
            UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                              message:@"read timeout must be less than 65535"
                                                             delegate:nil
                                                    cancelButtonTitle:@"Cancel"
                                                    otherButtonTitles:nil];
            [message show];
            self.rfOnTxtfield.text = @"0";
            [HUD hide:YES];
        }
        else{
            [self asyncRead];
        }
    }
}

-(void)syncRead
{
    [self.view addSubview:HUD];
    [HUD show:YES];
    NSString *value = [self.timeout_rfOn_TxtField.text stringByTrimmingCharactersInSet:[NSCharacterSet    whitespaceCharacterSet]];
    
    if ([value length] == 0)
    {
        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                          message:@"read timeout can't be empty"
                                                         delegate:nil
                                                cancelButtonTitle:@"Cancel"
                                                otherButtonTitles:nil];
        
        [message show];
        
        self.timeout_rfOn_TxtField.text = @"250";
        [HUD hide:YES];
        
    }
    else if ([value isEqualToString:@"0"])
    {
        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                          message:@"read timeout should be greater than zero"
                                                         delegate:nil
                                                cancelButtonTitle:@"Cancel"
                                                otherButtonTitles:nil];
        [message show];
        self.timeout_rfOn_TxtField.text = @"250";
        [HUD hide:YES];
    }
    else if ([value intValue] > 65535)
    {
        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                          message:@"read timeout must be less than 65535"
                                                         delegate:nil
                                                cancelButtonTitle:@"Cancel"
                                                otherButtonTitles:nil];
        [message show];
        self.timeout_rfOn_TxtField.text = @"250";
        [HUD hide:YES];
    }
    else
    {
        //added by CHandhu
        timeInSec = [NSString stringWithFormat:@"%.02f",([timeout_rfOn_TxtField.text floatValue]/1000.0)];
        //
        dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            
            ret = TMR_read(rp,[self.timeout_rfOn_TxtField.text intValue], NULL);
            if (TMR_ERROR_TIMEOUT == ret)
            {
                dispatch_async( dispatch_get_main_queue(), ^{
                    
                    UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                      message:@"* Operation timeout"
                                                                     delegate:nil
                                                            cancelButtonTitle:@"Cancel"
                                                            otherButtonTitles:nil];
                    [message show];
                    [HUD hide:YES];
                });
            }
            else
            {
                
                if (TMR_ERROR_CRC_ERROR == ret)
                {
                    dispatch_async( dispatch_get_main_queue(), ^{
                        
                        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                          message:@"* CRC Error"
                                                                         delegate:nil
                                                                cancelButtonTitle:@"Cancel"
                                                                otherButtonTitles:nil];
                        [message show];
                        [HUD hide:YES];
                    });
                }
                if((TMR_ERROR_TIMEOUT == ret))
                {
                    dispatch_async( dispatch_get_main_queue(), ^{
                        
                        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                          message:@"* Operation timeout"
                                                                         delegate:nil
                                                                cancelButtonTitle:@"Cancel"
                                                                otherButtonTitles:nil];
                        [message show];
                        [HUD hide:YES];
                    });
                }
                
                DLog(@"TMR_read Status:%d", ret);
                
                if(TMR_ERROR_NO_ANTENNA == ret)
                {
                    dispatch_async( dispatch_get_main_queue(), ^{
                        
                        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                          message:@"* Antenna not Connected"
                                                                         delegate:nil
                                                                cancelButtonTitle:@"Cancel"
                                                                otherButtonTitles:nil];
                        [message show];
                        [HUD hide:YES];
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
                                
                                UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                                  message:@"* CRC Error"
                                                                                 delegate:nil
                                                                        cancelButtonTitle:@"Cancel"
                                                                        otherButtonTitles:nil];
                                [message show];
                                [HUD hide:YES];
                            });
                        }
                        TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
                        
                        NSString *epcString = [NSString stringWithFormat:@"%s", epcStr];
                        NSString *epcCount = [NSString stringWithFormat:@"%@",[NSNumber numberWithInt:trd.readCount]];
                        NSString *antenna = [NSString stringWithFormat:@"%@",[NSNumber numberWithInt:trd.antenna]];
                        NSString *protocol = [NSString stringWithFormat:@"%u",trd.tag.protocol];
                        if ([protocol intValue] == 0) {
                            protocol = @"NONE";
                        }
                        else if ([protocol intValue] == 3){
                            protocol = @"ISO180006B";
                        }
                        else if ([protocol intValue] == 5){
                            protocol = @"Gen2";
                        }
                        else if ([protocol intValue] == 6){
                            protocol = @"ISO180006B_UCODE";
                        }
                        else if ([protocol intValue] == 7){
                            protocol = @"IPX64";
                        }
                        else if ([protocol intValue] == 8){
                            protocol = @"IPX256";
                        }
                        else{
                            protocol = @"unknown";
                        }
                        NSString *phase = [NSString stringWithFormat:@"%@",[NSNumber numberWithInt:trd.phase]];
                        NSString *frequency = [NSString stringWithFormat:@"%@",[NSNumber numberWithInt:trd.frequency]];
                        NSString *rssi = [NSString stringWithFormat:@"%@",[NSNumber numberWithInt:trd.rssi]];
                        
                        char timeStr[128];
                        uint8_t shift;
                        uint64_t timestamp;
                        time_t seconds;
                        int micros;
                        char* timeEnd;
                        char* end;
                        
                        shift = 32;
                        timestamp = ((uint64_t)trd.timestampHigh<<shift) | trd.timestampLow;
                        seconds = timestamp / 1000;
                        micros = (timestamp % 1000) * 1000;
                        micros -= trd.dspMicros / 1000;
                        micros += trd.dspMicros;
                        timeEnd = timeStr + sizeof(timeStr)/sizeof(timeStr[0]);
                        end = timeStr;
                        end += strftime(end, timeEnd-end, "%H:%M:%S", localtime(&seconds));
                        NSString *timestampHigh = [NSString stringWithFormat:@"%s",timeStr];
                        
                        
                        ReadResultsVO *rrso;
                        if (![allepclblsArray containsObject:epcString]){
                            [allepclblsArray addObject:epcString];
                            
                            rrso = [[ReadResultsVO alloc] init];
                            [rrso setepclblTxt:epcString];
                            [rrso setepcTagCount:[epcCount intValue]];
                            [rrso setepcServiceName:[[services objectAtIndex:selectedIndex_a] objectAtIndex:1]];
                            [rrso setAntenna:[antenna intValue]];
                            [rrso setProtocol:protocol];
                            [rrso setPhase:phase];
                            [rrso setFrequency:frequency];
                            [rrso setRssi:[rssi intValue]];
                            [rrso setTimestampHigh:timestampHigh];
                            [allReadResultsArray addObject:rrso];
                            
                        }
                        else{
                            
                            NSInteger epcStrPosition = [allepclblsArray indexOfObject:epcString];
                            rrso = [allReadResultsArray objectAtIndex:epcStrPosition];
                            [rrso setepcTagCount:[rrso getepcTagCount]+[[NSNumber numberWithInt:trd.readCount] intValue]];
                            [rrso setTimestampHigh:timestampHigh];
                        }
                        alltotalTags = alltotalTags +[epcCount intValue];
                    }
                    if ((TMR_ERROR_NO_TAGS != ret) && (TMR_ERROR_CRC_ERROR == ret))
                    {
                        dispatch_async( dispatch_get_main_queue(), ^{
                            
                            UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                              message:@"* CRC Error"
                                                                             delegate:nil
                                                                    cancelButtonTitle:@"Cancel"
                                                                    otherButtonTitles:nil];
                            [message show];
                            [HUD hide:YES];
                        });
                    }
                    dispatch_async( dispatch_get_main_queue(), ^{
                        
                        //[writelog writeData:[@"--success--\n" dataUsingEncoding:NSUTF8StringEncoding]];
                        [HUD hide:YES];
                        
                        if (readToggle) {
                            [[NSNotificationCenter defaultCenter] postNotificationName:@"ReadResults" object:self];
                            readToggle = FALSE;
                        }
                    });
                }
            }
        });
    }
}



-(void)asyncRead
{
    dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0), ^{
        
        rlb.listener = callback2;
        rlb.cookie = NULL;
        reb.listener = exceptionCallback2;
        reb.cookie = NULL;
        ret = TMR_addReadListener(rp, &rlb);
        ret = TMR_addReadExceptionListener(rp, &reb);
        
        ret = TMR_paramSet(rp, TMR_PARAM_READ_ASYNCOFFTIME, (__bridge const void *)(self.timeout_rfOn_TxtField.text));
        ret = TMR_paramSet(rp, TMR_PARAM_READ_ASYNCONTIME, (__bridge const void *)(self.rfOnTxtfield.text));
        ret = TMR_startReading(rp);
        
        UIBackgroundTaskIdentifier bgTask = 0;
        UIApplication  *app = [UIApplication sharedApplication];
        bgTask = [app beginBackgroundTaskWithExpirationHandler:^{
            [app endBackgroundTask:bgTask];
        }];
        
        dispatch_async( dispatch_get_main_queue(), ^{
            
            if (readToggle) {
                [[NSNotificationCenter defaultCenter] postNotificationName:@"ReadResults" object:self];
                readToggle = FALSE;
            }
            [[NSNotificationCenter defaultCenter] postNotificationName:@"StopHUD" object:self];
        });
    });
}


void callback2(TMR_Reader *reader, const TMR_TagReadData *t, void *cookie){
    
    @autoreleasepool
    {
        //if ([exceptionlbl length] == 0) {
        char epcStr[128];
        TMR_bytesToHex(t->tag.epc, t->tag.epcByteCount, epcStr);
        
        NSString *epcString = [NSString stringWithFormat:@"%s", epcStr];
        NSString *epcCount = [NSString stringWithFormat:@"%@",[NSNumber numberWithInt:t->readCount]];
        NSString *antenna = [NSString stringWithFormat:@"%@",[NSNumber numberWithInt:t->antenna]];
        NSString *protocol = [NSString stringWithFormat:@"%u",t->tag.protocol];
        if ([protocol intValue] == 0) {
            protocol = @"NONE";
        }
        else if ([protocol intValue] == 3){
            protocol = @"ISO180006B";
        }
        else if ([protocol intValue] == 5){
            protocol = @"Gen2";
        }
        else if ([protocol intValue] == 6){
            protocol = @"ISO180006B_UCODE";
        }
        else if ([protocol intValue] == 7){
            protocol = @"IPX64";
        }
        else if ([protocol intValue] == 8){
            protocol = @"IPX256";
        }
        else{
            protocol = @"unknown";
        }
        NSString *phase = [NSString stringWithFormat:@"%@",[NSNumber numberWithInt:t->phase]];
        NSString *frequency = [NSString stringWithFormat:@"%@",[NSNumber numberWithInt:t->frequency]];
        NSString *rssi = [NSString stringWithFormat:@"%@",[NSNumber numberWithInt:t->rssi]];
        
        char timeStr[128];
        uint8_t shift;
        uint64_t timestamp;
        time_t seconds;
        int micros;
        char* timeEnd;
        char* end;
        
        shift = 32;
        timestamp = ((uint64_t)t->timestampHigh<<shift) | t->timestampLow;
        seconds = timestamp / 1000;
        micros = (timestamp % 1000) * 1000;
        micros -= t->dspMicros / 1000;
        micros += t->dspMicros;
        timeEnd = timeStr + sizeof(timeStr)/sizeof(timeStr[0]);
        end = timeStr;
        end += strftime(end, timeEnd-end, "%H:%M:%S", localtime(&seconds));
        NSString *timestampHigh = [NSString stringWithFormat:@"%s",timeStr];
        
        ReadResultsVO *rrso;
        if (![allepclblsArray containsObject:epcString]){
            [allepclblsArray addObject:epcString];
            
            rrso = [[ReadResultsVO alloc] init];
            [rrso setepclblTxt:epcString];
            [rrso setepcTagCount:[epcCount intValue]];
            [rrso setepcServiceName:[[services objectAtIndex:selectedIndex_a] objectAtIndex:1]];
            [rrso setAntenna:[antenna intValue]];
            [rrso setProtocol:protocol];
            [rrso setPhase:phase];
            [rrso setFrequency:frequency];
            [rrso setRssi:[rssi intValue]];
            [rrso setTimestampHigh:timestampHigh];
            [allReadResultsArray addObject:rrso];
        }
        else{
            
            NSInteger epcStrPosition = [allepclblsArray indexOfObject:epcString];
            rrso = [allReadResultsArray objectAtIndex:epcStrPosition];
            [rrso setepcTagCount:[rrso getepcTagCount]+[[NSNumber numberWithInt:t->readCount] intValue]];
            [rrso setTimestampHigh:timestampHigh];
        }
        alltotalTags = alltotalTags +[epcCount intValue];
    }
}


void exceptionCallback2(TMR_Reader *reader, TMR_Status error, void *cookie){
    
    //TMR_startReading(reader);
    exceptionlbl =  [NSString stringWithFormat:@"%s",TMR_strerr(reader, error)];
    [[NSNotificationCenter defaultCenter] postNotificationName:@"DisplayException" object:exceptionlbl userInfo:nil];
    
}

- (IBAction)disconnectAllAction:(id)sender {
    
    for (int i=0; i<[services count]; i++) {
        
        if ([[[services objectAtIndex:i] objectAtIndex:3] isEqualToString:@"TRUE"]) {
            
            NSArray *serviceType = [services objectAtIndex:i];
            [[serviceType objectAtIndex:5] discontBtnAction:nil];
            
            [services replaceObjectAtIndex:i withObject:[NSArray arrayWithObjects:[serviceType objectAtIndex:0],[serviceType objectAtIndex:1],[serviceType objectAtIndex:2],@"FALSE",[serviceType objectAtIndex:4],[serviceType objectAtIndex:5], nil]];
            
        }
    }
    
    [[NSNotificationCenter defaultCenter] postNotificationName:@"con_Success_Manual" object:self];
}

-(IBAction)clearTransportLogData:(id)sender{
    
    @try {
        textView.text = @"";
        [[NSFileManager defaultManager] createFileAtPath:[[services objectAtIndex:selectedIndex] objectAtIndex:4] contents:nil attributes:nil];
        
    }
    @catch (NSException *exception) {
        //NSLog(@"%@",exception);
    }
}

-(IBAction)cancelTransportView:(id)sender{
    
    tplogView.hidden = YES;
}

- (IBAction)transportLogViewBtnAction:(id)sender {
    
    //[self.splitViewController.view addSubview:HUD];
    //[HUD show:YES];
    
    tplogView=[[UIView alloc]initWithFrame:CGRectMake(0, 60, 768, 970)];
    [tplogView setBackgroundColor:[UIColor colorWithRed:188.0/255.0 green:210.0/255.0 blue:144.0/255.0 alpha:1]];
    [self.splitViewController.view addSubview:tplogView];
    tplogView.hidden = NO;
    
    clearBtn = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    [clearBtn addTarget:self
                 action:@selector(clearTransportLogData:)
       forControlEvents:UIControlEventTouchUpInside];
    [clearBtn setTitle:@"Clear" forState:UIControlStateNormal];
    clearBtn.frame = CGRectMake(10.0, 10.0, 80.0, 35.0);
    clearBtn.backgroundColor = [UIColor whiteColor];
    clearBtn.layer.cornerRadius = 2.0;
    clearBtn.titleLabel.font = font_Normal_12;
    clearBtn.titleLabel.textColor = [UIColor blackColor];
    [tplogView addSubview:clearBtn];
    
    closeBtn = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    [closeBtn addTarget:self
                 action:@selector(cancelTransportView:)
       forControlEvents:UIControlEventTouchUpInside];
    [closeBtn setTitle:@"Close" forState:UIControlStateNormal];
    closeBtn.frame = CGRectMake(680.0, 10.0, 80.0, 35.0);
    closeBtn.backgroundColor = [UIColor whiteColor];
    closeBtn.titleLabel.font = font_Normal_12;
    closeBtn.titleLabel.textColor = [UIColor blackColor];
    closeBtn.layer.cornerRadius = 2.0;
    [tplogView addSubview:closeBtn];
    
    textView = [[UITextView alloc]initWithFrame:CGRectMake(10,50,750,905)];
    textView.font = font_Normal_12;
    textView.backgroundColor = [UIColor whiteColor];
    textView.scrollEnabled = YES;
    textView.text = [NSString stringWithContentsOfFile:[[services objectAtIndex:selectedIndex] objectAtIndex:4] encoding:NSUTF8StringEncoding error:nil];
    [tplogView addSubview:textView];
    
    UIInterfaceOrientation orientation = [[UIApplication sharedApplication] statusBarOrientation];
    if (orientation == UIInterfaceOrientationLandscapeRight || orientation == UIInterfaceOrientationLandscapeLeft) {
        tplogView.frame = CGRectMake(0, 60, 1024, 710);
        clearBtn.frame = CGRectMake(10.0, 10.0, 80.0, 35.0);
        closeBtn.frame = CGRectMake(936.0, 10.0, 80.0, 35.0);
        textView.frame = CGRectMake(10,50,1006,650);
    }
}

-(void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration{
    
    if (IS_IPAD) {
        if (self.interfaceOrientation == UIInterfaceOrientationPortrait || self.interfaceOrientation == UIInterfaceOrientationPortraitUpsideDown)
        {
            // Portrait
            tplogView.frame = CGRectMake(0, 60, 768, 970);
            clearBtn.frame = CGRectMake(10.0, 10.0, 80.0, 35.0);
            closeBtn.frame = CGRectMake(680.0, 10.0, 80.0, 35.0);
            textView.frame = CGRectMake(10,50,750,905);
        }
        else
        {
            // Landscape
            tplogView.frame = CGRectMake(0, 60, 1024, 710);
            clearBtn.frame = CGRectMake(10.0, 10.0, 80.0, 35.0);
            closeBtn.frame = CGRectMake(936.0, 10.0, 80.0, 35.0);
            textView.frame = CGRectMake(10,50,1006,650);
        }
    }
}


- (IBAction)transPortloggingAction:(id)sender {
    
    if ([self.tranceportlogBtn isOn]) {
        
        if (![[[services objectAtIndex:selectedIndex] objectAtIndex:4] isEqualToString:@""]) {
            self.transportLogViewBtn.hidden = NO;
        }
    }
    else{
        
        self.transportLogViewBtn.hidden = YES;
    }
}

-(void) stopReadResults{
    
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        [self.silenceTimer invalidate];
        if (rp != NULL) {
            ret = TMR_stopReading(rp);
            ret = TMR_removeReadListener(rp, &rlb);
            ret = TMR_removeReadExceptionListener(rp, &reb);
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            //NSLog(@"read results stoped.");
            [[NSNotificationCenter defaultCenter] postNotificationName:@"StopHUD" object:self];
        });
    });
}


- (BOOL) textField: (UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString: (NSString *)string {
    
    if (textField == self.timeout_rfOn_TxtField || textField == self.rfOnTxtfield) {
        
        NSNumberFormatter * nf = [[NSNumberFormatter alloc] init];
        [nf setNumberStyle:NSNumberFormatterNoStyle];
        
        NSString * newString = [NSString stringWithFormat:@"%@%@",textField.text,string];
        NSNumber * number = [nf numberFromString:newString];
        if (number)
            return YES;
        else
            return NO;
    }
    else{
        return YES;
    }
}

-(void) didRotateFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation{
    //[self.view addSubview:HUD];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
