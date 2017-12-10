//
//  ReadDeviceViewController.h
//  URMA
//
//  Created by Raju on 02/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RscMgr.h"
#import "RDRscMgrInterface.h"


@class DetailViewController;
@class SerialDeviceViewController;
@class NetworkDeviceViewController;
@class AddDeviceViewController;
@class SerialSmartCaseDeviceViewController;

@interface ReadDeviceViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,NSNetServiceBrowserDelegate,NSNetServiceDelegate,RDRscMgrInterfaceDelegate>{
    
    IBOutlet UITableView *tableView;
    
    NSMutableArray * networkObjectsArray;
    NSMutableArray * serailObjectsArray;
}

@property (weak, nonatomic) IBOutlet UIButton *refreshBtn;

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) DetailViewController *detailViewController;
@property (strong, nonatomic) SerialDeviceViewController *serialDeviceViewController;
@property (strong, nonatomic) SerialSmartCaseDeviceViewController *serialSmartCaseDeviceViewController;

@property (strong, nonatomic) NetworkDeviceViewController *networkDeviceViewController;
@property (strong, nonatomic) AddDeviceViewController *addDeviceViewController;
@property (weak, nonatomic) IBOutlet UILabel *availDeviceslbl;

@end
