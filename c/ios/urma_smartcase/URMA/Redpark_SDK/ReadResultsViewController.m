//
//  ReadResultsViewController.h
//  URMA
//
//  Created by Raju on 24/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import "ReadResultsViewController.h"
#import "ReadResultTableViewCell.h"
#import "ReadResultsVO.h"
#import "NetworkDeviceViewController.h"
#import "SerialDeviceViewController.h"
#import "AddDeviceViewController.h"
#import "SettingVO.h"
#import "ViewController.h"

int pagePosition = 0;
int startIndex = 0;
float sectionCoun = 0;

@interface ReadResultsViewController (){
}
@end

@implementation ReadResultsViewController
@synthesize readResultsTableView,readResultsHeaderView;
@synthesize readStatuslbl,refreshBtn,sortBtn,clearBtn,stopreadBtn,settingBtn,readBtn;
@synthesize uniqtagslblTxt,totaltagslblTxt,timesinseclblTxt,tagseclblTxt;
@synthesize uniqtagsValue,totaltagsValue,timeinsecValue,tagsecValue;
@synthesize silenceTimer,spinner;
@synthesize lastBtn,previousBtn,nextBtn,firstBtn,curPage,totalPages;


- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

-(void) viewWillAppear:(BOOL)animated{
}

-(void)viewWillDisappear:(BOOL)animated
{
        
    [[NSNotificationCenter defaultCenter] removeObserver:self name:@"CableDisconnetedInReadView" object:nil];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    
    //ONLY FOR DEMO
    self.sortBtn.hidden = YES;
    self.settingBtn.hidden = YES;
    
    [self.navigationItem setHidesBackButton:YES];
    
    HUD.frame = self.view.frame;
    [self.view addSubview:HUD];
    [HUD hide:YES];
    
    uniqtagslblTxt.font = font_Normal_12;
    totaltagslblTxt.font = font_Normal_12;
    timesinseclblTxt.font = font_Normal_12;
    tagseclblTxt.font = font_Normal_12;
    
    uniqtagsValue.font = font_Semibold_18;
    totaltagsValue.font = font_Semibold_18;
    timeinsecValue.font = font_Semibold_18;
    tagsecValue.font = font_Semibold_18;
    
    self.readStatuslbl.font = font_ExtraBold_16;
    self.stopreadBtn.enabled = NO;
    self.stopreadBtn.hidden = NO;
    self.readBtn.hidden = YES;
    self.readResultsTableView.bounces = FALSE;
    
    self.curPage.font = font_Normal_14;
    self.totalPages.font = font_Normal_14;
    
    self.firstBtn.enabled = NO;
    self.previousBtn.enabled = NO;
    self.curPage.text = [NSString stringWithFormat:@"%d",(pagePosition+1)];
    sectionCoun = 13.0;
    
    
    if ([[[services objectAtIndex:globalsServiceselectedindex] objectAtIndex:2] getRead] == 1) {
        
        [self showPagination];
        [self startTimer];
        
        //spinner ....
        spinner = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleGray];
        spinner.color = [UIColor whiteColor];
        [self.refreshBtn addSubview:spinner];
        [spinner startAnimating];
    }
    else{
        self.readStatuslbl.text = @"Read Completed.";
        [self showPagination];
    }
    
    [self callFootorSummary];
    
    /** Notification for syncReadcontinuois....*/
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(stopTimer) name:@"StopTimer" object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(stopHUD) name:@"StopHUD" object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(displayException:) name:@"DisplayException" object:self];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(cableDisconnetedInRead) name:@"CableDisconnetedInReadView" object:nil];

    
}

-(void) cableDisconnetedInRead{
    
    
    //NSLog(@"**** CABLE DISCONNECTED in REad Results View*******");
//    if (rp != NULL) {
//        TMR_destroy(rp);
//    }
    
    @try {
      
        [[NSNotificationCenter defaultCenter] postNotificationName:@"NotificationFromReadResultsViewDisconnect"  object:self];

        [[[services objectAtIndex:globalsServiceselectedindex] objectAtIndex:2] discontBtnAction];
        //dispatch_async( dispatch_get_main_queue(), ^{
        [headerView.offBtn setBackgroundImage:[UIImage imageNamed:@"power-inactive.png"] forState:UIControlStateNormal];
        headerView.offBtn.tag =0;
        
        readToggle = TRUE;
        
        //[readResultsNavigationController.view removeFromSuperview];
        [self.view removeFromSuperview];
        [[NSNotificationCenter defaultCenter] postNotificationName:@"StopTimer" object:self];
        
        
    }
    @catch (NSException *exception) {
        
        //NSLog(@"****** EXCeption -- %@",exception);
        //[readResultsNavigationController.view removeFromSuperview];
        readToggle = TRUE;

        [self.view removeFromSuperview];
        [[NSNotificationCenter defaultCenter] postNotificationName:@"StopTimer" object:self];

        
    }
    

}


-(void) displayException:(NSNotification *)notification{
    
    
    NSString *recivedString = [notification object];
    @try {
        
        UIAlertView *message = [[UIAlertView alloc] initWithTitle:@"Message"
                                                          message:recivedString
                                                         delegate:nil
                                                cancelButtonTitle:@"OK"
                                                otherButtonTitles:nil];
        
        [message show];
    }
    @catch (NSException *exception) {
        
    };
    [self view];
}


-(void) showPagination{
    
    if (([allReadResultsArray count]/sectionCoun) > 1) {
        self.totalPages.text = [NSString stringWithFormat:@"%d",(int)ceilf(([allReadResultsArray count]/13.0))];
    }
    else{
        self.totalPages.text = @"1";
    }
    
    if ([allReadResultsArray count] > sectionCoun) {
        self.nextBtn.enabled = YES;
        self.lastBtn.enabled = YES;
    }
    else{
        sectionCoun = [allReadResultsArray count];
        self.nextBtn.enabled = NO;
        self.lastBtn.enabled = NO;
    }
}


-(void) startTimer{
    self.silenceTimer = [NSTimer scheduledTimerWithTimeInterval:0.1 target:self
                                                       selector:@selector(RefreshReadResults) userInfo:nil repeats:YES];
    
    self.readStatuslbl.text = @"Reading...";
    
}

-(void)stopHUD{
    [HUD hide:YES];
    [self RefreshReadResults];
}

-(void) RefreshReadResults{
    
    //self.readStatuslbl.text = @"Reading...";
    self.stopreadBtn.enabled = YES;
    timeInSec = [NSString stringWithFormat:@"%.1f",[timeInSec floatValue] + 0.1];
    [self callFootorSummary];
    
    //pagination refresh...
    
    if ([allReadResultsArray count]%13 == 0){
        self.totalPages.text = [NSString stringWithFormat:@"%d",(int)ceilf(([allReadResultsArray count]/13.0))];
    }
    else{
        self.totalPages.text = [NSString stringWithFormat:@"%d",(int)ceilf(([allReadResultsArray count]/13.0))];
    }
    
    if(pagePosition*13 < [allReadResultsArray count]){
        sectionCoun = 0;
        sectionCoun = [allReadResultsArray count]-(pagePosition*13);
        
        if (!(sectionCoun <= 13)){
            sectionCoun = 13;
            self.nextBtn.enabled = TRUE;
            self.lastBtn.enabled = TRUE;
        }
    }
    else{
        sectionCoun = [allReadResultsArray count];
    }
    //pagination refresh end...
    
    [self.readResultsTableView reloadData];
}


-(void) callFootorSummary{
    /** Update uniqtagcout and totaltagecount here...*/
    uniqtagsValue.text = [NSString stringWithFormat:@"%d",[allReadResultsArray count]];
    totaltagsValue.text = [NSString stringWithFormat:@"%d",alltotalTags];
    
    // //NSLog(@"-- %@",timeInSec);
    
    timeinsecValue.text = timeInSec;
    // NSString *tempt = [NSString stringWithFormat:@"0.%d",[timeInSec integerValue]];
    tagsecValue.text = [NSString stringWithFormat:@"%d",alltotalTags/[timeInSec intValue]];
}

/** Tabelview datasource and delegate methods...*/
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;    //count of section
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    
    return sectionCoun;
}


- (UITableViewCell *)tableView:(UITableView *)table_View cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    static NSString *MyIdentifier = @"Cell";
    ReadResultTableViewCell *cell = (ReadResultTableViewCell *)[table_View dequeueReusableCellWithIdentifier:MyIdentifier];
    
    if (cell == nil){
        cell = [[ReadResultTableViewCell alloc] initWithStyle:UITableViewCellStyleDefault
                                              reuseIdentifier:MyIdentifier];
    }
    startIndex = (pagePosition*13)+indexPath.row;
    ReadResultsVO *rrvo = [allReadResultsArray objectAtIndex:startIndex];
    
    BOOL IS_EXIST = [self isInUserDefaults:[rrvo getepclblTxt]];
    NSString *epcString;
    
    if(IS_EXIST)
    {
        epcString = [self getFromUserDefaults:[rrvo getepclblTxt]];
    }
    else
    {
        epcString = [rrvo getepclblTxt];
    }
    
    [cell loadreadResultTableViewCell:epcString date:[rrvo getTimestampHigh] rssi:[rrvo getRssi] readcout:[rrvo getepcTagCount] antenaa:[rrvo getAntenna] phase:[rrvo getPhase] frequency:[rrvo getFrequency] protocal:[rrvo getProtocol] serviceType:startIndex+1];
    return cell;
}

- (void)tableView:(UITableView *)tableView1 didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    startIndex = (pagePosition*13)+indexPath.row;
    ReadResultsVO *rrvo = [allReadResultsArray objectAtIndex:startIndex];
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Associate EPC"
                                                    message:[rrvo getepclblTxt]
                                                   delegate:self
                                          cancelButtonTitle:@"Cancel"
                                          otherButtonTitles:@"Save", nil];
    alert.alertViewStyle = UIAlertViewStylePlainTextInput;
    
    UITextField *textField = [alert textFieldAtIndex:0];
    
    NSString *editedEPCString= [self getFromUserDefaults:[rrvo getepclblTxt]];
    
    if([editedEPCString length] > 0 && editedEPCString != [rrvo getepclblTxt])
    {
        [textField setText:editedEPCString];
    }
    [alert show];
}

-(void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    DLog(@"********%@", [alertView textFieldAtIndex:0].text);
        
    if(buttonIndex == 0)
    {
        //Alert -- cancel Click

    }
    if(buttonIndex == 1)
    {
        //Alert -- Save Click
        UITextField *textField = [alertView textFieldAtIndex:0];
        
        if([self isInUserDefaults:alertView.message] && [textField.text length] <=0)
        {
            [self saveToUserDefaults:alertView.message andEPCValue:alertView.message];
        }
        else
        {
            if([textField.text length] > 0)
            {
                [self saveToUserDefaults:[alertView textFieldAtIndex:0].text andEPCValue:alertView.message];
            }
        }
        
        if(self.readBtn.hidden == NO)
        {
               [self.readResultsTableView reloadData];
        }

    }
}

-(void)saveToUserDefaults:(NSString*)epcString andEPCValue:(NSString *)epcKey
{
    NSUserDefaults *standardUserDefaults = [NSUserDefaults standardUserDefaults];
    
    if (standardUserDefaults) {
        [standardUserDefaults setObject:epcString forKey:epcKey];
        [standardUserDefaults synchronize];
    }
}

-(BOOL)isInUserDefaults:(NSString*)epcKey
{
    NSUserDefaults *standardUserDefaults = [NSUserDefaults standardUserDefaults];
    
    if (standardUserDefaults) {
        if ([standardUserDefaults objectForKey:epcKey])
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
    
    return FALSE;
}

-(NSString *)getFromUserDefaults:(NSString *)epcKey
{
    NSUserDefaults *standardUserDefaults = [NSUserDefaults standardUserDefaults];
    
    return [standardUserDefaults objectForKey:epcKey];
}

- (IBAction)refreshBtnAction:(id)sender {
}

- (IBAction)sortBtnAction:(id)sender {
}

- (IBAction)cleraBtnAction:(id)sender {
    
    UIActionSheet *actionSheet = [[UIActionSheet alloc]
                                  initWithTitle:@"Clear all the Tag Results?"
                                  delegate:self
                                  cancelButtonTitle:nil
                                  destructiveButtonTitle:@"Clear"
                                  otherButtonTitles:@"Cancel", nil];
    
    if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad) {
        // In this case the device is an iPad.
        [actionSheet showFromRect:self.clearBtn.frame inView:self.readResultsHeaderView animated:YES];
    }
    else{
        // In this case the device is an iPhone/iPod Touch.
        [actionSheet showInView:self.view];
    }
}

- (void)willPresentActionSheet:(UIActionSheet *)actionSheet {
    
    for (UIView *_currentView in actionSheet.subviews)
    {
        if ([_currentView isKindOfClass:[UIButton class]])
        {
            UIButton *button = (UIButton *)_currentView;
            button.titleLabel.font = font_Semibold_18;
        }
        else if ([_currentView isKindOfClass:[UILabel class]]){
            UILabel *l = [[UILabel alloc] initWithFrame:_currentView.frame];
            l.text = [(UILabel *)_currentView text];
            [l setFont:font_Semibold_12];
            l.textColor = [UIColor darkGrayColor];
            l.backgroundColor = [UIColor clearColor];
            [l sizeToFit];
            [l setCenter:CGPointMake(actionSheet.center.x, 25)];
            [l setFrame:CGRectIntegral(l.frame)];
            [actionSheet addSubview:l];
            _currentView.hidden = YES;
        }
    }
}
-(void)actionSheet:(UIActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex {
    
    if (buttonIndex == 0) {
        
        
        [self clearData:^(BOOL finished) {
            if(finished){
                //NSLog(@"success");
            }
        }];
        
        //[self clearData]; // clear method calling...
        [self.readResultsTableView reloadData]; // relaod table here..
    }
    else if (buttonIndex == 1) {
    }
}

// clear all readed resilts here...
-(IBAction)clearData:(id)sender{
    
    //self.curPage.text = @"1";
    self.uniqtagsValue.text = @"0";
    self.totaltagsValue.text = @"0";
    alltotalTags = 0;
    
    [allepclblsArray removeAllObjects];
    [allReadResultsArray removeAllObjects];
    
    timeInSec = @"0";
    tagBySec = @"0";
    timeinsecValue.text = @"0";
    tagsecValue.text = @"0";
    
    pagePosition = 0;
    startIndex = 0;
    sectionCoun = 0;
    self.curPage.text = [NSString stringWithFormat:@"%d",(pagePosition+1)];
    totalPages.text = @"1";
    
    self.nextBtn.enabled = FALSE;
    self.lastBtn.enabled = FALSE;
    self.firstBtn.enabled = FALSE;
    self.previousBtn.enabled = FALSE;    
}

-(void) stopTimer{
    [self.silenceTimer invalidate];
    [spinner stopAnimating];
    pagePosition = 0;
    startIndex = 0;
    sectionCoun = 0;
}

- (IBAction)readResultsAction:(id)sender {
    
    [self.view addSubview:HUD];
    [HUD show:YES];
    [spinner startAnimating];
    
    // clear method calling...
    [self clearData:^(BOOL finished) {
        if(finished){
            //NSLog(@"success");
        }
    }];
    
    self.readBtn.hidden = YES;
    self.stopreadBtn.hidden = NO;
    self.readStatuslbl.text = @"Reading...";
    
    
    for (int i=0; i<[services count]; i++) {
        
        if (globalsServiceselectedindex == i) {
            
            NSArray *serviceType = [services objectAtIndex:i];
            [[serviceType objectAtIndex:5] asyncRead];
            break;
        }
    }
    
    //call timer method...
    [self startTimer];
}


- (IBAction)stopReadAction:(id)sender {
    
    [self.view addSubview:HUD];
    [HUD show:YES];
    [spinner stopAnimating];

    self.readBtn.hidden = NO;
    self.stopreadBtn.hidden = YES;
    self.readStatuslbl.text = @"Read Completed.";
    
    for (int i=0; i<[services count]; i++) {
        
        if (globalsServiceselectedindex == i) {
            
            NSArray *serviceType = [services objectAtIndex:i];
            [[serviceType objectAtIndex:5] stopReadResults];
            break;
        }
    }
    [self.silenceTimer invalidate];
}


- (IBAction)firstBtnAction:(id)sender {
    
    pagePosition = 0;
    sectionCoun = 13;
    self.curPage.text = [NSString stringWithFormat:@"%d",(pagePosition+1)];
    
    self.firstBtn.enabled = FALSE;
    self.previousBtn.enabled = FALSE;
    
    if ([allReadResultsArray count] >= 13)
    {
        self.nextBtn.enabled = TRUE;
        self.lastBtn.enabled = TRUE;
    }
    [self.readResultsTableView reloadData];
}


- (IBAction)previousBtnAction:(id)sender {
    
    if (!pagePosition <= 0)
    {
        pagePosition = pagePosition-1;
        self.curPage.text = [NSString stringWithFormat:@"%d",(pagePosition+1)];
        sectionCoun = 13;
        nextBtn.enabled = TRUE;
        lastBtn.enabled = TRUE;
        
        if (pagePosition == 0)
        {
            self.firstBtn.enabled = FALSE;
            self.previousBtn.enabled = FALSE;
        }
    }
    else{
        self.firstBtn.enabled = FALSE;
        self.previousBtn.enabled = FALSE;
    }
    [self.readResultsTableView reloadData];
}

- (IBAction)nextBtnAction:(id)sender {
    
    if((pagePosition+1)*13 < [allReadResultsArray count])
    {
        pagePosition = pagePosition+1;
        self.curPage.text = [NSString stringWithFormat:@"%d",(pagePosition+1)];
        if(pagePosition*13 <= [allReadResultsArray count])
        {
            sectionCoun = 0;
            sectionCoun = [allReadResultsArray count]-(pagePosition*13);
            
            if (!(sectionCoun <= 13))
            {
                sectionCoun = 13;
                self.nextBtn.enabled = TRUE;
                self.lastBtn.enabled = TRUE;
            }
            else{
                self.nextBtn.enabled = FALSE;
                self.lastBtn.enabled = FALSE;
            }
        }
        else{
            sectionCoun = [allReadResultsArray count];
            self.nextBtn.enabled = FALSE;
            self.lastBtn.enabled = FALSE;
        }
        self.firstBtn.enabled = TRUE;
        self.previousBtn.enabled = TRUE;
    }
    [self.readResultsTableView reloadData];
}


- (IBAction)lastBtnAction:(id)sender {
    
    int count = [allReadResultsArray count];
    if (count % 13 == 0) {
        pagePosition = count/13;
        self.curPage.text = [NSString stringWithFormat:@"%d",pagePosition];
    }
    else{
        pagePosition = count/13;
        self.curPage.text = [NSString stringWithFormat:@"%d",(pagePosition + 1)];
    }
    int pageOffset = count%13;
    if (pageOffset == 0)
    {
        pagePosition -= 1;
    }
    startIndex = (pagePosition*13)+1;
    sectionCoun = (count - startIndex)+1;
    
    if ([allReadResultsArray count]%13 == 0){
        self.totalPages.text = [NSString stringWithFormat:@"%d",(int)ceilf(([allReadResultsArray count]/13.0))];
    }
    else{
        self.totalPages.text = [NSString stringWithFormat:@"%d",(int)ceilf(([allReadResultsArray count]/13.0))];
    }
    
    self.firstBtn.enabled = TRUE;
    self.previousBtn.enabled = TRUE;
    self.nextBtn.enabled = FALSE;
    self.lastBtn.enabled = FALSE;
    [self.readResultsTableView reloadData];
}


-(void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration{
}

- (IBAction)settingBtnAction:(id)sender {
}


- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
