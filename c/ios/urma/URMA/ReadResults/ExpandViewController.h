//
//  ExpandViewController.h
//  URMA
//
//  Created by qvantel on 11/20/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainViewController.h"
#import "ReadTagViewController.h"
#import "Global.h"
#import "InspectTagViewController.h"
#import "LockTagViewController.h"
#import "DetailViewController.h"
#import "UserMemoryViewController.h"
#import "tm_reader.h"


@class ReadDeviceViewController;
@class DetailViewController;
@class ReadResultsViewController;

@interface ExpandViewController :  MainViewController<UISplitViewControllerDelegate>{
    
    UINavigationController *readResultsNavigationController;
    TMR_Reader r;
    TMR_Reader *rp;
}

@property (nonatomic, retain)  UISplitViewController *splitViewController;
@property (nonatomic, retain)  ReadTagViewController *readTagViewController;
@property (nonatomic, strong) InspectTagViewController *inspectTagViewController;
@property (nonatomic, strong) LockTagViewController *lockTagViewController;
@property (nonatomic, strong) UserMemoryViewController *userMemoryViewController;

@property (strong, nonatomic) UIViewController *selViewController;
@property (strong, nonatomic) DetailViewController *detailViewController;
@property (nonatomic) NSInteger TableCellIndex;

@property(nonatomic,strong) NSString *recEPCString;
@property (nonatomic, strong) NSData * TMR_Reader_data;
@property  TMR_Reader r;
@property (nonatomic, assign) TMR_Reader *rp;

@end
