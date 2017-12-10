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
   [self.view setBackgroundColor:[UIColor colorWithRed:15.0/255.0 green:69.0/255.0 blue:161.0/255.0 alpha:1]];
    [[self navigationController] setNavigationBarHidden:YES animated:YES];
    
    [[NSNotificationCenter defaultCenter] removeObserver:self name:@"ReadResults" object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(loadReadResults:) name:@"ReadResults" object:nil];
   // [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(applyDisconnect) name:@"RemoveReadResults" object:nil];
    
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
    
    
    
    [self.mainHeaderView setBackgroundColor:[UIColor colorWithRed:15.0/255.0 green:69.0/255.0 blue:161.0/255.0 alpha:1]];
    
    [self.mainHeaderView setAutoresizingMask:UIViewAutoresizingFlexibleWidth];
    
    [super viewDidLoad];
    
}

-(void)applyDisconnect
{
    NSLog(@"****** DISCONNECT IN VIEWCONTROLLER*******");
    [self goHome];
}


-(void)loadReadResults:(NSNotification *)notification{
    
    /*
    
    TMR_Reader r, *rp;
    rp = &r;
    
    
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
        
        //NSLog(@"**** Connected -- %d", rp->connect);

    }
    
        ReadResultsViewController *readResultsViewController;
    
    
    [headerView.offBtn setBackgroundImage:[UIImage imageNamed:@"power-active.png"] forState:UIControlStateNormal];
    headerView.offBtn.tag =1;
    
     readResultsViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"ReadResultsViewController"];
    
    readResultsViewController.TMR_Reader_data = data;
    readResultsViewController.r = r;
    readResultsViewController.rp = rp;
    
    UIInterfaceOrientation orientation = [[UIApplication sharedApplication] statusBarOrientation];
    if (orientation == UIInterfaceOrientationLandscapeRight || orientation == UIInterfaceOrientationLandscapeLeft) {
        //self.readResultsViewController.view.frame = self.view.frame;
        readResultsViewController.view.frame = CGRectMake(self.view.frame.origin.x, self.view.frame.origin.y, self.view.frame.size.width, self.view.frame.size.height);
        //[self.view addSubview:self.readResultsViewController.view];
        //self.readResultsViewController.view.tag = 420;
    }
    else{
//        readResultsNavigationController = [[UINavigationController alloc] initWithRootViewController:self.readResultsViewController];
//        [self.view addSubview:readResultsNavigationController.view];
    }
    
     [self.view addSubview:readResultsViewController.view];
     */
    
}

-(void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration
{
    
    if (IS_IPAD) {
        if ([[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeLeft || [[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeRight) {
            
            mainHeaderView.logoview.frame = CGRectMake(0.0, 15.0, 150.0, 44.0);
            mainHeaderView.ttllbl.frame = CGRectMake(370.0, 15.0, 300.0, 44.0);
            mainHeaderView.statusShowIcon.frame = CGRectMake(865,20,32,32);
            mainHeaderView.offBtn.frame = CGRectMake(920.0, 20.0, 33, 33);
            mainHeaderView.settingBtn.frame = CGRectMake(970.0, 20.0, 32.0, 32.0);
            
            
        }
        else{
            
            mainHeaderView.logoview.frame = CGRectMake(0.0, 15.0, 150.0, 44.0);
            mainHeaderView.ttllbl.frame = CGRectMake(250.0, 15.0, 250.0, 44.0);
            mainHeaderView.statusShowIcon.frame = CGRectMake(610,20,32,32);
            mainHeaderView.offBtn.frame = CGRectMake(665.0, 20.0, 33, 33);
            mainHeaderView.settingBtn.frame = CGRectMake(720.0, 20.0, 32.0, 32.0);
            
        }
        
    }

}



-(void) goHome{
    @try {
        for (int i=0; i<[services count]; i++) {
            
            if (globalsServiceselectedindex == i) {
                
                NSArray *serviceType = [services objectAtIndex:i];
                //[(NetworkDeviceViewController*)
                
                if([serviceType count] > 5 )
                    [[serviceType objectAtIndex:5] discontBtnAction];
                break;
            }
        }
        //dispatch_async( dispatch_get_main_queue(), ^{
        [headerView.offBtn setBackgroundImage:[UIImage imageNamed:@"power-inactive.png"] forState:UIControlStateNormal];
        headerView.offBtn.tag =0;
        
        readToggle = TRUE;
        
        [readResultsNavigationController.view removeFromSuperview];
        //[self.readResultsViewController.view removeFromSuperview];
        [[NSNotificationCenter defaultCenter] postNotificationName:@"StopTimer" object:self];
    }
    @catch (NSException *exception) {
        
        //NSLog(@"%@",exception);
        [readResultsNavigationController.view removeFromSuperview];
        //[self.readResultsViewController.view removeFromSuperview];
    }
}


-(void) goBack{
}

-(void) settingViewControl{
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
