//
//  ViewController.h
//  URMA
//
//  Created by Raju on 11/08/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ReadDeviceViewController.h"
#import "DetailViewController.h"
#import "Global.h"
#import "ReadResultsViewController.h"
#import "NetworkDeviceViewController.h"

@class ReadDeviceViewController;
@class DetailViewController;
@class ReadResultsViewController;

@interface ViewController : UIViewController<HeaderViewDelegate>{
    
    UINavigationController *readResultsNavigationController;
}

@property (strong, nonatomic) ReadDeviceViewController *readDeviceViewController;
@property (strong, nonatomic) DetailViewController *detailViewController;
@property (strong, nonatomic) ReadResultsViewController *readResultsViewController;
@property (strong, nonatomic) UISplitViewController *splitController;

@end
