//
//  SortResultsViewController.h
//  URMA
//
//  Created by qvantel on 11/7/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SortResultsViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>

@property(nonatomic,strong) IBOutlet UITableView *sortInfoTableView;
@property(nonatomic,strong) NSArray *sortByArray;
@property(nonatomic,strong) NSArray *sortOrderArray;


@end

