//
//  LockTagViewController.m
//  URMA
//
//  Created by qvantel on 11/21/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import "LockTagViewController.h"
#import "UILabel+Padding.h"

#define USER_MEMORY                TMR_GEN2_BANK_USER
#define EPC_MEMORY                  TMR_GEN2_BANK_EPC
#define ACCESS_PASSWORD        TMR_GEN2_BANK_RESERVED
#define KILL_PASSWORD             TMR_GEN2_BANK_RESERVED

@interface LockTagViewController ()
{
    __block NSString *alertString;
    __block NSString *accessPwdString;
        
    NSArray *userMemoryArray;
    NSArray *EPCArray;
    NSArray *accessPwdArray;
    NSArray *killPwdArray;
    
    NSString *userString;
    NSString *epcMemoryString;
    NSString *accesString;
    NSString *killString;
    NSString *applyLockString;
    NSString *newLineString;
}

@end

@implementation LockTagViewController
@synthesize recEPCString;
@synthesize rp,r;

- (void)viewDidLoad {
    [super viewDidLoad];
    
     [self.view addSubview:HUD];
    
    _lblEPCString.text = recEPCString;
    
    [ _lblAccessPassword setBorder];
    
    self.epcLockTextFiled.delegate = self;
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(stopHUDLockTag) name:@"NowStopHUDLock"  object:nil];
    
    _userMemoryRWLockCheckbox.disabled = YES;
    _EPCRWLockCheckbox.disabled = YES;
    _AccessPwdLockCheckbox.disabled = YES;
    _KillPwdLockCheckbox.disabled = YES;
    
    userMemoryArray = @[@"USER_UNLOCK", @"USER_LOCK", @"USER_PERMAUNLOCK",@"USER_PERMALOCK"];
    EPCArray = @[@"EPC_UNLOCK", @"EPC_LOCK", @"EPC_PERMAUNLOCK",@"EPC_PERMALOCK"];

    accessPwdArray=@[@"ACCESS_UNLOCK",@"ACCESS_LOCK",@"ACCESS_PERMAUNLOCK",@"ACCESS_PERMALOCK"];
    
    killPwdArray = @[@"KILL_UNLOCK", @"KILL_LOCK", @"KILL_PERMAUNLOCK",@"KILL_PERMALOCK"];
    
    userString =@"";
    epcMemoryString=@"";
    accessPwdString=@"";
    killString=@"";
    applyLockString= @"";
    newLineString =@"\r\n";
    

}
-(void)viewWillDisappear:(BOOL)animated
{
    [[NSNotificationCenter defaultCenter] removeObserver:self name:@"NowStopHUDLock" object:self];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


-(void)stopHUDLockTag
{
    [HUD hide:YES];
    
    if([alertString length] > 0)
    {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Message"
                                                        message:alertString
                                                       delegate:self
                                              cancelButtonTitle:@"OK"
                                              otherButtonTitles:nil];
        [alert show];
    }
}

-(IBAction)writeLockClicked:(UIButton *)sender
{
    [self.view endEditing:YES];

     [HUD show:YES];

    dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        
        TMR_TagFilter filter;
        TMR_TagData lockEpc;
        TMR_TagOp newtagop;
        TMR_TagOp *op = &newtagop;
        TMR_Status ret;
        TMR_GEN2_Password accessPassword;
        uint32_t epcByteCount;
        
        ret = TMR_hexToBytes([recEPCString cStringUsingEncoding:NSUTF8StringEncoding],lockEpc.epc,TMR_MAX_EPC_BYTE_COUNT,&epcByteCount);
        if (TMR_SUCCESS != ret)
            NSLog(@"TMR_read Status for TMR_hexToBytes :%s", TMR_strerr(rp, ret));
        
        lockEpc.epcByteCount = epcByteCount;
        lockEpc.protocol = TMR_TAG_PROTOCOL_GEN2;
        
        NSLog(@"*** EPC DATA****** ");
        
        ret = TMR_TF_init_tag(&filter, &lockEpc);
        if (TMR_SUCCESS != ret)
            NSLog(@"TMR_read Status for INiT Tag:%s", TMR_strerr(rp, ret));
        
         NSLog(@"*** EPC DATA 1****** ");
        
        uint8_t buf[512];
        TMR_uint8List tmp_buf;
        tmp_buf.max = 512;
        tmp_buf.len = 0;
        tmp_buf.list  = buf;
        
         NSLog(@"*** EPC DATA 2****** ");
        
        ret = TMR_TagOp_init_GEN2_ReadData(op, TMR_GEN2_BANK_RESERVED, 2, 2);
        if (TMR_SUCCESS != ret)
            NSLog(@"*** ERROR:TMR_read Status for TMR_TagOp_init_GEN2_ReadData:%s", TMR_strerr(rp, ret));
        
         NSLog(@"*** EPC DATA 3****** ");
        
        ret= TMR_executeTagOp(rp,op, &filter, &tmp_buf);
        if (TMR_SUCCESS != ret)
            NSLog(@"*** ERROR:TMR_read Status for Lock Execution Operation TMR_GEN2_BANK_RESERVED:%s", TMR_strerr(rp, ret));
        
         NSLog(@"*** EPC DATA 4****** ");
        NSMutableString *stringBuffer = [[NSMutableString alloc] init];
        
        /*
        for(int i =0; i <buf2.len; i++ )
        {
            NSLog(@"%x",buf2.list[i]);
            [stringBuffer appendFormat:@"%x", buf2.list[i]];
        }
         */
        accessPassword = [self hexValue:accessPwdString];
        
        NSLog(@"******** Access Password in Hex -- %x", accessPassword);
        
        ret = TMR_TagOp_init_GEN2_Lock(op, TMR_GEN2_LOCK_BITS_EPC, TMR_GEN2_LOCK_BITS_EPC, accessPassword);
        if (TMR_SUCCESS != ret)
            NSLog(@"*** ERROR: TMR_read Status for init_GEN2_Lock:%s", TMR_strerr(rp, ret));
        
         NSLog(@"*** EPC DATA 5****** ");
        
        if(isTrimble)
        {
            uint8_t antennaList[] = {2};
            ret = TMR_paramSet(rp, TMR_PARAM_TAGOP_ANTENNA, antennaList);
            if (TMR_SUCCESS != ret)
                NSLog(@"TMR_read Status for TMR_paramSet:%s", TMR_strerr(rp, ret));
        }
        
        ret= TMR_executeTagOp(rp,op, &filter, NULL);
        if (TMR_SUCCESS != ret)
        {
            NSLog(@"TMR_read Status for Lock Execution Operation:%s", TMR_strerr(rp, ret));
            alertString = [NSString stringWithFormat:@"%s",TMR_strerr(rp, ret)];
        }
        else
        {
            NSLog(@"LOCK SUCCESS");
            alertString = @"LOCK SUCCESS";
        }
        
         NSLog(@"*** EPC DATA 6****** ");
        
        [[NSNotificationCenter defaultCenter] postNotificationName:@"NowStopHUDLock"  object:self];
      
    });
    
}

- (int) hexValue:(NSString *)myString
{
    int n = 0;
    sscanf([myString UTF8String], "%x", &n);
    return n;
}

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event{
    NSLog(@"touchesBegan:withEvent:");
    [self.view endEditing:YES];
    [super touchesBegan:touches withEvent:event];
}

- (void)textFieldDidBeginEditing:(UITextField *)textField
{
    

}

- (BOOL)textFieldShouldEndEditing:(UITextField *)textField{
    NSLog(@"textFieldShouldEndEditing");
    return YES;
}

- (void)textFieldDidEndEditing:(UITextField *)textField{
    NSLog(@"textFieldDidEndEditing");
    
    accessPwdString = textField.text;
    
}

-(IBAction)userMemoryCheckboxClick:(UICheckbox *)sender
{
    UICheckbox *selCheckBox = sender;
    NSLog(@"Sender tag ----- %d", [selCheckBox tag]);
    
    if([selCheckBox tag] == 1)
    {
        if (_userMemoryUnlockCheckbox.checked)
        {
            if(_userMemoryPERMCheckbox.checked)
            {
                userString = [userMemoryArray objectAtIndex:2];
            }
            else
            {
                userString = [userMemoryArray objectAtIndex:0];
            }
        }
        else
        {
            userString = @"";
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[userMemoryArray objectAtIndex:0] withString:@""];
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[userMemoryArray objectAtIndex:2] withString:@""];
            applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];

        }
      
        
        [self fillCheckBox:_userMemoryUnlockCheckbox withTag:[selCheckBox tag] andIsChecked:selCheckBox.checked from:userString andToggle:_userMemoryLockCheckbox];
    }
    
    if([selCheckBox tag] == 2)
    {
        if (_userMemoryLockCheckbox.checked)
        {
            if(_userMemoryPERMCheckbox.checked)
            {
                userString = [userMemoryArray objectAtIndex:3];
            }
            else
            {
                userString = [userMemoryArray objectAtIndex:1];
            }
        }
        else
        {
            userString = @"";
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[userMemoryArray objectAtIndex:3] withString:@""];
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[userMemoryArray objectAtIndex:1] withString:@""];
            applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
        }

        [self fillCheckBox:_userMemoryLockCheckbox withTag:[selCheckBox tag] andIsChecked:selCheckBox.checked from:userString andToggle:_userMemoryUnlockCheckbox];
        
    }
    if([selCheckBox tag] == 4)
    {
        
        if (_userMemoryPERMCheckbox.checked)
        {
            if(_userMemoryUnlockCheckbox.checked)
            {
                 userString = [userMemoryArray objectAtIndex:2];
                 applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[userMemoryArray objectAtIndex:0] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else if(_userMemoryLockCheckbox.checked)
            {
                userString = [userMemoryArray objectAtIndex:3];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[userMemoryArray objectAtIndex:1] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else
            {
                userString=@"";
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[userMemoryArray objectAtIndex:2] withString:@""];
                 applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[userMemoryArray objectAtIndex:3] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            
        }
        else
        {
            if(_userMemoryUnlockCheckbox.checked)
            {
                userString = [userMemoryArray objectAtIndex:0];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[userMemoryArray objectAtIndex:2] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else if(_userMemoryLockCheckbox.checked)
            {
                userString = [userMemoryArray objectAtIndex:1];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[userMemoryArray objectAtIndex:3] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else
            {
                userString=@"";
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[userMemoryArray objectAtIndex:0] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[userMemoryArray objectAtIndex:1] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[userMemoryArray objectAtIndex:2] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[userMemoryArray objectAtIndex:3] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
        }
        
        [self fillCheckBox:_userMemoryPERMCheckbox withTag:[selCheckBox tag] andIsChecked:selCheckBox.checked from:userString andToggle:_userMemoryPERMCheckbox];
       
        }
    
}

-(IBAction)EPCCheckboxClick:(UICheckbox *)sender
{
    UICheckbox *selCheckBox = sender;
    NSLog(@"Sender tag ----- %d", [selCheckBox tag]);
    
    if([selCheckBox tag] == 1)
    {
        
        if (_EPCUnlockCheckbox.checked)
        {
            if(_EPCPERMCheckbox.checked)
            {
                epcMemoryString = [EPCArray objectAtIndex:2];
            }
            else
            {
                epcMemoryString = [EPCArray objectAtIndex:0];
            }
        }
        else
        {
            epcMemoryString = @"";
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[EPCArray objectAtIndex:0] withString:@""];
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[EPCArray objectAtIndex:2] withString:@""];
            applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            
        }
        
        
        [self fillCheckBox:_EPCUnlockCheckbox withTag:[selCheckBox tag] andIsChecked:selCheckBox.checked from:epcMemoryString andToggle:_EPCLockCheckbox];
        
    }
    if([selCheckBox tag] == 2)
    {
        
        if (_EPCLockCheckbox.checked)
        {
            if(_EPCPERMCheckbox.checked)
            {
                epcMemoryString = [EPCArray objectAtIndex:3];
            }
            else
            {
                epcMemoryString = [EPCArray objectAtIndex:1];
            }
        }
        else
        {
            epcMemoryString = @"";
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[EPCArray objectAtIndex:1] withString:@""];
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[EPCArray objectAtIndex:3] withString:@""];
            applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            
        }
        
        [self fillCheckBox:_EPCLockCheckbox withTag:[selCheckBox tag] andIsChecked:selCheckBox.checked from:epcMemoryString andToggle:_EPCUnlockCheckbox];
    }
    if([selCheckBox tag] == 4)
    {
        
        if (_EPCPERMCheckbox.checked)
        {
            if(_EPCUnlockCheckbox.checked)
            {
                epcMemoryString = [EPCArray objectAtIndex:2];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[EPCArray objectAtIndex:0] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else if(_EPCLockCheckbox.checked)
            {
                epcMemoryString = [EPCArray objectAtIndex:3];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[EPCArray objectAtIndex:1] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else
            {
                epcMemoryString=@"";
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[EPCArray objectAtIndex:2] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[EPCArray objectAtIndex:3] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            
        }
        else
        {
            if(_EPCUnlockCheckbox.checked)
            {
                epcMemoryString = [EPCArray objectAtIndex:0];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[EPCArray objectAtIndex:2] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else if(_EPCLockCheckbox.checked)
            {
                epcMemoryString = [EPCArray objectAtIndex:1];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[EPCArray objectAtIndex:3] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else
            {
                epcMemoryString=@"";
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[EPCArray objectAtIndex:0] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[EPCArray objectAtIndex:1] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[EPCArray objectAtIndex:2] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[EPCArray objectAtIndex:3] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
        }
        
        [self fillCheckBox:_EPCPERMCheckbox withTag:[selCheckBox tag] andIsChecked:selCheckBox.checked from:epcMemoryString andToggle:_EPCPERMCheckbox];
        
    }

}

-(IBAction)accessPwdCheckboxClick:(UICheckbox *)sender
{
    UICheckbox *selCheckBox = sender;
    NSLog(@"Sender tag ----- %d", [selCheckBox tag]);
    
    if([selCheckBox tag] == 1)
    {
        if (_AccessPwdUnlockCheckbox.checked)
        {
            if(_AccessPwdPERMCheckbox.checked)
            {
                accessPwdString = [accessPwdArray objectAtIndex:2];
            }
            else
            {
                accessPwdString = [accessPwdArray objectAtIndex:0];
            }
        }
        else
        {
            accessPwdString = @"";
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[accessPwdArray objectAtIndex:0] withString:@""];
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[accessPwdArray objectAtIndex:2] withString:@""];
            applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            
        }

        [self fillCheckBox:_AccessPwdUnlockCheckbox withTag:[selCheckBox tag] andIsChecked:selCheckBox.checked from:accessPwdString andToggle:_AccessPwdRWLockCheckbox];
    }
    if([selCheckBox tag] == 3)
    {
        if (_AccessPwdRWLockCheckbox.checked)
        {
            if(_AccessPwdPERMCheckbox.checked)
            {
                accessPwdString = [accessPwdArray objectAtIndex:3];
            }
            else
            {
                accessPwdString = [accessPwdArray objectAtIndex:1];
            }
        }
        else
        {
            accessPwdString = @"";
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[accessPwdArray objectAtIndex:1] withString:@""];
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[accessPwdArray objectAtIndex:3] withString:@""];
            applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            
        }
        
        [self fillCheckBox:_AccessPwdRWLockCheckbox withTag:[selCheckBox tag] andIsChecked:selCheckBox.checked from:accessPwdString andToggle:_AccessPwdUnlockCheckbox];
    }
    if([selCheckBox tag] == 4)
    {
        
        if (_AccessPwdPERMCheckbox.checked)
        {
            if(_AccessPwdUnlockCheckbox.checked)
            {
                accessPwdString = [accessPwdArray objectAtIndex:2];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[accessPwdArray objectAtIndex:0] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else if(_AccessPwdRWLockCheckbox.checked)
            {
                accessPwdString = [accessPwdArray objectAtIndex:3];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[accessPwdArray objectAtIndex:1] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else
            {
                accessPwdString=@"";
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[accessPwdArray objectAtIndex:2] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[accessPwdArray objectAtIndex:3] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            
        }
        else
        {
            if(_AccessPwdUnlockCheckbox.checked)
            {
                accessPwdString = [accessPwdArray objectAtIndex:0];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[accessPwdArray objectAtIndex:2] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else if(_AccessPwdRWLockCheckbox.checked)
            {
                accessPwdString = [accessPwdArray objectAtIndex:1];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[accessPwdArray objectAtIndex:3] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else
            {
                accessPwdString=@"";
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[accessPwdArray objectAtIndex:0] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[accessPwdArray objectAtIndex:1] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[accessPwdArray objectAtIndex:2] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[accessPwdArray objectAtIndex:3] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
        }
        
        [self fillCheckBox:_AccessPwdPERMCheckbox withTag:[selCheckBox tag] andIsChecked:selCheckBox.checked from:accessPwdString andToggle:_AccessPwdPERMCheckbox];
        
    }

    
}

-(IBAction)killPwdCheckboxClick:(UICheckbox *)sender
{
    UICheckbox *selCheckBox = sender;
    NSLog(@"Sender tag ----- %d", [selCheckBox tag]);
    
    if([selCheckBox tag] == 1)
    {
        if (_KillPwdUnlockCheckbox.checked)
        {
            if(_KillPwdPERMCheckbox.checked)
            {
                killString = [killPwdArray objectAtIndex:2];
            }
            else
            {
                killString = [killPwdArray objectAtIndex:0];
            }
        }
        else
        {
            killString = @"";
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[killPwdArray objectAtIndex:0] withString:@""];
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[killPwdArray objectAtIndex:2] withString:@""];
            applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            
        }
        
        [self fillCheckBox:_KillPwdUnlockCheckbox withTag:[selCheckBox tag] andIsChecked:selCheckBox.checked from:killString andToggle:_KillPwdRWLockCheckbox];
        
    }
    if([selCheckBox tag] == 3)
    {
        
        if (_KillPwdRWLockCheckbox.checked)
        {
            if(_KillPwdPERMCheckbox.checked)
            {
                killString = [killPwdArray objectAtIndex:3];
            }
            else
            {
                killString = [killPwdArray objectAtIndex:1];
            }
        }
        else
        {
            killString = @"";
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[killPwdArray objectAtIndex:1] withString:@""];
            applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[killPwdArray objectAtIndex:3] withString:@""];
            applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            
        }
        
        [self fillCheckBox:_KillPwdRWLockCheckbox withTag:[selCheckBox tag] andIsChecked:selCheckBox.checked from:killString andToggle:_KillPwdUnlockCheckbox];
        
    }
    if([selCheckBox tag] == 4)
    {
        
        if (_KillPwdPERMCheckbox.checked)
        {
            if(_KillPwdUnlockCheckbox.checked)
            {
                killString = [killPwdArray objectAtIndex:2];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[killPwdArray objectAtIndex:0] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else if(_KillPwdRWLockCheckbox.checked)
            {
                killString = [accessPwdArray objectAtIndex:3];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[killPwdArray objectAtIndex:1] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else
            {
                killString=@"";
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[killPwdArray objectAtIndex:2] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[killPwdArray objectAtIndex:3] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            
        }
        else
        {
            if(_KillPwdUnlockCheckbox.checked)
            {
                killString = [killPwdArray objectAtIndex:0];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[killPwdArray objectAtIndex:2] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else if(_KillPwdRWLockCheckbox.checked)
            {
                killString = [killPwdArray objectAtIndex:1];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[killPwdArray objectAtIndex:3] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
            else
            {
                killString=@"";
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[killPwdArray objectAtIndex:0] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[killPwdArray objectAtIndex:1] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[killPwdArray objectAtIndex:2] withString:@""];
                applyLockString = [applyLockString stringByReplacingOccurrencesOfString:[killPwdArray objectAtIndex:3] withString:@""];
                applyLockString = [applyLockString stringByTrimmingCharactersInSet:[NSCharacterSet newlineCharacterSet]];
            }
        }
        
        [self fillCheckBox:_KillPwdPERMCheckbox withTag:[selCheckBox tag] andIsChecked:selCheckBox.checked from:killString andToggle:_KillPwdPERMCheckbox];
        
    }
    

}

-(void)fillCheckBox:(UICheckbox *)label withTag:(NSInteger)selTag andIsChecked:(BOOL)isChecked from:(NSString *)memory andToggle:(UICheckbox *)toggleLabel
{
    if(isChecked == YES)
    {
        toggleLabel.disabled = YES;
        label.disabled = NO;
    }
    else
    {
        toggleLabel.disabled = NO;
        label.disabled = NO;
    }
    
    if([memory length] > 0)
    {
        memory = [memory stringByAppendingString:newLineString];
        applyLockString = [applyLockString stringByAppendingString:memory];
    }
    

    _lblApplyLocks.text = applyLockString;

}


-(IBAction)apply:(UIButton *)sender
{
    
    if ([accessPwdString length] > 0)
    {
        if(_userMemoryPERMCheckbox)
        {
            
            //User Memory Operations
            if(!(_userMemoryUnlockCheckbox.checked) && !(_userMemoryLockCheckbox.checked))
            {
                [self displayAlert:nil];
            }
            else if(_userMemoryUnlockCheckbox.checked)
            {
                [self unlockMemory:USER_MEMORY unLockBit:TMR_GEN2_LOCK_BITS_USER_PERM];
            }
            else if(_userMemoryLockCheckbox.checked)
            {
                [self lockMemory:USER_MEMORY lockBit:TMR_GEN2_LOCK_BITS_USER_PERM];
            }
        }
        else if(_userMemoryUnlockCheckbox.checked)
        {
            [self unlockMemory:USER_MEMORY unLockBit:TMR_GEN2_LOCK_BITS_USER];
        }
        else if(_userMemoryRWLockCheckbox.checked)
        {
            [self lockMemory:USER_MEMORY lockBit:TMR_GEN2_LOCK_BITS_USER];
        }
        
        //EPC Memory Operations
        if(_EPCPERMCheckbox)
        {
            if(!(_EPCUnlockCheckbox.checked) && !(_EPCLockCheckbox.checked))
            {
                [self displayAlert:nil];
            }
            else if(_EPCUnlockCheckbox.checked)
            {
                [self unlockMemory:USER_MEMORY unLockBit:TMR_GEN2_LOCK_BITS_EPC_PERM];
            }
            else if(_EPCLockCheckbox.checked)
            {
                [self lockMemory:USER_MEMORY lockBit:TMR_GEN2_LOCK_BITS_EPC_PERM];
            }
        }
        else if(_EPCUnlockCheckbox.checked)
        {
            [self unlockMemory:EPC_MEMORY unLockBit:TMR_GEN2_LOCK_BITS_EPC];
        }
        else if(_EPCLockCheckbox.checked)
        {
            [self lockMemory:EPC_MEMORY lockBit:TMR_GEN2_LOCK_BITS_EPC];
        }
        
        //Access Password
        if(_AccessPwdPERMCheckbox)
        {
            if(!(_AccessPwdUnlockCheckbox.checked) && !(_AccessPwdRWLockCheckbox.checked))
            {
                [self displayAlert:nil];
            }
            else if(_AccessPwdUnlockCheckbox.checked)
            {
                [self unlockMemory:ACCESS_PASSWORD unLockBit:TMR_GEN2_LOCK_BITS_ACCESS_PERM];
            }
            else if(_AccessPwdRWLockCheckbox.checked)
            {
                [self lockMemory:ACCESS_PASSWORD lockBit:TMR_GEN2_LOCK_BITS_ACCESS_PERM];
            }
            
        }
        else if(_AccessPwdUnlockCheckbox.checked)
        {
            [self unlockMemory:ACCESS_PASSWORD unLockBit:TMR_GEN2_LOCK_BITS_ACCESS];
        }
        else if(_AccessPwdRWLockCheckbox.checked)
        {
            [self lockMemory:ACCESS_PASSWORD lockBit:TMR_GEN2_LOCK_BITS_ACCESS];
        }
        
        //Kill Password
        if(_KillPwdPERMCheckbox)
        {
            if(!(_KillPwdUnlockCheckbox.checked) && !(_KillPwdRWLockCheckbox.checked))
            {
                [self displayAlert:nil];
            }
            else if(_KillPwdUnlockCheckbox.checked)
            {
                [self unlockMemory:KILL_PASSWORD unLockBit:TMR_GEN2_LOCK_BITS_KILL_PERM];
            }
            else if(_KillPwdRWLockCheckbox.checked)
            {
                [self lockMemory:KILL_PASSWORD lockBit:TMR_GEN2_LOCK_BITS_KILL_PERM];
            }
            
        }
        else if(_AccessPwdUnlockCheckbox.checked)
        {
            [self unlockMemory:KILL_PASSWORD unLockBit:TMR_GEN2_LOCK_BITS_KILL];
        }
        else if(_AccessPwdRWLockCheckbox.checked)
        {
            [self lockMemory:KILL_PASSWORD lockBit:TMR_GEN2_LOCK_BITS_KILL];
        }

    }
    else
    {
        [self displayAlert:@"Please Enter Access Password"];
    }
    

}

-(void)unlockMemory:(int)memoryBank unLockBit:(int)lockBit
{
    [self.view endEditing:YES];
    
    [HUD show:YES];
    
    dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        
        TMR_TagFilter filter;
        TMR_TagData lockEpc;
        TMR_TagOp newtagop;
        TMR_TagOp *op = &newtagop;
        TMR_Status ret;
        TMR_GEN2_Password accessPassword;
        uint32_t epcByteCount;
        
        ret = TMR_hexToBytes([recEPCString cStringUsingEncoding:NSUTF8StringEncoding],lockEpc.epc,TMR_MAX_EPC_BYTE_COUNT,&epcByteCount);
        if (TMR_SUCCESS != ret)
            NSLog(@"TMR_read Status for TMR_hexToBytes :%s", TMR_strerr(rp, ret));
        
        lockEpc.epcByteCount = epcByteCount;
        lockEpc.protocol = TMR_TAG_PROTOCOL_GEN2;
        
        NSLog(@"*** EPC DATA****** ");
        
        ret = TMR_TF_init_tag(&filter, &lockEpc);
        if (TMR_SUCCESS != ret)
            NSLog(@"TMR_read Status for INiT Tag:%s", TMR_strerr(rp, ret));
        
        NSLog(@"*** EPC DATA 1****** ");
        
        uint8_t buf[512];
        TMR_uint8List tmp_buf;
        tmp_buf.max = 512;
        tmp_buf.len = 0;
        tmp_buf.list  = buf;
        
        NSLog(@"*** EPC DATA 2****** ");
        
        ret = TMR_TagOp_init_GEN2_ReadData(op, memoryBank, 2, 2);
        if (TMR_SUCCESS != ret)
            NSLog(@"*** ERROR:TMR_read Status for TMR_TagOp_init_GEN2_ReadData:%s", TMR_strerr(rp, ret));
        
        NSLog(@"*** EPC DATA 3****** ");
        
        ret= TMR_executeTagOp(rp,op, &filter, &tmp_buf);
        if (TMR_SUCCESS != ret)
            NSLog(@"*** ERROR:TMR_read Status for Lock Execution Operation TMR_GEN2_BANK_RESERVED:%s", TMR_strerr(rp, ret));
        
        NSLog(@"*** EPC DATA 4****** ");
       // NSMutableString *stringBuffer = [[NSMutableString alloc] init];
        
        /*
         for(int i =0; i <buf2.len; i++ )
         {
         NSLog(@"%x",buf2.list[i]);
         [stringBuffer appendFormat:@"%x", buf2.list[i]];
         }
         */
        accessPassword = [self hexValue:accessPwdString];
        
        NSLog(@"******** Access Password in Hex -- %x", accessPassword);
        
        ret = TMR_TagOp_init_GEN2_Lock(op, lockBit, 0, accessPassword);
        if (TMR_SUCCESS != ret)
            NSLog(@"*** ERROR: TMR_read Status for init_GEN2_Lock:%s", TMR_strerr(rp, ret));
        
        NSLog(@"*** EPC DATA 5****** ");
        
        ret= TMR_executeTagOp(rp,op, &filter, NULL);
        if (TMR_SUCCESS != ret)
        {
            NSLog(@"TMR_read Status for Lock Execution Operation:%s", TMR_strerr(rp, ret));
            alertString = [NSString stringWithFormat:@"%s",TMR_strerr(rp, ret)];
        }
        else
        {
            NSLog(@"UNLOCK SUCCESS");
            alertString = @"UNLOCK SUCCESS";
        }
        
        NSLog(@"*** EPC DATA 6****** ");
        
        [[NSNotificationCenter defaultCenter] postNotificationName:@"NowStopHUDLock"  object:self];
        
    });
}

-(void)lockMemory:(int)memoryBank lockBit:(int)lockBit
{
    [self.view endEditing:YES];
    
    [HUD show:YES];
    
    dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        
        TMR_TagFilter filter;
        TMR_TagData lockEpc;
        TMR_TagOp newtagop;
        TMR_TagOp *op = &newtagop;
        TMR_Status ret;
        TMR_GEN2_Password accessPassword;
        uint32_t epcByteCount;
        
        ret = TMR_hexToBytes([recEPCString cStringUsingEncoding:NSUTF8StringEncoding],lockEpc.epc,TMR_MAX_EPC_BYTE_COUNT,&epcByteCount);
        if (TMR_SUCCESS != ret)
            NSLog(@"TMR_read Status for TMR_hexToBytes :%s", TMR_strerr(rp, ret));
        
        lockEpc.epcByteCount = epcByteCount;
        lockEpc.protocol = TMR_TAG_PROTOCOL_GEN2;
        
        NSLog(@"*** EPC DATA****** ");
        
        ret = TMR_TF_init_tag(&filter, &lockEpc);
        if (TMR_SUCCESS != ret)
            NSLog(@"TMR_read Status for INiT Tag:%s", TMR_strerr(rp, ret));
        
        NSLog(@"*** EPC DATA 1****** ");
        
        uint8_t buf[512];
        TMR_uint8List tmp_buf;
        tmp_buf.max = 512;
        tmp_buf.len = 0;
        tmp_buf.list  = buf;
        
        NSLog(@"*** EPC DATA 2****** ");
        
        ret = TMR_TagOp_init_GEN2_ReadData(op, memoryBank, 2, 2);
        if (TMR_SUCCESS != ret)
            NSLog(@"*** ERROR:TMR_read Status for TMR_TagOp_init_GEN2_ReadData:%s", TMR_strerr(rp, ret));
        
        NSLog(@"*** EPC DATA 3****** ");
        
        ret= TMR_executeTagOp(rp,op, &filter, &tmp_buf);
        if (TMR_SUCCESS != ret)
            NSLog(@"*** ERROR:TMR_read Status for Lock Execution Operation TMR_GEN2_BANK_RESERVED:%s", TMR_strerr(rp, ret));
        
        NSLog(@"*** EPC DATA 4****** ");
        // NSMutableString *stringBuffer = [[NSMutableString alloc] init];
        
        /*
         for(int i =0; i <buf2.len; i++ )
         {
         NSLog(@"%x",buf2.list[i]);
         [stringBuffer appendFormat:@"%x", buf2.list[i]];
         }
         */
        accessPassword = [self hexValue:accessPwdString];
        
        NSLog(@"******** Access Password in Hex -- %x", accessPassword);
        
        ret = TMR_TagOp_init_GEN2_Lock(op, lockBit, lockBit, accessPassword);
        if (TMR_SUCCESS != ret)
            NSLog(@"*** ERROR: TMR_read Status for init_GEN2_Lock:%s", TMR_strerr(rp, ret));
        
        NSLog(@"*** EPC DATA 5****** ");
        
        ret= TMR_executeTagOp(rp,op, &filter, NULL);
        if (TMR_SUCCESS != ret)
        {
            NSLog(@"TMR_read Status for Lock Execution Operation:%s", TMR_strerr(rp, ret));
            alertString = [NSString stringWithFormat:@"%s",TMR_strerr(rp, ret)];
        }
        else
        {
            NSLog(@"LOCK SUCCESS");
            alertString = @"LOCK SUCCESS";
        }
        
        NSLog(@"*** EPC DATA 6****** ");
        
        [[NSNotificationCenter defaultCenter] postNotificationName:@"NowStopHUDLock"  object:self];
        
    });

}

-(void) displayAlert:(NSString *)alertStringToDisplay
{
    
    if ([alertStringToDisplay length] <= 0) {
        alertStringToDisplay = @"Please select atleast one lock action to perform";
    }
    UIAlertController *alertController = [UIAlertController
                                          alertControllerWithTitle:@"Message"
                                          message:alertStringToDisplay
                                          preferredStyle:UIAlertControllerStyleAlert];
    
    UIAlertAction *okAction = [UIAlertAction
                               actionWithTitle:NSLocalizedString(@"OK", @"OK action")
                               style:UIAlertActionStyleDefault
                               handler:^(UIAlertAction *action)
                               {
                                   NSLog(@"OK action");
                               }];
    
    [alertController addAction:okAction];
    
    [self presentViewController:alertController animated:YES completion:nil];
}



@end
