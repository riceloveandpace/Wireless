//
//  ViewController.h
//  URMA
//
//  Created by Raju on 11/08/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainViewController.h"
#import "ReadDeviceViewController.h"
#import "DetailViewController.h"
#import "NetworkDeviceViewController.h"
#import "ReadDeviceViewController.h"
#import "ReadResultsViewController.h"

@interface ViewController : MainViewController<HeaderViewDelegate>{
    
    UINavigationController *readResultsNavigationController;
}

@property (strong, nonatomic) ReadDeviceViewController *readDeviceViewController;
@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) UISplitViewController *splitController;

@end
