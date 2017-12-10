//
//  UILabel+Padding.m
//  URMA
//
//  Created by qvantel on 11/25/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import "UILabel+Padding.h"
#import <QuartzCore/QuartzCore.h>

@implementation UILabel (Padding)

- (void)addPadding
{
    
    UIEdgeInsets insets = {0, 15, 0, 5};
    return [self drawTextInRect:UIEdgeInsetsInsetRect(self.frame, insets)];
}


-(void)setBorder
{
    self.layer.borderColor = [UIColor lightGrayColor].CGColor;
    self.layer.borderWidth = 1.0;
    self.textColor = [UIColor lightGrayColor];
}

@end
