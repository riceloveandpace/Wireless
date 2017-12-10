//
//  AddDeviceViewController.h
//  URMA
//
//  Created by Raju on 03/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "tm_reader.h"
#import "Global.h"

extern int selectedIndex_a;

@interface AddDeviceViewController : UIViewController<UITextFieldDelegate>{
    
    TMR_Reader r, *rp;
    TMR_Status ret;
    TMR_TransportListenerBlock tb;
    TMR_ReadListenerBlock rlb;
    TMR_ReadExceptionListenerBlock reb;
}

@property (nonatomic, retain) NSTimer *silenceTimer;
@property (nonatomic) int selectedIndex;
@property (weak, nonatomic) IBOutlet NSString *serviceIp;

@property (weak, nonatomic) IBOutlet UILabel *hostlbl;
@property (weak, nonatomic) IBOutlet UILabel *regionlbl;
@property (weak, nonatomic) IBOutlet UILabel *tranceportloglbl;
@property (weak, nonatomic) IBOutlet UILabel *readlbl;
@property (weak, nonatomic) IBOutlet UILabel *timeout_rfOn_lbl;
@property (weak, nonatomic) IBOutlet UILabel *rfoff;
@property (weak, nonatomic) IBOutlet UILabel *fastsearchlbl;

@property (weak, nonatomic) IBOutlet UIButton *discontBtn;
@property (weak, nonatomic) IBOutlet UIButton *connectBtn;
@property (weak, nonatomic) IBOutlet UIButton *cancelBtn;

@property (weak, nonatomic) IBOutlet UITextField *hostTxtfield;

@property (weak, nonatomic) IBOutlet UILabel *regionValuelbl;
@property (weak, nonatomic) IBOutlet UISwitch *tranceportlogBtn;
@property (weak, nonatomic) IBOutlet UISegmentedControl *readTypeSegment;
@property (weak, nonatomic) IBOutlet UITextField *timeout_rfOn_TxtField;
@property (weak, nonatomic) IBOutlet UITextField *rfOnTxtfield;
@property (weak, nonatomic) IBOutlet UISwitch *fastSearchBtn;

@property (weak, nonatomic) IBOutlet UIButton *readBtn;
@property (weak, nonatomic) IBOutlet UIButton *disconnectBtn;
@property (weak, nonatomic) IBOutlet UIView *lastlineView;
@property (weak, nonatomic) IBOutlet UIButton *transportLogViewBtn;

-(void) asyncRead;
-(void) stopReadResults;
-(void) discontBtnAction;

@end
