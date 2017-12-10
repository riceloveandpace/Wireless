//
//  ViewController.m
//  URMA
//
//  Created by Raju on 11/08/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import "ViewController.h"
#import "tm_reader.h"

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

@interface ViewController (){
}
@end


@implementation ViewController
@synthesize splitController;
@synthesize readDeviceViewController,detailViewController;


- (void)viewDidLoad
{
    [super viewDidLoad];
    
    /** load header.. */
    headerView.delegate = self;
    self.navigationItem.titleView = headerView;
    
    [[NSNotificationCenter defaultCenter] removeObserver:self name:@"ReadResults" object:nil];

    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(loadReadResults:) name:@"ReadResults" object:nil];
    
    
    /* load splitviewcontroller here... **/
    readDeviceViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"ReadDeviceViewController"];
    UINavigationController *masterNavigationController = [[UINavigationController alloc] initWithRootViewController:readDeviceViewController];
    masterNavigationController.navigationBar.tintColor = [UIColor colorWithRed:1.0/255.0 green:93.0/255.0 blue:170.0/255.0 alpha:1.0];
    detailViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"DetailViewController"];
    UINavigationController *detailNavigationController = [[UINavigationController alloc] initWithRootViewController:detailViewController];
    readDeviceViewController.detailViewController = detailViewController;
    
    self.splitController = [[UISplitViewController alloc] init];
    self.splitController.delegate = detailViewController;
    self.splitController.viewControllers = [NSArray arrayWithObjects:masterNavigationController,detailNavigationController,nil];
    [self.view addSubview:self.splitController.view];
    /* end splitviewcontroller... **/
    
}


-(void)loadReadResults:(NSNotification *)notification{
    
    TMR_Reader r, *rp;
    rp = &r;
    
    NSLog(@"******* SRK Received Notification ***********");
    
    //rp = (__bridge TMR_Reader *)([notification  object]);
    
    NSData *data = notification.userInfo[@"ImportantInformation"];
    
    // do some sanity checking
    if ( !data || data.length != sizeof(r) )
    {
        NSLog( @"Well, that didn't work" );
    }
    else
    {
        // finally, extract the structure from the NSData object
        [data getBytes:rp length:sizeof(r)];
        
        // print out the structure members to prove that we received that data that was sent
        NSLog( @"Received notification with ImportantInformation" );
        
        NSLog(@"**** Connected -- %i", rp->connect);

    }
    
    
    
//    NSValue * valueOfStruct = notification.userInfo[@"CustomStructValue"];
//    [valueOfStruct getValue:&r];
    
    [headerView.offBtn setBackgroundImage:[UIImage imageNamed:@"power-active.png"] forState:UIControlStateNormal];
    headerView.offBtn.tag =1;
    
     self.readResultsViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"ReadResultsViewController"];
    
    self.readResultsViewController.TMR_Reader_data = data;

    UIInterfaceOrientation orientation = [[UIApplication sharedApplication] statusBarOrientation];
    if (orientation == UIInterfaceOrientationLandscapeRight || orientation == UIInterfaceOrientationLandscapeLeft) {
        //self.readResultsViewController.view.frame = self.view.frame;
        self.readResultsViewController.view.frame = CGRectMake(self.view.frame.origin.x, self.view.frame.origin.y, self.view.frame.size.width, self.view.frame.size.height);
        [self.view addSubview:self.readResultsViewController.view];
    }
    else{
        readResultsNavigationController = [[UINavigationController alloc] initWithRootViewController:self.readResultsViewController];
        [self.view addSubview:readResultsNavigationController.view];
    }
}


-(void) goHome{
    @try {
        for (int i=0; i<[services count]; i++) {
            
            if (globalsServiceselectedindex == i) {
                
                NSArray *serviceType = [services objectAtIndex:i];
                [(NetworkDeviceViewController*)[serviceType objectAtIndex:5] discontBtnAction];
                break;
            }
        }
        //dispatch_async( dispatch_get_main_queue(), ^{
        [headerView.offBtn setBackgroundImage:[UIImage imageNamed:@"power-inactive.png"] forState:UIControlStateNormal];
        headerView.offBtn.tag =0;
        
        readToggle = TRUE;
        
        [readResultsNavigationController.view removeFromSuperview];
        [self.readResultsViewController.view removeFromSuperview];
        [[NSNotificationCenter defaultCenter] postNotificationName:@"StopTimer" object:self];
    }
    @catch (NSException *exception) {
        
        //NSLog(@"%@",exception);
        [readResultsNavigationController.view removeFromSuperview];
        [self.readResultsViewController.view removeFromSuperview];
    }
}


-(void) goBack{
}

-(void) settingViewControl{
}

-(void)viewWillAppear:(BOOL)animated
{

    
    if (IS_IPAD) {
        if ([[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeLeft || [[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeRight) {
            
            headerView.logoview.frame = CGRectMake(0.0, 0.0, 150.0, 44.0);
            headerView.ttllbl.frame = CGRectMake(370.0, 0.0, 250.0, 44.0);
            headerView.statusShowIcon.frame = CGRectMake(865,5,32,32);
            headerView.offBtn.frame = CGRectMake(920.0, 4.0, 33, 33);
            headerView.settingBtn.frame = CGRectMake(970.0, 6.0, 32.0, 32.0);
            
            self.readResultsViewController.view.frame = CGRectMake(0, 0, 1024, 768);
        }
        else{
            
            headerView.logoview.frame = CGRectMake(-5.0, 0.0, 150.0, 44.0);
            headerView.ttllbl.frame = CGRectMake(250.0, 0.0, 250.0, 44.0);
            headerView.statusShowIcon.frame = CGRectMake(610,5,32,32);
            headerView.offBtn.frame = CGRectMake(665.0, 4.0, 33, 33);
            headerView.settingBtn.frame = CGRectMake(720.0, 6.0, 32.0, 32.0);
            
            self.readResultsViewController.view.frame = CGRectMake(0, 0, 768, 1024);
        }
        self.navigationItem.titleView = headerView;
        
        headerView.frame = self.navigationController.navigationBar.frame;
        self.navigationItem.titleView = headerView;
    }

}


-(void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration{
    
    if (IS_IPAD) {
        if ([[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeLeft || [[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeRight) {
            
            headerView.logoview.frame = CGRectMake(0.0, 0.0, 150.0, 44.0);
            headerView.ttllbl.frame = CGRectMake(370.0, 0.0, 250.0, 44.0);
            headerView.statusShowIcon.frame = CGRectMake(865,5,32,32);
            headerView.offBtn.frame = CGRectMake(920.0, 4.0, 33, 33);
            headerView.settingBtn.frame = CGRectMake(970.0, 6.0, 32.0, 32.0);
            
            self.readResultsViewController.view.frame = CGRectMake(0, 0, 1024, 768);
        }
        else{
            
            headerView.logoview.frame = CGRectMake(-5.0, 0.0, 150.0, 44.0);
            headerView.ttllbl.frame = CGRectMake(250.0, 0.0, 250.0, 44.0);
            headerView.statusShowIcon.frame = CGRectMake(610,5,32,32);
            headerView.offBtn.frame = CGRectMake(665.0, 4.0, 33, 33);
            headerView.settingBtn.frame = CGRectMake(720.0, 6.0, 32.0, 32.0);
            
            self.readResultsViewController.view.frame = CGRectMake(0, 0, 768, 1024);
        }
        
        headerView.frame = self.navigationController.navigationBar.frame;
        self.navigationItem.titleView = headerView;
    }
}

- (BOOL)shouldAutorotate {
    return YES;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
