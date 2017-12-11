//
//  HeaderView.m
//  urma
//
//  Created by Raju on 04/08/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import "HeaderView.h"
#import "ViewController.h"
//#import "Global.h"


@implementation HeaderView
@synthesize statusShowIcon,offBtn,settingBtn,logoview,ttllbl;
@synthesize delegate;

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    
    if (IS_IPAD) {
          if ([[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeLeft || [[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeRight)
          {
              self.frame = CGRectMake(0, 0, 1024, 64);
          }
        else
        {
            self.frame = CGRectMake(0, 0, 768, 64);
        }
    } else {
        self.frame = CGRectMake(0, 0, 320, 64);
    }
    
    [self setBackgroundColor:[UIColor colorWithRed:15.0/255.0 green:69.0/255.0 blue:161.0/255.0 alpha:1]];
    
    logoview =[[UIImageView alloc] init];
    logoview.frame = CGRectMake(0.0, 15.0, 150.0, 44.0);
    logoview.image=[UIImage imageNamed:@"thingmagic_title_logo.png"];
    [self addSubview:logoview];
    
    ttllbl = [[UILabel alloc] init];
    if (IS_IPAD) {
        ttllbl.frame = CGRectMake(250.0, 15.0, 250.0, 44.0);
        ttllbl.font = font_ExtraBold_16;
        ttllbl.textColor = [UIColor whiteColor];
        ttllbl.text = @"Universal Reader Assistant";
        ttllbl.textAlignment = NSTextAlignmentCenter;
    } else {
        ttllbl.hidden = YES;
    }
    [self addSubview:ttllbl];
    
    
    statusShowIcon =[[UIImageView alloc] init];
    if (IS_IPAD) {
        statusShowIcon.frame = CGRectMake(610,20,32,32);
    } else {
        statusShowIcon.frame = CGRectMake(190,20,29,29);
    }
    statusShowIcon.image=[UIImage imageNamed:@"light-red.png"];
    [self addSubview:statusShowIcon];
    
    
    offBtn = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    offBtn.clipsToBounds = YES;
    [offBtn addTarget:self action:@selector(homeViewAction:)
     forControlEvents:UIControlEventTouchUpInside];
    [offBtn setBackgroundImage:[UIImage imageNamed:@"power-inactive.png"] forState:UIControlStateNormal];
    offBtn.tag = 0;
    if (IS_IPAD) {
        offBtn.frame = CGRectMake(665.0, 20.0, 33, 33);
    } else {
        offBtn.frame = CGRectMake(235.0, 20.0, 30, 30);
    }
    [self addSubview:offBtn];
    
    settingBtn = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    [settingBtn addTarget:self action:@selector(settingViewAction:)
         forControlEvents:UIControlEventTouchUpInside];
    [settingBtn setBackgroundImage:[UIImage imageNamed:@"meni-active.png"] forState:UIControlStateNormal];
    if (IS_IPAD) {
        settingBtn.frame = CGRectMake(720.0, 6.0, 32.0, 32.0);
    } else {
        settingBtn.frame = CGRectMake(280.0, 6.0, 29.0, 29.0);
    }
    settingBtn.tag = 0;
    settingBtn.hidden = YES; 
    [self addSubview:settingBtn];
    
    UIInterfaceOrientation orientation = [[UIApplication sharedApplication] statusBarOrientation];
    if (orientation == UIInterfaceOrientationLandscapeLeft || orientation == UIInterfaceOrientationLandscapeRight) {
        
        if (IS_IPAD) {
            
            self.logoview.frame = CGRectMake(0.0, 15.0, 150.0, 44.0);
            self.ttllbl.frame = CGRectMake(380.0, 15.0, 250.0, 44.0);
            self.statusShowIcon.frame = CGRectMake(865,20,32,32);
            self.offBtn.frame = CGRectMake(920.0, 20.0, 33, 33);
            self.settingBtn.frame = CGRectMake(970.0, 20.0, 32.0, 32.0);
        }
    }
    
    [self setAutoresizingMask:UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleHeight];
    
    return self;
}

-(IBAction)homeViewAction:(id)sender{
    
    if ([sender tag] == 1) {
        UIActionSheet *actionSheet = [[UIActionSheet alloc]
                                      initWithTitle:@"Disconnect the current device?"
                                      delegate:self
                                      cancelButtonTitle:nil
                                      destructiveButtonTitle:@"Disconnect"
                                      otherButtonTitles:@"Cancel", nil];
        if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad) {
            // In this case the device is an iPad.
            [actionSheet showFromRect:[offBtn frame] inView:self animated:YES];
        }
        else{
            // In this case the device is an iPhone/iPod Touch.
            [actionSheet showInView:self];
        }
    }
}

- (void)willPresentActionSheet:(UIActionSheet *)actionSheet {
    
    for (UIView *_currentView in actionSheet.subviews)
    {
        if ([_currentView isKindOfClass:[UIButton class]])
        {
            UIButton *button = (UIButton *)_currentView;
            button.titleLabel.font = font_Semibold_18;
        }
        else if ([_currentView isKindOfClass:[UILabel class]]){
            UILabel *l = [[UILabel alloc] initWithFrame:_currentView.frame];
            l.text = [(UILabel *)_currentView text];
            [l setFont:font_Semibold_12];
            l.textColor = [UIColor darkGrayColor];
            l.backgroundColor = [UIColor clearColor];
            [l sizeToFit];
            [l setCenter:CGPointMake(actionSheet.center.x, 25)];
            [l setFrame:CGRectIntegral(l.frame)];
            [actionSheet addSubview:l];
            _currentView.hidden = YES;
        }
    }
}

-(IBAction)settingViewAction:(id)sender{
    
    if (settingBtn.tag == 0) {
        [delegate settingViewControl];
    }
    else{
        [delegate goBack];
    }
}

-(void)actionSheet:(UIActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex {
    
    if (buttonIndex == 0) {
        [delegate goHome];
    }
    else if (buttonIndex == 1) {
        [delegate goBack];
    }
}


@end
