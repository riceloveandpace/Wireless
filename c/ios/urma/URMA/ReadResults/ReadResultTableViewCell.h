//
//  ReadResultTableViewCell.h
//  URMA
//
//  Created by Raju on 25/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TNRadioButtonGroup.h"
#import "tm_reader.h"
#import <ExternalAccessory/ExternalAccessory.h>
#import "RadioButton.h"

@class ExpandViewController;

@protocol ReadResultTableViewCellDelegate;



@interface ReadResultTableViewCell : UITableViewCell<UITextFieldDelegate>
{
    
    IBOutlet UILabel *epclblTxt;
    IBOutlet UILabel *datelblTxt;
    IBOutlet UILabel *lblTxtOne;
    IBOutlet UILabel *lblTxtTwo;
    IBOutlet UILabel *lblTxtThree;
    IBOutlet UILabel *lblTxtFour;
    IBOutlet UILabel *lblTxtFive;
    IBOutlet UILabel *lblTxtSix;
    
    TMR_Reader r;
    TMR_Reader *rp;
    
    id<ReadResultTableViewCellDelegate> theDelegate;
}

@property (nonatomic,strong) id<ReadResultTableViewCellDelegate> theDelegate;

@property (nonatomic,retain) IBOutlet UILabel *epclblTxt;
@property (nonatomic,retain) IBOutlet UILabel *datelblTxt;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtOne;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtTwo;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtThree;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtFour;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtFive;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtSix;
@property (weak, nonatomic) IBOutlet UILabel *serviceType;

@property (weak, nonatomic) IBOutlet UIView *collapseView;
@property (weak, nonatomic) IBOutlet UIView *expandView;
@property (weak, nonatomic) IBOutlet UIView *segmentView;

@property (nonatomic,retain) IBOutlet UILabel *lblTxtOneExpand;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtTwoExpand;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtThreeExpand;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtFourExpand;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtFiveExpand;
@property (nonatomic,retain) IBOutlet UILabel *lblTxtSixExpand;
@property (nonatomic,retain) IBOutlet UILabel *datelblTxtExpand;
@property (nonatomic,retain) IBOutlet UISegmentedControl *segmentedControl;

@property (weak, nonatomic) IBOutlet UIView *segmentContainerInfoView;
@property (weak, nonatomic) IBOutlet UIView *segmentContainerWriteEPCView;
@property (weak, nonatomic) IBOutlet UIView *segmentContainerInspectView;
@property (weak, nonatomic) IBOutlet UIView *segmentContainerLockView;
@property (weak, nonatomic) IBOutlet UIView *segmentContainerUserMemoryView;

@property (nonatomic,retain) IBOutlet UILabel *infoLabel;
@property (nonatomic,retain) IBOutlet UILabel *infoEPCLabel;
@property (weak, nonatomic) IBOutlet UITextField *epcInfoTextFiled;
@property (weak, nonatomic) IBOutlet UITextField *epcWriteTextFiled;
@property (weak, nonatomic) IBOutlet UITextField *epcLockTextFiled;
@property (weak, nonatomic) IBOutlet UIButton *saveEPCButton;
@property (weak, nonatomic) IBOutlet UIButton *saveWriteEPCButton;
@property (weak, nonatomic) IBOutlet UIButton *saveLockButton;

@property (weak, nonatomic) IBOutlet UILabel *lockLabel;

@property (weak, nonatomic) IBOutlet UIButton *cancelButton;
@property (strong, nonatomic) IBOutlet UIButton *expandButton;

@property (nonatomic, strong) TNRadioButtonGroup *epcGroup;
@property (nonatomic, strong) IBOutlet RadioButton *writeEPCGroup;

@property (nonatomic, strong) ExpandViewController *expandViewController;
@property  TMR_Reader r;
@property (nonatomic, assign) TMR_Reader *rp;

@property (weak, nonatomic) IBOutlet UIButton *clickButton;


- (void) setDelegate:(id <ReadResultTableViewCellDelegate>) delegate;

-(void) loadreadResultTableViewCell:(NSString*)_epclblTxt date:(NSString*)_date  rssi:(NSInteger)_rssi readcout:(NSInteger)_radcoun antenaa:(NSInteger)_antenaa phase:(NSString *)_phase frequency:(NSString *)_frequenct protocal:(NSString *)_protocal serviceType:(NSInteger) _serviceType;


//-(void) loadreadResultExpandTableViewCell:(NSString*)_epclblTxt date:(NSString*)_date  rssi:(NSInteger)_rssi readcout:(NSInteger)_radcoun antenaa:(NSInteger)_antenaa phase:(NSString *)_phase frequency:(NSString *)_frequenct protocal:(NSString *)_protocal serviceType:(NSInteger) _serviceType originalEPC:(NSString *)originalEPC readerData:(NSData *)data;

-(void) loadreadResultExpandTableViewCell:(NSString*)_epclblTxt date:(NSString*)_date  rssi:(NSInteger)_rssi readcout:(NSInteger)_radcoun antenaa:(NSInteger)_antenaa phase:(NSString *)_phase frequency:(NSString *)_frequenct protocal:(NSString *)_protocal serviceType:(NSInteger) _serviceType originalEPC:(NSString *)originalEPC rp:(TMR_Reader *)rp;

-(IBAction)clickButtonClick:(id)sender;

@end

@protocol ReadResultTableViewCellDelegate <NSObject>

-(void) didPressButton:(ReadResultTableViewCell *)theCell;
-(void) saveCompleted:(ReadResultTableViewCell *)theCell andResonposeString:(NSString *)statusString andTitle:(NSString *)title;
-(void)expandTableIndex:(NSInteger) row;
-(IBAction)onRadioBtn:(RadioButton*)sender;
-(void)sendClickButtonAction:(ReadResultTableViewCell *)theCell;

@end
