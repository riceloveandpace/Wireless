//
//  DetailViewController.m
//  URMA
//
//  Created by Raju on 02/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import "DetailViewController.h"
#import "Global.h"

@interface DetailViewController ()

@end

@implementation DetailViewController
@synthesize readAction,disconnectAction;
@synthesize readBtn,disconnectBtn,infolbl;

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
    self.readAction.enabled = NO;
    self.disconnectAction.enabled = NO;
    
    //set font..
    self.readBtn.titleLabel.font = font_Semibold_12;
    self.disconnectBtn.titleLabel.font = font_Normal_12;
    self.infolbl.font = font_Normal_12;
    
    [self.disconnectBtn setTitleColor:[UIColor grayColor] forState:UIControlStateNormal];
    self.readBtn.titleLabel.font = font_ExtraBold_12;
    self.disconnectBtn.titleLabel.font = font_Normal_12;
    
}


- (BOOL)splitViewController:(UISplitViewController*)svc shouldHideViewController:(UIViewController *)vc inOrientation:(UIInterfaceOrientation)orientation {
    return NO;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
