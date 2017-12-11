//
//  ReadResultTableViewCell.m
//  URMA
//
//  Created by Raju on 25/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import "ReadResultTableViewCell.h"
#import "Global.h"

@implementation ReadResultTableViewCell
@synthesize epclblTxt,datelblTxt,lblTxtOne,lblTxtTwo,lblTxtThree,lblTxtFour,lblTxtFive,lblTxtSix,serviceType;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    
    return self;
}

- (void)awakeFromNib
{
    // Initialization code
    self.epclblTxt.font = font_Bold_14;
    self.datelblTxt.font = font_Semibold_14;
    self.lblTxtOne.font = font_Normal_14;
    self.lblTxtTwo.font = font_Normal_14;
    self.lblTxtThree.font = font_Normal_14;
    self.lblTxtFour.font = font_Normal_14;
    self.lblTxtFive.font = font_Normal_14;
    self.lblTxtSix.font = font_Normal_14;
    self.serviceType.font = font_ExtraBold_14;
}

-(void) loadreadResultTableViewCell:(NSString*)_epclblTxt date:(NSString*)_date  rssi:(NSInteger)_rssi readcout:(NSInteger)_radcoun antenaa:(NSInteger)_antenaa phase:(NSString *)_phase frequency:(NSString *)_frequenct protocal:(NSString *)_protocal serviceType:(NSInteger) _serviceType{
    
    
    self.serviceType.text = [NSString stringWithFormat:@"%d",_serviceType];
    self.epclblTxt.text = _epclblTxt;
    self.datelblTxt.text = _date;
    self.lblTxtOne.text = [NSString stringWithFormat:@"RSSI: %d",_rssi];
    self.lblTxtTwo.text = [NSString stringWithFormat:@"ReadCount: %d",_radcoun];
    self.lblTxtThree.text = [NSString stringWithFormat:@"Antenna: %d",_antenaa];
    self.lblTxtFour.text = [NSString stringWithFormat:@"Phase: %@",_phase];
    self.lblTxtFive.text = [NSString stringWithFormat:@"Frequency: %@",_frequenct];
    self.lblTxtSix.text = [NSString stringWithFormat:@"protocal: %@",_protocal];
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];
}

@end
