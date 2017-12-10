//
//  HeaderView.h
//  urma
//
//  Created by Raju on 04/08/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//
#import <UIKit/UIKit.h>

@protocol HeaderViewDelegate
- (void) goHome;
- (void) settingViewControl;
- (void) goBack;
@end

@interface HeaderView : UIView<UIActionSheetDelegate>{
    
    
    UIImageView *statusShowIcon;
    UILabel *ttllbl;
    UIButton *offBtn;
    UIButton *settingBtn;
    UIImageView *logoview;
}

@property (nonatomic,strong) UIImageView *statusShowIcon;
@property (nonatomic,strong) UILabel *ttllbl;
@property (nonatomic,strong) UIButton *offBtn;
@property (nonatomic,strong) UIButton *settingBtn;
@property (nonatomic,strong) UIImageView *logoview;
@property (nonatomic, assign) id<HeaderViewDelegate> delegate;
@end

