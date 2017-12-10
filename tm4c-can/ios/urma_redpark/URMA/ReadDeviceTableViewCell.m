//
//  ReadDeviceTableViewCell.m
//  URMA
//
//  Created by Raju on 03/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import "ReadDeviceTableViewCell.h"
#import "Global.h"

@implementation ReadDeviceTableViewCell
@synthesize ttlLbl,deviceTypeimgView,imgView;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

-(void) setTableViewCell:(NSString *)ttllblString deviveTpyeImage:(UIImage *)deviceTpyeImg image:(UIImage *)img{
    
    ttlLbl.text = ttllblString;
    deviceTypeimgView.image = deviceTpyeImg;
    imgView.image = img;
    
    ttlLbl.font = font_Normal_14;
    
    if ([ttllblString isEqualToString:@"Add device manually..."]) {
        ttlLbl.frame = CGRectMake(15, 11, 700, 30);
        ttlLbl.font = font_Italic_14;
    }
    else{
        ttlLbl.frame = CGRectMake(48, 11, 632, 30);
    }
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];
}

@end
