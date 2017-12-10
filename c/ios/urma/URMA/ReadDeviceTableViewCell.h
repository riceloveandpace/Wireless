//
//  ReadDeviceTableViewCell.h
//  URMA
//
//  Created by Raju on 03/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ReadDeviceTableViewCell : UITableViewCell{
    
    IBOutlet UILabel *ttlLbl;
    IBOutlet UIImageView *deviceTypeimgView;
    IBOutlet UIImageView *imgView;
}

@property(nonatomic,retain) IBOutlet UILabel *ttlLbl;
@property(nonatomic,retain) IBOutlet UIImageView *deviceTypeimgView;
@property(nonatomic,retain) IBOutlet UIImageView *imgView;

-(void) setTableViewCell:(NSString *)ttllblString deviveTpyeImage:(UIImage *)deviceTpyeImg image:(UIImage *)img;

@end
