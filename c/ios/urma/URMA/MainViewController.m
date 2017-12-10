//
//  MainViewController.m
//  URMA
//
//  Created by qvantel on 12/17/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import "MainViewController.h"
#import "HeaderView.h"

@interface MainViewController ()
{
    
}

@end

@implementation MainViewController
@synthesize mainHeaderView;


- (void)viewDidLoad
{
    [super viewDidLoad];
    /** load header.. */
    //tmpView.delegate = self;
    //tmpView.frame = self.navigationController.navigationBar.frame;
    
    mainHeaderView = [[HeaderView alloc] initWithFrame:CGRectMake(0, 0, 768, 64)];

    mainHeaderView.backgroundColor = [UIColor colorWithRed:15.0/255.0 green:69.0/255.0 blue:161.0/255.0 alpha:1];
    
    [mainHeaderView setAutoresizingMask:UIViewAutoresizingFlexibleWidth];
    mainHeaderView.delegate = self;
    [self.view addSubview:mainHeaderView];
    
    //headerView = self.mainHeaderView;

}

-(void) goHome{
    
}


-(void) goBack{
}

-(void) settingViewControl{
}

-(void)viewWillAppear:(BOOL)animated
{
       
}


-(void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration{
    
    

    
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
