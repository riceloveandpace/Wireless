//
//  DetailViewController.h
//  URMA
//
//  Created by Raju on 02/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController<UISplitViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UIButton *readAction;
@property (weak, nonatomic) IBOutlet UIButton *disconnectAction;
@property (weak, nonatomic) IBOutlet UIButton *readBtn;
@property (weak, nonatomic) IBOutlet UIButton *disconnectBtn;
@property (weak, nonatomic) IBOutlet UILabel *infolbl;

@end
