//
//  SerialSmartCaseDeviceViewController.m
//  URMA
//
//  Created by qvantel on 11/5/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import "SerialSmartCaseDeviceViewController.h"
#include <arpa/inet.h>
#import "RDRscMgrInterface.h"
#import "Global.h"
#import "SettingVO.h"
#import "ReadResultsVO.h"
#import "ViewController.h"

int selectedIndex_s1 = 0;

@interface SerialSmartCaseDeviceViewController  ()<RDRscMgrInterfaceDelegate>{
    
    TMR_Region region;
    NSString *tplogfile;
    UIView *tplogView;
    UITextView *textView;
    
    UIButton *clearBtn;
    UIButton *closeBtn;
}
@property (nonatomic, strong) UIPopoverController *listPickerPopover;

@end

@implementation SerialSmartCaseDeviceViewController
@synthesize baudratelbl,regionlbl,tranceportloglbl,readlbl,timeout_rfOn_lbl,fastsearchlbl,rfoff;
@synthesize connectBtn,cancelBtn,baudrateTxtfield,regionTxtfield,tranceportlogBtn,readTypeSegment,timeout_rfOn_TxtField,rfOnTxtfield,fastSearchBtn,baudratelistBtn,regionlistBtn;
@synthesize readBtn,disconnectBtn,lastlineView,discontBtn,transportLogViewBtn;
@synthesize selectedIndex,silenceTimer,readResultArray;

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
    self.baudratelbl.font = font_Semibold_12;
    self.regionlbl.font = font_Semibold_12;
    self.tranceportloglbl.font = font_Semibold_12;
    self.readlbl.font = font_Semibold_12;
    self.timeout_rfOn_lbl.font = font_Semibold_12;
    self.fastsearchlbl.font = font_Semibold_12;
    self.rfoff.font = font_Semibold_12;
    
    self.readBtn.titleLabel.font = font_ExtraBold_12;
    self.disconnectBtn.titleLabel.font = font_Normal_12;
    self.connectBtn.titleLabel.font = font_ExtraBold_12;
    self.discontBtn.titleLabel.font = font_ExtraBold_12;
    self.cancelBtn.titleLabel.font = font_Normal_12;
    
    self.regionTxtfield.font = font_Normal_12;
    
    self.readBtn.enabled = NO;
    self.disconnectBtn.enabled = NO;
    self.transportLogViewBtn.hidden = YES;
    self.fastSearchBtn.enabled = NO;
    self.tranceportlogBtn.enabled = YES;
    
    self.baudrateTxtfield.layer.borderWidth = 1.0;
    self.baudrateTxtfield.layer.borderColor = [[UIColor lightGrayColor] CGColor];
    self.baudrateTxtfield.backgroundColor = [UIColor whiteColor];
    //self.baudrateTxtfield.layer.cornerRadius = 3;
    self.baudrateTxtfield.delegate = self;
    
    self.regionTxtfield.layer.borderWidth = 1.0;
    self.regionTxtfield.layer.borderColor = [[UIColor lightGrayColor] CGColor];
    self.regionTxtfield.backgroundColor = [UIColor whiteColor];
    //self.regionTxtfield.layer.cornerRadius = 3;
    self.regionTxtfield.delegate = self;
    
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
    
    self.baudratelistBtn.layer.borderWidth = 1.0;
    self.baudratelistBtn.layer.borderColor = [[UIColor lightGrayColor] CGColor];
    
    self.regionlistBtn.layer.borderWidth = 1.0;
    self.regionlistBtn.layer.borderColor = [[UIColor lightGrayColor] CGColor];
    [self.disconnectBtn setTitleColor:[UIColor grayColor] forState:UIControlStateNormal];
    
    self.baudrateTxtfield.userInteractionEnabled = NO;
    self.regionTxtfield.userInteractionEnabled = NO;
    
    self.regionlistBtn.enabled = YES;
    self.baudratelistBtn.enabled = YES;
    
    selectedIndex_s1 = selectedIndex;
    
    region = TMR_REGION_NONE;
    
    self.readTypeSegment.enabled = FALSE;
    self.timeout_rfOn_TxtField.enabled = FALSE;
    self.timeout_rfOn_TxtField.textColor = [UIColor grayColor];
    
    self.rfOnTxtfield.enabled = FALSE;
    
    
    self.timeout_rfOn_TxtField.text = @"250";
    self.rfOnTxtfield.text = @"0";
    
    //-------------------------------------------------------------------------
    //[[RDRscMgrInterface sharedInterface] setDelegate:self];
    
    self.baudrateTxtfield.text = [[[services objectAtIndex:selectedIndex] objectAtIndex:2] getBaudRate];
    self.regionTxtfield.text = [[[services objectAtIndex:selectedIndex] objectAtIndex:2] getRegion];
    [self.tranceportlogBtn setOn:[[[services objectAtIndex:selectedIndex] objectAtIndex:2] getTransportLog]];
    [self.readTypeSegment setSelectedSegmentIndex:[[[services objectAtIndex:selectedIndex] objectAtIndex:2] getRead]];
    self.timeout_rfOn_TxtField.text = [[[services objectAtIndex:selectedIndex] objectAtIndex:2] getTimeOut];
    [self.fastSearchBtn setSelected:[[[services objectAtIndex:selectedIndex] objectAtIndex:2] getFastSearch]];
    
    
    //------------------------------------------------------------------------
    
    self.rfoff.hidden = YES;
    self.rfOnTxtfield.hidden = YES;
    //self.lastlineView.hidden = YES;
    self.discontBtn.hidden = YES;
    
    
    // self.fastsearchlbl.frame = CGRectMake(20, 337, 250, 30); // For Demo. Used as REad power
    
    //    self.fastSearchBtn.frame = CGRectMake(self.fastSearchBtn.frame.origin.x, self.fastSearchBtn.frame.origin.y-50, self.view.frame.size.width, self.view.frame.size.height);
    
    int btnY = 0; //-50
    
    self.connectBtn.frame = CGRectMake(self.connectBtn.frame.origin.x, self.connectBtn.frame.origin.y-btnY, self.connectBtn.frame.size.width, self.connectBtn.frame.size.height);
    self.discontBtn.frame = CGRectMake(self.discontBtn.frame.origin.x, self.discontBtn.frame.origin.y-btnY, self.discontBtn.frame.size.width, self.discontBtn.frame.size.height);
    self.cancelBtn.frame = CGRectMake(self.cancelBtn.frame.origin.x, self.cancelBtn.frame.origin.y-btnY, self.cancelBtn.frame.size.width, self.cancelBtn.frame.size.height);
    
    
    /** Notification for syncReadcontinuois....*/
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(syncReadcontinuois) name:@"syncReadcontinuois" object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(cableDisconneted) name:@"CableDisconneted" object:nil];
}

-(void)viewWillDisappear:(BOOL)animated
{
    //[[NSNotificationCenter defaultCenter] removeObserver:self name:@"CableDisconneted" object:nil];
}

-(void) cableDisconneted{
    
    //NSLog(@"**** CABLE DISCONNECTED in cableDisconneted*******");
    //    if (rp != NULL) {
    //        TMR_destroy(rp);
    //    }
    
    
    [[NSNotificationCenter defaultCenter] postNotificationName:@"CableDisconnetedInReadView" object:nil];
    
    [self dismissViewControllerAnimated:YES completion:nil];
    
    
    
}

- (IBAction)readTypeSegmentAction:(id)sender {
    
    if (self.readTypeSegment.selectedSegmentIndex == 0) {
        
        self.timeout_rfOn_lbl.text = @"Time Duration";
        self.rfoff.hidden = YES;
        self.rfOnTxtfield.hidden = YES;
        self.lastlineView.hidden = YES;
        
        self.fastsearchlbl.frame = CGRectMake(20, 385, 250, 30);
        self.fastSearchBtn.frame = CGRectMake(self.fastSearchBtn.frame.origin.x, self.fastSearchBtn.frame.origin.y-50, self.view.frame.size.width, self.view.frame.size.height);
        
        self.connectBtn.frame = CGRectMake(self.connectBtn.frame.origin.x, self.connectBtn.frame.origin.y-50, self.connectBtn.frame.size.width, self.connectBtn.frame.size.height);
        self.discontBtn.frame = CGRectMake(self.discontBtn.frame.origin.x, self.discontBtn.frame.origin.y-50, self.discontBtn.frame.size.width, self.discontBtn.frame.size.height);
        self.cancelBtn.frame = CGRectMake(self.cancelBtn.frame.origin.x, self.cancelBtn.frame.origin.y-50, self.cancelBtn.frame.size.width, self.cancelBtn.frame.size.height);
        
        self.timeout_rfOn_TxtField.text = @"250";
        
    }
    else{
        
        self.timeout_rfOn_lbl.text = @"RF On (ms)";
        self.rfoff.hidden = NO;
        self.rfOnTxtfield.hidden = NO;
        self.fastSearchBtn.hidden = YES;
        self.lastlineView.hidden = YES;
        
        self.fastsearchlbl.frame = CGRectMake(20, 435, 250, 30);
        //self.fastSearchBtn.frame = CGRectMake(self.fastSearchBtn.frame.origin.x, self.fastSearchBtn.frame.origin.y+50, self.view.frame.size.width, self.view.frame.size.height);
        
        self.connectBtn.frame = CGRectMake(self.connectBtn.frame.origin.x, self.connectBtn.frame.origin.y+50, self.connectBtn.frame.size.width, self.connectBtn.frame.size.height);
        self.discontBtn.frame = CGRectMake(self.discontBtn.frame.origin.x, self.discontBtn.frame.origin.y+50, self.discontBtn.frame.size.width, self.discontBtn.frame.size.height);
        self.cancelBtn.frame = CGRectMake(self.cancelBtn.frame.origin.x, self.cancelBtn.frame.origin.y+50, self.cancelBtn.frame.size.width, self.cancelBtn.frame.size.height);
        
        self.timeout_rfOn_TxtField.text = @"1000";
        self.rfOnTxtfield.text = @"0";
    }
}




- (void)rscMgrCableConnected
{
    //[writelog writeData:[@"rscMgrCableConnected \n" dataUsingEncoding:NSUTF8StringEncoding]];
}

- (void)rscMgrCableDisconnected
{
    //[writelog writeData:[@"-----------rscMgrCableDisconnected-------- \n" dataUsingEncoding:NSUTF8StringEncoding]];
    
    [self discontBtnAction:nil];
}



-(void) picSelectedValue:(NSString *)string{
    
    [self.listPickerPopover dismissPopoverAnimated:YES];
    //NSLog(@"-----%@",string);
    
    if (self.baudratelistBtn.tag == 1) {
        self.baudrateTxtfield.text = string;
        selectedBaudRate = [self.baudrateTxtfield.text intValue];
    }
    if (self.regionlistBtn.tag == 1) {
        self.regionTxtfield.text = string;
        selectedRegion = [self.regionTxtfield.text intValue];
        
        if ([string isEqualToString:@"NONE"]) {
            region = TMR_REGION_NONE;
        }
        else if ([string isEqualToString:@"EU"]) {
            region = TMR_REGION_EU;
        }
        else if ([string isEqualToString:@"KR"]) {
            region = TMR_REGION_KR;
        }
        else if ([string isEqualToString:@"IN"]) {
            region = TMR_REGION_IN;
        }
        else if ([string isEqualToString:@"JP"]) {
            region = TMR_REGION_JP;
        }
        else if ([string isEqualToString:@"PRC"]) {
            region = TMR_REGION_PRC;
        }
        else if ([string isEqualToString:@"EU2"]) {
            region = TMR_REGION_EU2;
        }
        else if ([string isEqualToString:@"EU3"]) {
            region = TMR_REGION_EU3;
        }
        else if ([string isEqualToString:@"KR2"]) {
            region = TMR_REGION_KR2;
        }
        else if ([string isEqualToString:@"PRC2"]) {
            region = TMR_REGION_PRC2;
        }
        else if ([string isEqualToString:@"AU"]) {
            region = TMR_REGION_AU;
        }
        else if ([string isEqualToString:@"NZ"]) {
            region = TMR_REGION_NZ;
        }
        else if([string isEqualToString:@"NA_NARROW"]){
            region = TMR_REGION_NA2;
        }
        
        /** Set selected region here....*/
        @try {
            
            //if (![string isEqualToString:@"NONE"]) {
            ret = TMR_paramSet(rp, TMR_PARAM_REGION_ID, &region);
            //}
        }
        @catch (NSException *exception) {
            //NSLog(@"%@",exception);
        }
    }
}

- (IBAction)connectAction:(id)sender {
    
    //[writelog writeData:[@"serial connectBtnTouched \n" dataUsingEncoding:NSUTF8StringEncoding]];
    
     NSLog(@"*******Connect to Trimble Cable******");
    
    SmartcaseRscMgr *scMgr = [[RDRscMgrInterface sharedInterface] scMgr];
        
        //close old sessions if any
        [scMgr close];
        
        if ([scMgr getProtocolStatus]) {
            
            //[writelog writeData:[[NSString stringWithFormat:@"NEW PROTOCOL -- %@ \n",[[RDRscMgrInterface sharedInterface] recivedProtocolString]] dataUsingEncoding:NSUTF8StringEncoding]];
            //open new session
            [scMgr open:[[RDRscMgrInterface sharedInterface] recivedProtocolString]];
        }
        else{
            // //[writelog writeData:[[NSString stringWithFormat:@"WRONG NEW PROTOCOL -- %@ \n",[[RDRscMgrInterface sharedInterface] recivedProtocolString]] dataUsingEncoding:NSUTF8StringEncoding]];
            
        }
    
    
    [self.view addSubview:HUD];
    [HUD show:YES];
    [timeout_rfOn_TxtField resignFirstResponder];
    
    if ([[RDRscMgrInterface sharedInterface] cableState] == kCableNotConnected)
    {
        ULog(@"Please connect Trimble cable");
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
    
    
    rp = &r;
    ret = TMR_create(rp, deviceURI);
    
    uint32_t timeout = 5000;
    ret = TMR_paramSet(rp, TMR_PARAM_COMMANDTIMEOUT, &timeout);
    ret = TMR_paramSet(rp, TMR_PARAM_TRANSPORTTIMEOUT, &timeout);
    
    //Transport log listener..............................................
    
    if ([self.tranceportlogBtn isOn]) {
        
        //NSString *curDate = [[NSString stringWithFormat:@"%@",[NSDate date]] substringToIndex:[[NSString stringWithFormat:@"%@",[NSDate date]] length]-6];
        NSString *documentsDirectory = [NSSearchPathForDirectoriesInDomains (NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0];
        tplogfile = [documentsDirectory stringByAppendingPathComponent:[NSString stringWithFormat:@"%@.log",[[services objectAtIndex:selectedIndex] objectAtIndex:1]]];
        //create file if it doesn't exist
        if(![[NSFileManager defaultManager] fileExistsAtPath:tplogfile])
            [[NSFileManager defaultManager] createFileAtPath:tplogfile contents:nil attributes:nil];
        
        //append text to file (you'll probably want to add a newline every write)
        writetplog = [NSFileHandle fileHandleForUpdatingAtPath:tplogfile];
        
        NSArray *serviceType = [services objectAtIndex:selectedIndex];
        [services replaceObjectAtIndex:selectedIndex withObject:[NSArray arrayWithObjects:[serviceType objectAtIndex:0],[serviceType objectAtIndex:1],[serviceType objectAtIndex:2],[serviceType objectAtIndex:3],tplogfile,[serviceType objectAtIndex:5], nil]];
        
        self.transportLogViewBtn.hidden = NO;
        
        //call TransportListener
        tb.listener = serialSmartCaseDeviceSerialPrinter;
        
        tb.cookie = NULL;
        ret = TMR_addTransportListener(rp, &tb);
    }
    
    
    dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0), ^{
        
        /*
        bool enablePreamble = FALSE;
        ret = TMR_paramSet(rp, TMR_PARAM_ENABLE_PREAMBLE, &enablePreamble);
        */
        ret = TMR_connect(rp);
        
        
        TMR_Status retStatus; //= TMR_paramGet(rp, TMR_PARAM_REGION_ID, &region);
        // //[writelog writeData:[[NSString stringWithFormat:@"region ----- %d\n",region] dataUsingEncoding:NSUTF8StringEncoding]];
        
        if (TMR_REGION_NONE == region)
        {
            TMR_RegionList regions;
            TMR_Region _regionStore[32];
            regions.list = _regionStore;
            regions.max = sizeof(_regionStore)/sizeof(_regionStore[0]);
            regions.len = 0;
            retStatus = TMR_paramGet(rp, TMR_PARAM_REGION_SUPPORTEDREGIONS, &regions);
            
            NSMutableArray *regoinlist = [[NSMutableArray alloc] init];
            for (int i=0; i<regions.len-1; i++) {
                [regoinlist addObject:[NSNumber numberWithInt: [[NSString stringWithFormat:@"%i",regions.list[i]] integerValue]]];
            }
            [settingInfoDictionary setObject:[NSArray arrayWithArray:regoinlist] forKey:@"Region"];
            
            if (regions.len < 1)
            {
                NSLog(@"**Reader doesn't support regions**" );
                //[writelog writeData:[@"**Reader doesn't support regions**\n" dataUsingEncoding:NSUTF8StringEncoding]];
            }
            region = regions.list[0];
            region = TMR_REGION_NA;
            
        }
        
            if(TMR_REGION_NA2 != region)
        {
            region = TMR_REGION_NA2; //REGION DEFAULT TO
            retStatus = TMR_paramSet(rp, TMR_PARAM_REGION_ID, &region);
        }
        
        
        dispatch_async( dispatch_get_main_queue(), ^{
            
            if (TMR_SUCCESS == ret)
            {
                self.connectBtn.hidden = YES;
                self.discontBtn.hidden = NO;
                self.regionlistBtn.enabled = YES;
                
                self.readBtn.enabled = YES;
                self.disconnectBtn.enabled = YES;
                self.tranceportlogBtn.enabled = NO;
                ret = TMR_removeTransportListener(rp, &tb);
                
                [self.disconnectBtn setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
                [[NSNotificationCenter defaultCenter] postNotificationName:@"con_Success" object:self];
                self.readTypeSegment.enabled = TRUE;
                self.timeout_rfOn_TxtField.enabled = TRUE;
                self.timeout_rfOn_TxtField.textColor = [UIColor blackColor];
                self.rfOnTxtfield.enabled = TRUE;
                self.regionlistBtn.enabled = NO;
                self.baudratelistBtn.enabled = NO;
            }
            else{
                
                //[writelog writeData:[@"Couldn't open device \n" dataUsingEncoding:NSUTF8StringEncoding]];
                UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                  message:@"Couldn't open device"
                                                                 delegate:nil
                                                        cancelButtonTitle:@"OK"
                                                        otherButtonTitles:nil];
                
                [message show];
            }
            
            int regValue = [[NSString stringWithFormat:@"%d",region] intValue];
            if (regValue == 0) {
                self.regionTxtfield.text = @"NONE";
            }else if(regValue == 1){
                self.regionTxtfield.text = @"NA";
            }
            else if(regValue == 2){
                self.regionTxtfield.text = @"EU";
            }
            else if(regValue == 3){
                self.regionTxtfield.text = @"KR";
            }
            else if(regValue == 4){
                self.regionTxtfield.text = @"IN";
            }
            else if(regValue == 5){
                self.regionTxtfield.text = @"JP";
            }
            else if(regValue == 6){
                self.regionTxtfield.text = @"PRC";
            }
            else if(regValue == 7){
                self.regionTxtfield.text = @"EU2";
            }
            else if(regValue == 8){
                self.regionTxtfield.text = @"EU3";
            }
            else if(regValue == 9){
                self.regionTxtfield.text = @"KR2";
            }
            else if(regValue == 10){
                self.regionTxtfield.text = @"PRC2";
            }
            else if(regValue == 11){
                self.regionTxtfield.text = @"AU";
            }
            else if(regValue == 12){
                self.regionTxtfield.text = @"NZ";
            }
            else if(regValue == 13){
                self.regionTxtfield.text = @"NA_NARROW";
            }
            
            
            [HUD hide:YES];
        });
    });
}


void serialSmartCaseDeviceSerialPrinter(bool tx, uint32_t dataLen, const uint8_t data[],
                               uint32_t timeout, void *cookie)
{
    //[writelog writeData:[@"serialDeviceSerialPrinter \n" dataUsingEncoding:NSUTF8StringEncoding]];
    @try {
        
        //FILE *out = cookie;
        uint32_t i;
        
        [writetplog writeData:[[NSString stringWithFormat:@"%s",tx ? "Sending: " : "Received:"] dataUsingEncoding:NSUTF8StringEncoding]];
        for (i = 0; i < dataLen; i++)
        {
            if (i > 0 && (i & 15) == 0)
            {
                [writetplog writeData:[@"\n         " dataUsingEncoding:NSUTF8StringEncoding]];
            }
            [writetplog writeData:[[NSString stringWithFormat:@" %02x",data[i]] dataUsingEncoding:NSUTF8StringEncoding]];
        }
        [writetplog writeData:[@"\n" dataUsingEncoding:NSUTF8StringEncoding]];
    }
    @catch (NSException *exception) {
        //NSLog(@"%@",exception);
    }
}

-(void) discontBtnAction{
    
    //[self.view addSubview:HUD];
    [HUD show:YES];
    
    //NSLog(@"********* discontBtnAction ***********");
    
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0), ^{
        [self.silenceTimer invalidate];
        if (rp != NULL) {
            
            //NSLog(@"********* STOP READING ***********");
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
            self.regionlistBtn.enabled = NO;
            self.regionTxtfield.text = @"";
            //NSLog(@"read results stoped.");
            [HUD hide:YES];
            
            self.baudratelistBtn.enabled = YES;
            self.regionlistBtn.enabled = YES;
            self.transportLogViewBtn.hidden = YES;
            self.tranceportlogBtn.enabled = YES;
            [self.tranceportlogBtn setOn:NO animated:YES];
            self.readTypeSegment.enabled = FALSE;
            self.timeout_rfOn_TxtField.enabled = FALSE;
            self.timeout_rfOn_TxtField.textColor = [UIColor grayColor];
            
            self.rfOnTxtfield.enabled = FALSE;
            [self.disconnectBtn setTitleColor:[UIColor grayColor] forState:UIControlStateNormal];
            
            [[NSNotificationCenter defaultCenter] postNotificationName:@"conn_Disconnect" object:self];
        });
    });
    
}

- (IBAction)discontBtnAction:(id)sender {
    
    //[self.view addSubview:HUD];
    [HUD show:YES];
    
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0), ^{
        [self.silenceTimer invalidate];
        if (rp != NULL) {
            
            TMR_destroy(rp);
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            
            self.transportLogViewBtn.hidden = YES;
            self.tranceportlogBtn.enabled = YES;
            [self.tranceportlogBtn setOn:NO animated:YES];
            self.connectBtn.hidden = NO;
            self.connectBtn.userInteractionEnabled = YES;
            self.discontBtn.hidden = YES;
            //headerView.statusShowIcon.image=[UIImage imageNamed:@"light-red.png"];
            self.readBtn.enabled = NO;
            self.disconnectBtn.enabled = NO;
            self.regionlistBtn.enabled = NO;
            self.regionTxtfield.text = @"";
            self.readTypeSegment.enabled = FALSE;
            self.timeout_rfOn_TxtField.enabled = FALSE;
            self.timeout_rfOn_TxtField.textColor = [UIColor grayColor];
            
            self.rfOnTxtfield.enabled = FALSE;
            self.regionlistBtn.enabled = YES;
            self.baudratelistBtn.enabled = YES;
            [self.disconnectBtn setTitleColor:[UIColor grayColor] forState:UIControlStateNormal];
            
            [HUD hide:YES];
            
            if ((UIButton *)sender == self.discontBtn) {
                [[NSNotificationCenter defaultCenter] postNotificationName:@"conn_Disconnect" object:self];
            }
        });
    });
    
}


- (IBAction)cancelAction:(id)sender {
}


- (IBAction)readAction:(id)sender {
    
    [[[services objectAtIndex:selectedIndex] objectAtIndex:2] setRead:self.readTypeSegment.selectedSegmentIndex];
    
    //[HUD show:YES];
    self.connectBtn.userInteractionEnabled = FALSE;
    self.connectBtn.titleLabel.textColor = [UIColor whiteColor];
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
                                                    cancelButtonTitle:@"OK"
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
                                                    cancelButtonTitle:@"OK"
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
                                                    cancelButtonTitle:@"OK"
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
                                                    cancelButtonTitle:@"OK"
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


-(void)syncRead
{
    
    NSLog(@"*********** SYNC READ ************");
    [self.view addSubview:HUD];
    [HUD show:YES];
    
    NSString *value = [self.timeout_rfOn_TxtField.text stringByTrimmingCharactersInSet:[NSCharacterSet    whitespaceCharacterSet]];
    
    if ([value length] == 0)
    {
        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                          message:@"read timeout can't be empty"
                                                         delegate:nil
                                                cancelButtonTitle:@"OK"
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
                                                cancelButtonTitle:@"OK"
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
                                                cancelButtonTitle:@"OK"
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
            
            //Set Antenna for Smartcase Manually
            TMR_ReadPlan plan;
            /**
             * for antenna configuration we need two parameters
             * 1. antennaCount : specifies the no of antennas should
             *    be included in the read plan, out of the provided antenna list.
             * 2. antennaList  : specifies  a list of antennas for the read plan.
             **/
            uint8_t antennaList[] = {1,2};
            uint8_t antennaCount = sizeof(antennaList)/sizeof(antennaList[0]);
            
            // initialize the read plan
            ret = TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
            //checkerr(rp, ret, 1, "initializing the  read plan");
            
            /* Commit read plan */
            ret = TMR_paramSet(rp, TMR_PARAM_READ_PLAN, &plan);
            //checkerr(rp, ret, 1, "setting read plan");
            //[writelog writeData:[[NSString stringWithFormat:@" Param Set Ret = %d \n",ret] dataUsingEncoding:NSUTF8StringEncoding]];
            
            ret = TMR_read(rp,[self.timeout_rfOn_TxtField.text intValue], NULL);
            if (TMR_ERROR_TIMEOUT == ret)
            {
                dispatch_async( dispatch_get_main_queue(), ^{
                    
                    UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                      message:@"* Operation timeout"
                                                                     delegate:nil
                                                            cancelButtonTitle:@"OK"
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
                                                                cancelButtonTitle:@"OK"
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
                                                                cancelButtonTitle:@"OK"
                                                                otherButtonTitles:nil];
                        [message show];
                        [HUD hide:YES];
                    });
                }
                
                NSLog(@"TMR_read Status:%d", ret);
                
                if(TMR_ERROR_NO_ANTENNA == ret)
                {
                    dispatch_async( dispatch_get_main_queue(), ^{
                        
                        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                          message:@"* Antenna not Connected"
                                                                         delegate:nil
                                                                cancelButtonTitle:@"OK"
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
                                                                        cancelButtonTitle:@"OK"
                                                                        otherButtonTitles:nil];
                                [message show];
                                [HUD hide:YES];
                            });
                        }
                        if((TMR_SUCCESS != ret) && (TMR_ERROR_TAG_ID_BUFFER_NOT_ENOUGH_TAGS_AVAILABLE == ret))
                        {
                            
                            //[writelog writeData:[@"TMR_ERROR_TAG_ID_BUFFER_NOT_ENOUGH_TAGS_AVAILABLE" dataUsingEncoding:NSUTF8StringEncoding]];
                            break;
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
                            [rrso setepcServiceName:[[services objectAtIndex:selectedIndex_s1] objectAtIndex:1]];
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
                        
                        NSLog(@"EPC:%s ant:%d, count:%d\n", epcStr, trd.antenna, trd.readCount);
                    }
                    if ((TMR_ERROR_NO_TAGS != ret) && (TMR_ERROR_CRC_ERROR == ret))
                    {
                        dispatch_async( dispatch_get_main_queue(), ^{
                            
                            UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                                              message:@"* CRC Error"
                                                                             delegate:nil
                                                                    cancelButtonTitle:@"OK"
                                                                    otherButtonTitles:nil];
                            [message show];
                            [HUD hide:YES];
                        });
                    }
                    dispatch_async( dispatch_get_main_queue(), ^{
                        
                        // //[writelog writeData:[@"--success--\n" dataUsingEncoding:NSUTF8StringEncoding]];
                        [HUD hide:YES];
                        
                        if (readToggle) {
                            //[[NSNotificationCenter defaultCenter] postNotificationName:@"ReadResults" object:self];
                            
                            NSData *data = [NSData dataWithBytes:&r length:sizeof(r)];
                            
                            [[NSNotificationCenter defaultCenter] postNotificationName:@"ReadResults"  object:self userInfo:@{ @"ImportantInformation" : data }];
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
    
    NSLog(@"*********** AAAAAA SYNC READ ************");
    dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        
        rlb.listener = callbackSmartCase;
        rlb.cookie = NULL;
        reb.listener = exceptionCallbackinSmartCase;
        reb.cookie = NULL;
        ret = TMR_addReadListener(rp, &rlb);
        ret = TMR_addReadExceptionListener(rp, &reb);
        
        
        /*
        //        ret = TMR_paramSet(rp, TMR_PARAM_READ_ASYNCOFFTIME, (__bridge const void *)(self.timeout_rfOn_TxtField.text));
        
        //uint32_t offTime = [self.timeout_rfOn_TxtField.text intValue];
        uint32_t offTime = 0;
        ret = TMR_paramSet(rp, TMR_PARAM_READ_ASYNCOFFTIME, &offTime);
        
        //        ret = TMR_paramSet(rp, TMR_PARAM_READ_ASYNCONTIME, (__bridge const void *)(self.rfOnTxtfield.text));
        
        uint32_t onTime = [self.rfOnTxtfield.text intValue];
        ret = TMR_paramSet(rp, TMR_PARAM_READ_ASYNCONTIME, &onTime);
        */
        
        //Set Antenna for Smartcase Manually
        TMR_ReadPlan plan;
        /**
         * for antenna configuration we need two parameters
         * 1. antennaCount : specifies the no of antennas should
         *    be included in the read plan, out of the provided antenna list.
         * 2. antennaList  : specifies  a list of antennas for the read plan.
         **/
        uint8_t antennaList[] = {1,2};
        uint8_t antennaCount = sizeof(antennaList)/sizeof(antennaList[0]);
        
        // initialize the read plan
        ret = TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
        //checkerr(rp, ret, 1, "initializing the  read plan");
        
        /* Commit read plan */
        ret = TMR_paramSet(rp, TMR_PARAM_READ_PLAN, &plan);
        //checkerr(rp, ret, 1, "setting read plan");
        // //[writelog writeData:[[NSString stringWithFormat:@" Param Set Ret = %d \n",ret] dataUsingEncoding:NSUTF8StringEncoding]];
        
        
        ret = TMR_startReading(rp);
        
        UIBackgroundTaskIdentifier bgTask = 0;
        UIApplication  *app = [UIApplication sharedApplication];
        bgTask = [app beginBackgroundTaskWithExpirationHandler:^{
            [app endBackgroundTask:bgTask];
        }];
        
        dispatch_async( dispatch_get_main_queue(), ^{
            
            if (readToggle) {
               
                //[[NSNotificationCenter defaultCenter] postNotificationName:@"ReadResults" object:(__bridge id)(( TMR_Reader *)rp)];
                NSData *data = [NSData dataWithBytes:&r length:sizeof(r)];
                
                [[NSNotificationCenter defaultCenter] postNotificationName:@"ReadResults"  object:self userInfo:@{ @"ImportantInformation" : data }];
                
//                NSValue * valueOfStruct = [NSValue valueWithBytes:&r objCType:@encode(TMR_Reader)];
//                
//                [[NSNotificationCenter defaultCenter] postNotificationName:@"ReadResults" object:self userInfo:@{@"CustomStructValue" : valueOfStruct}];

                
                readToggle = FALSE;
                isSerialReading = TRUE;
            }
            [[NSNotificationCenter defaultCenter] postNotificationName:@"StopHUD" object:self];
            
        });
    });
}

void callbackSmartCase(TMR_Reader *reader, const TMR_TagReadData *t, void *cookie){
    
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
            [rrso setepcServiceName:[[services objectAtIndex:selectedIndex_s1] objectAtIndex:1]];
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
            
            [rrso setAntenna:[antenna intValue]];
            [rrso setProtocol:protocol];
            [rrso setPhase:phase];
            [rrso setFrequency:frequency];
            [rrso setRssi:[rssi intValue]];
        }
        
        alltotalTags = alltotalTags +[epcCount intValue];
    }
    
    //[writelog writeData:[[NSString stringWithFormat:@"allReadResultsArray = %@ \n",allReadResultsArray] dataUsingEncoding:NSUTF8StringEncoding]];
    
}


void exceptionCallbackinSmartCase(TMR_Reader *reader, TMR_Status error, void *cookie){
    
    if (error == TMR_ERROR_TIMEOUT)
    {
        TMR_stopReading(reader);
    }
    exceptionlbl =  [NSString stringWithFormat:@"%s",TMR_strerr(reader, error)];
    
    [[NSNotificationCenter defaultCenter] postNotificationName:@"DisplayException" object:exceptionlbl userInfo:nil];
    
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
        //if (number)
        if ( number != nil && [number intValue] <= 65535)
            return YES;
        else
            return NO;
    }
    else{
        return YES;
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

