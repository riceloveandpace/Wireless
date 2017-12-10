//
//  ReadTagViewController.h
//  URMA
//
//  Created by qvantel on 11/20/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InspectTagViewController.h"
#import "LockTagViewController.h"
#import "DetailViewController.h"
#import "UserMemoryViewController.h"
#import "tm_reader.h"


@interface ReadTagViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
{
    TMR_Reader r;
    TMR_Reader *rp;
}


@property (strong, nonatomic) IBOutlet UITableView *readTagTableView;
@property (strong, nonatomic) DetailViewController *detailViewController;
@property(nonatomic, strong)  InspectTagViewController *inspectTagViewController;
@property (nonatomic, strong) LockTagViewController *lockTagViewController;
@property (nonatomic, strong) UserMemoryViewController *userMemoryViewController;
@property (nonatomic) NSInteger TableCellIndex;

@property (nonatomic, strong) NSData * TMR_Reader_data;
@property  TMR_Reader r;
@property (nonatomic, assign) TMR_Reader *rp;
@property(nonatomic,strong) NSString *recEPCString;


@end
