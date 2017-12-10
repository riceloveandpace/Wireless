//
//  ExpandViewController.m
//  URMA
//
//  Created by qvantel on 11/20/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import "ExpandViewController.h"

#import "NetworkDeviceViewController.h"

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)



@interface ExpandViewController ()

@end

@implementation ExpandViewController
@synthesize splitViewController, readTagViewController, inspectTagViewController,detailViewController;
@synthesize lockTagViewController,userMemoryViewController,selViewController;
@synthesize TMR_Reader_data,recEPCString;
@synthesize r,rp;


- (void)viewDidLoad {
   
    /** load header.. */
    headerView.delegate = self;
    
    //self.navigationItem.titleView = headerView;
    
    NSLog(@"Received EPC String at ExpandView -- %@", recEPCString);
    NSLog(@"*** Rp status --In Expandview controller %d",r.connected);

    /* load splitviewcontroller here... **/
    readTagViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"ReadTagViewController"];
    readTagViewController.TableCellIndex = _TableCellIndex;
    readTagViewController.recEPCString = recEPCString;
    readTagViewController.TMR_Reader_data = TMR_Reader_data;
    readTagViewController.r = r;
    readTagViewController.rp = rp;
    
    UINavigationController *masterNavigationController = [[UINavigationController alloc] initWithRootViewController:readTagViewController];
    masterNavigationController.navigationBar.tintColor = [UIColor colorWithRed:1.0/255.0 green:93.0/255.0 blue:170.0/255.0 alpha:1.0];

    selViewController = [[UIViewController alloc] init];
    detailViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"DetailViewController"];

    self.inspectTagViewController =[self.storyboard instantiateViewControllerWithIdentifier:@"InspectTagViewController"];
    self.inspectTagViewController.recEPCString = recEPCString;
    self.inspectTagViewController.r = r;
    self.inspectTagViewController.rp = rp;
    
    self.lockTagViewController =[self.storyboard instantiateViewControllerWithIdentifier:@"LockTagViewController"];
    self.lockTagViewController.recEPCString = recEPCString;
    self.lockTagViewController.r = r;
    self.lockTagViewController.rp = rp;
    
    self.userMemoryViewController =[self.storyboard instantiateViewControllerWithIdentifier:@"UserMemoryViewController"];
    self.userMemoryViewController.recEPCString = recEPCString;
    self.userMemoryViewController.TMR_Reader_data = TMR_Reader_data;
    self.userMemoryViewController.r = r;
    self.userMemoryViewController.rp = rp;
    
    switch (_TableCellIndex) {
        case 0:
            {
                selViewController = (InspectTagViewController * )self.inspectTagViewController;
            }
            break;
        case 1:
        {
            selViewController = (LockTagViewController *)self.lockTagViewController;
        }
            break;
        case 2:
        {
            selViewController = (UserMemoryViewController *)self.userMemoryViewController;
        }
            break;
            
        default:
            break;
    }

    
    UINavigationController *detailNavigationController = [[UINavigationController alloc] initWithRootViewController:selViewController];
    
    self.splitViewController = [[UISplitViewController alloc] init];
    self.splitViewController.delegate = detailViewController;
    self.splitViewController.viewControllers = [NSArray arrayWithObjects:masterNavigationController,detailNavigationController,nil];
    [self.view addSubview:self.splitViewController.view];

     [super viewDidLoad];
    
    [self.mainHeaderView.offBtn setBackgroundImage:[UIImage imageNamed:@"power-active.png"] forState:UIControlStateNormal];
    self.mainHeaderView.offBtn.tag =1;
    
    self.mainHeaderView.statusShowIcon.image=[UIImage imageNamed:@"light-orange.png"];

}

-(void)viewWillAppear:(BOOL)animated
{
 
    [[NSNotificationCenter defaultCenter] addObserver:self  selector:@selector(orientationChanged:)  name:UIDeviceOrientationDidChangeNotification  object:nil];
    
}


-(void)orientationChanged:(NSNotification *)notification
{
    if (IS_IPAD) {
        if ([[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeLeft || [[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeRight) {
            
            mainHeaderView.logoview.frame = CGRectMake(0.0, 15.0, 150.0, 44.0);
            mainHeaderView.ttllbl.frame = CGRectMake(370.0, 15.0, 300.0, 44.0);
            mainHeaderView.statusShowIcon.frame = CGRectMake(865,20,32,32);
            mainHeaderView.offBtn.frame = CGRectMake(920.0, 20.0, 33, 33);
            mainHeaderView.settingBtn.frame = CGRectMake(970.0, 20.0, 32.0, 32.0);
            
            
        }
        else if ([[UIDevice currentDevice] orientation] == UIInterfaceOrientationPortrait || [[UIDevice currentDevice] orientation] == UIInterfaceOrientationPortraitUpsideDown) {
            
            mainHeaderView.logoview.frame = CGRectMake(0.0, 15.0, 150.0, 44.0);
            mainHeaderView.ttllbl.frame = CGRectMake(250.0, 15.0, 250.0, 44.0);
            mainHeaderView.statusShowIcon.frame = CGRectMake(610,20,32,32);
            mainHeaderView.offBtn.frame = CGRectMake(665.0, 20.0, 33, 33);
            mainHeaderView.settingBtn.frame = CGRectMake(720.0, 20.0, 32.0, 32.0);
            
        }
        
    }
}

- (BOOL)shouldAutorotate {
    return YES;
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
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
        [mainHeaderView.offBtn setBackgroundImage:[UIImage imageNamed:@"power-inactive.png"] forState:UIControlStateNormal];
        mainHeaderView.offBtn.tag =0;
        
        readToggle = TRUE;
    
        [self.view removeFromSuperview];
        [[NSNotificationCenter defaultCenter] postNotificationName:@"RemoveReadResults" object:self];
        [[NSNotificationCenter defaultCenter] postNotificationName:@"StopTimer" object:self];
    }
    @catch (NSException *exception) {
        
        //NSLog(@"%@",exception);
        [self.view removeFromSuperview];
        [[NSNotificationCenter defaultCenter] postNotificationName:@"RemoveReadResults" object:self];
       
    }
}

-(void) goBack{
}

-(void) settingViewControl{
}



@end
