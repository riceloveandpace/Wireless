//
//  SerialDeviceViewController.h
//  URMA
//
//  Created by Raju on 03/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ListPickerViewController.h"
#import "RscMgr.h"
#import "tm_reader.h"

extern int selectedIndex_s;

@interface SerialDeviceViewController : UIViewController<UITextFieldDelegate,ListPickerViewControllerDelegate>{
    
    TMR_Reader r, *rp;
    TMR_Status ret;
    TMR_TransportListenerBlock tb;
    TMR_ReadListenerBlock rlb;
    TMR_ReadExceptionListenerBlock reb;
    
    NSMutableArray *readResultArray;
}

@property (nonatomic, retain) NSMutableArray *readResultArray;
@property (nonatomic, retain) NSTimer *silenceTimer;
@property (nonatomic) int selectedIndex;

@property (weak, nonatomic) IBOutlet UILabel *baudratelbl;
@property (weak, nonatomic) IBOutlet UILabel *regionlbl;
@property (weak, nonatomic) IBOutlet UILabel *tranceportloglbl;
@property (weak, nonatomic) IBOutlet UILabel *readlbl;
@property (weak, nonatomic) IBOutlet UILabel *timeout_rfOn_lbl;
@property (weak, nonatomic) IBOutlet UILabel *rfoff;
@property (weak, nonatomic) IBOutlet UILabel *fastsearchlbl;

@property (weak, nonatomic) IBOutlet UIButton *discontBtn;
@property (weak, nonatomic) IBOutlet UIButton *connectBtn;
@property (weak, nonatomic) IBOutlet UIButton *cancelBtn;

@property (weak, nonatomic) IBOutlet UITextField *baudrateTxtfield;
@property (weak, nonatomic) IBOutlet UIButton *baudratelistBtn;
@property (weak, nonatomic) IBOutlet UITextField *regionTxtfield;
@property (weak, nonatomic) IBOutlet UIButton *regionlistBtn;
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
