//
//  ReadResultTableViewCell.h
//  URMA
//
//  Created by Raju on 25/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ReadResultTableViewCell : UITableViewCell{
    
    IBOutlet UILabel *epclblTxt;
    IBOutlet UILabel *datelblTxt;
    IBOutlet UILabel *lblTxtOne;
    IBOutlet UILabel *lblTxtTwo;
    IBOutlet UILabel *lblTxtThree;
    IBOutlet UILabel *lblTxtFour;
    IBOutlet UILabel *lblTxtFive;
    IBOutlet UILabel *lblTxtSix;
}

@property (nonatomic,retain) IBOutlet UILabel *epclblTxt;
@property (nonatomic,retain) IBOutlet UILabel *datelblTxt;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtOne;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtTwo;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtThree;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtFour;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtFive;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtSix;
@property (weak, nonatomic) IBOutlet UILabel *serviceType;

-(void) loadreadResultTableViewCell:(NSString*)_epclblTxt date:(NSString*)_date  rssi:(NSInteger)_rssi readcout:(NSInteger)_radcoun antenaa:(NSInteger)_antenaa phase:(NSString *)_phase frequency:(NSString *)_frequenct protocal:(NSString *)_protocal serviceType:(NSInteger) _serviceType;
@end
