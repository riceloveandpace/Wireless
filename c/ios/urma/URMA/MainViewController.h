//
//  MainViewController.h
//  URMA
//
//  Created by qvantel on 12/17/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Global.h"

@interface MainViewController : UIViewController<HeaderViewDelegate>
{
    HeaderView *mainHeaderView;
}

@property(nonatomic,strong) HeaderView *mainHeaderView;

@end
