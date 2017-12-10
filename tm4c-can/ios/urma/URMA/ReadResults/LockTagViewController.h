//
//  LockTagViewController.h
//  URMA
//
//  Created by qvantel on 11/21/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "tm_reader.h"
#import "Global.h"
#import "UICheckbox.h"
#import "tm_reader.h"

@interface LockTagViewController : UIViewController<UITextFieldDelegate>
{
    TMR_Reader r;
    TMR_Reader*rp;
}
@property(nonatomic,strong)IBOutlet UILabel *lblEPCString;
@property(nonatomic,strong) NSString *recEPCString;
//@property (nonatomic, strong) NSData * TMR_Reader_data;

@property(nonatomic,strong)IBOutlet UILabel *lblAccessPassword;
@property (weak, nonatomic) IBOutlet UITextField *epcLockTextFiled;
@property(nonatomic,strong)IBOutlet UILabel *lblApplyLocks;

@property(nonatomic, weak)IBOutlet UICheckbox *userMemoryUnlockCheckbox;
@property(nonatomic, weak)IBOutlet UICheckbox *userMemoryLockCheckbox;
@property(nonatomic, weak)IBOutlet UICheckbox *userMemoryRWLockCheckbox;
@property(nonatomic, weak)IBOutlet UICheckbox *userMemoryPERMCheckbox;

@property(nonatomic, weak)IBOutlet UICheckbox *EPCUnlockCheckbox;
@property(nonatomic, weak)IBOutlet UICheckbox *EPCLockCheckbox;
@property(nonatomic, weak)IBOutlet UICheckbox *EPCRWLockCheckbox;
@property(nonatomic, weak)IBOutlet UICheckbox *EPCPERMCheckbox;

@property(nonatomic, weak)IBOutlet UICheckbox *AccessPwdUnlockCheckbox;
@property(nonatomic, weak)IBOutlet UICheckbox *AccessPwdLockCheckbox;
@property(nonatomic, weak)IBOutlet UICheckbox *AccessPwdRWLockCheckbox;
@property(nonatomic, weak)IBOutlet UICheckbox *AccessPwdPERMCheckbox;

@property(nonatomic, weak)IBOutlet UICheckbox *KillPwdUnlockCheckbox;
@property(nonatomic, weak)IBOutlet UICheckbox *KillPwdLockCheckbox;
@property(nonatomic, weak)IBOutlet UICheckbox *KillPwdRWLockCheckbox;
@property(nonatomic, weak)IBOutlet UICheckbox *KillPwdPERMCheckbox;

@property (nonatomic,assign) TMR_Reader *rp;
@property  TMR_Reader r;


-(IBAction)userMemoryCheckboxClick:(UICheckbox *)sender;
-(IBAction)EPCCheckboxClick:(UICheckbox *)sender;
-(IBAction)accessPwdCheckboxClick:(UICheckbox *)sender;
-(IBAction)killPwdCheckboxClick:(UICheckbox *)sender;




-(IBAction)apply:(UIButton *)sender;

@end
