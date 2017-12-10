//
//  ReadResultTableViewCell.m
//  URMA
//
//  Created by Raju on 25/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import "ReadResultTableViewCell.h"
#import "Global.h"
#import "JKBigInteger.h"
#import "ExpandViewController.h"


@implementation ReadResultTableViewCell
{
    NSString *_orginalEPC;
    NSString *_writeEPCString;
    BOOL isHex;
    BOOL isASCII;
    NSInteger selSegment;
}



@synthesize theDelegate;
@synthesize rp,r;


- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
       
    }
    
    return self;
}


//- (void)setDelegate:(id <ReadResultTableViewCellDelegate>)aDelegate {
//    if (theDelegate != aDelegate) {
//        theDelegate = aDelegate;
//        
//    }
//}

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
        
    self.epcInfoTextFiled.delegate = self;
    self.epcWriteTextFiled.delegate = self;
    self.epcLockTextFiled.delegate = self;
    
    //Default Segment 0 is selected
     [self.segmentedControl setTitleTextAttributes:@{NSForegroundColorAttributeName : [UIColor blackColor]} forState:UIControlStateSelected];
    
     [self.segmentedControl setTitleTextAttributes:@{NSForegroundColorAttributeName : [UIColor grayColor]} forState:UIControlStateNormal];
    
    self.segmentedControl.selectedSegmentIndex = 0;
    self.segmentContainerWriteEPCView.hidden = YES;
    self.segmentContainerInspectView.hidden = YES;
    self.segmentContainerLockView.hidden = YES;
    self.segmentContainerUserMemoryView.hidden = YES;
    


    isHex = TRUE;
    isASCII = FALSE;
    [self infoContainer];
}

-(void) loadreadResultTableViewCell:(NSString*)_epclblTxt date:(NSString*)_date  rssi:(NSInteger)_rssi readcout:(NSInteger)_radcoun antenaa:(NSInteger)_antenaa phase:(NSString *)_phase frequency:(NSString *)_frequenct protocal:(NSString *)_protocal serviceType:(NSInteger) _serviceType{
    
    self.lblTxtOne.hidden = NO;
    self.lblTxtTwo.hidden = NO;
    self.lblTxtThree.hidden = NO;
    self.lblTxtFour.hidden = NO;
    self.lblTxtFive.hidden = NO;
    self.lblTxtSix.hidden = NO;
    self.datelblTxt.hidden = NO;
    self.collapseView.hidden = NO;
    
    self.backgroundColor  = [UIColor whiteColor];
 
    
    self.serviceType.text = [NSString stringWithFormat:@"%d",_serviceType];
    self.epclblTxt.text = _epclblTxt;
    self.datelblTxt.text = _date;
    self.lblTxtOne.text = [NSString stringWithFormat:@"RSSI: %d",_rssi];
    self.lblTxtTwo.text = [NSString stringWithFormat:@"ReadCount: %d",_radcoun];
    self.lblTxtThree.text = [NSString stringWithFormat:@"Antenna: %d",_antenaa];
    self.lblTxtFour.text = [NSString stringWithFormat:@"Phase: %@",_phase];
    self.lblTxtFive.text = [NSString stringWithFormat:@"Frequency: %@",_frequenct];
    self.lblTxtSix.text = [NSString stringWithFormat:@"Protocol: %@",_protocal];
}

-(void) loadreadResultExpandTableViewCell:(NSString*)_epclblTxt date:(NSString*)_date  rssi:(NSInteger)_rssi readcout:(NSInteger)_radcoun antenaa:(NSInteger)_antenaa phase:(NSString *)_phase frequency:(NSString *)_frequenct protocal:(NSString *)_protocal serviceType:(NSInteger) _serviceType originalEPC:(NSString *)originalEPC rp:(TMR_Reader *)rp
{
    
   // self.userInteractionEnabled = NO;
    [self bringSubviewToFront:self.segmentView];
    
    self.lblTxtOne.hidden = YES;
    self.lblTxtTwo.hidden = YES;
    self.lblTxtThree.hidden = YES;
    self.lblTxtFour.hidden = YES;
    self.lblTxtFive.hidden = YES;
    self.lblTxtSix.hidden = YES;
    self.datelblTxt.hidden = YES;
    self.collapseView.hidden = YES;
    
    self.backgroundColor  = [UIColor colorWithRed:236.0/255.0 green:236.0/255.0 blue:236.0/255.0 alpha:1];
    
    _orginalEPC = originalEPC;
    self.infoEPCLabel.text =[NSString stringWithFormat:@"EPC:%@", _orginalEPC];

    self.epcWriteTextFiled.text = @"";
    self.writeEPCGroup.selected = YES;
    
//    self.serviceType.text = [NSString stringWithFormat:@"%d",_serviceType];
//    self.epclblTxt.text = _epclblTxt;
    self.datelblTxtExpand.text = _date;
    self.lblTxtOneExpand.text = [NSString stringWithFormat:@"RSSI: %d",_rssi];
    self.lblTxtTwoExpand.text = [NSString stringWithFormat:@"ReadCount: %d",_radcoun];
    self.lblTxtThreeExpand.text = [NSString stringWithFormat:@"Antenna: %d",_antenaa];
    self.lblTxtFourExpand.text = [NSString stringWithFormat:@"Phase: %@",_phase];
    self.lblTxtFiveExpand.text = [NSString stringWithFormat:@"Frequency: %@",_frequenct];
    self.lblTxtSixExpand.text = [NSString stringWithFormat:@"Protocol: %@",_protocal];
    
}

-(IBAction)segmentIndexChanged:(UISegmentedControl *)sender
{
    UISegmentedControl * segControl = (UISegmentedControl *)sender;

    switch (segControl.selectedSegmentIndex)
    {
        case 0:
        {
            self.segmentContainerWriteEPCView.hidden = YES;
            self.segmentContainerInspectView.hidden = YES;
            self.segmentContainerLockView.hidden = YES;
            //self.expandButton.selected = NO;
            [self infoContainer];
        }
            break;
        case 1:
        {
            self.segmentContainerInfoView.hidden = YES;
            self.segmentContainerInspectView.hidden = YES;
            self.segmentContainerLockView.hidden = YES;
            self.segmentContainerUserMemoryView.hidden = YES;
           // self.expandButton.selected = NO;
            self.segmentContainerWriteEPCView.userInteractionEnabled = YES;
            [self writeEPCContainer];
        }
            break;
        case 2:
        {
        
            self.segmentContainerInfoView.hidden = YES;
            self.segmentContainerWriteEPCView.hidden = YES;
            self.segmentContainerLockView.hidden = YES;
            self.segmentContainerUserMemoryView.hidden = YES;
            //self.expandButton.selected = YES;
            self.expandButton.tag = 1;
            selSegment = 0;
            [self inspectContainer];
             
        
        }
            break;
        case 3:
        {
            self.segmentContainerInfoView.hidden = YES;
            self.segmentContainerWriteEPCView.hidden = YES;
            self.segmentContainerInspectView.hidden = YES;
            self.segmentContainerUserMemoryView.hidden = YES;
            //self.expandButton.selected = YES;
            self.expandButton.tag = 2;
            selSegment = 1;
            [self lockContainer];
        }
            break;
        case 4:
        {
            self.segmentContainerInfoView.hidden = YES;
            self.segmentContainerWriteEPCView.hidden = YES;
            self.segmentContainerInspectView.hidden = YES;
            self.segmentContainerLockView.hidden = YES;
            //self.expandButton.selected = YES;
            self.expandButton.tag = 3;
            selSegment = 2;
            [self userMemoryContainer];
        }
            break;
        default:
            break; 
    } 
}

-(void)infoContainer
{
    
    
    self.segmentContainerInfoView.hidden = NO;
    
    self.infoEPCLabel.text =[NSString stringWithFormat:@"EPC:%@", _orginalEPC];
    
    NSString *editedEPCString= [self getFromUserDefaults:[self.epclblTxt.text lowercaseString]];
    
    if([editedEPCString length] > 0 && ![editedEPCString isEqualToString:self.epclblTxt.text])
    {
        [self.epcInfoTextFiled setText:editedEPCString];
    }

}

-(void)writeEPCContainer
{
    self.segmentContainerWriteEPCView.hidden = NO;
   // [self createRadioButtonList];
}

-(void) inspectContainer
{
    self.segmentContainerInspectView.hidden = NO;

}

-(void) lockContainer
{
    self.segmentContainerLockView.hidden = NO;

}

-(void) userMemoryContainer
{
    self.segmentContainerUserMemoryView.hidden = NO;

    
}

-(void)saveToUserDefaults:(NSString*)epcString andEPCValue:(NSString *)epcKey
{
    NSUserDefaults *standardUserDefaults = [NSUserDefaults standardUserDefaults];
    if (standardUserDefaults)
    {
        [standardUserDefaults setObject:epcString forKey:[_orginalEPC lowercaseString]];
        [standardUserDefaults synchronize];
    }
    
    
}

-(NSString *)getFromUserDefaults:(NSString *)epcKey
{
    NSUserDefaults *standardUserDefaults = [NSUserDefaults standardUserDefaults];
    
    return [standardUserDefaults objectForKey:epcKey];
}

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event{
    NSLog(@"touchesBegan:withEvent:");
    //[self endEditing:YES];
    
    [super touchesBegan:touches withEvent:event];
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldReceiveTouch:(UITouch *)touch
{
    if ([touch.view isDescendantOfView:self.segmentContainerWriteEPCView])
    {
        return YES;
    }
    return NO;
}

- (void)textFieldDidBeginEditing:(UITextField *)textField
{
    
    if(textField == self.epcInfoTextFiled)
    {
        self.saveEPCButton.selected = YES;
    }
    else  if(textField == self.epcWriteTextFiled)
    {
        self.saveWriteEPCButton.selected = YES;
    }
    else  if(textField == self.epcLockTextFiled)
    {
        self.saveLockButton.selected = YES;
    }
}

- (BOOL)textFieldShouldEndEditing:(UITextField *)textField{
    NSLog(@"textFieldShouldEndEditing");
    return YES;
}

- (void)textFieldDidEndEditing:(UITextField *)textField{
    NSLog(@"textFieldDidEndEditing");
    
    if(textField == self.epcInfoTextFiled)
    {
        self.saveEPCButton.selected = NO;
    }
    else  if(textField == self.epcWriteTextFiled)
    {
        self.saveWriteEPCButton.selected = NO;
    
    }
    else  if(textField == self.epcLockTextFiled)
    {
        self.saveLockButton.selected = NO;
    }
   
}

- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string
{
  
    // This will be the character set of characters I do not want in my text field.  Then if the replacement string contains any of the characters, return NO so that the text does not change.
    NSCharacterSet *unacceptedInput = nil;
    
    if(textField == self.epcWriteTextFiled)
    {
        if(isHex)
        {
            NSLog(@"*** Hex Selected. Only Hex text");
            unacceptedInput = [[NSCharacterSet characterSetWithCharactersInString:@"0123456789ABCDEFabcdef"] invertedSet];
        }
        else if(isASCII)
        {
            
            NSLog(@"*** ASCII Selected. Only ASCII text");
            unacceptedInput = [[NSCharacterSet characterSetWithRange:NSMakeRange(0, 128)] invertedSet];
        }
        else
        {
            unacceptedInput = [[NSCharacterSet characterSetWithCharactersInString:@"0123456789abcdefghijklmnopqrstuvwxyz"] invertedSet];
        }
        
        return ([[string componentsSeparatedByCharactersInSet:unacceptedInput] count] <= 1);

    }
    
    return YES;
    
}


-(IBAction)saveEPCClicked:(UIButton *)sender
{
    
    [self endEditing:YES];
    if([self.epcInfoTextFiled.text length] > 0 )
    {
        [self saveToUserDefaults:self.epcInfoTextFiled.text andEPCValue:_orginalEPC];
        self.epclblTxt.text = self.epcInfoTextFiled.text;
    }
    else
    {
            self.epclblTxt.text = _orginalEPC;
    }
}

-(IBAction)saveWriteEPCClicked:(UIButton *)sender
{
    
    [self endEditing:YES];
    __block NSString *alertMessage;
    
    if (theDelegate && [theDelegate respondsToSelector:@selector(didPressButton:)])
    {
        [theDelegate didPressButton:self];
    }

    
    /* Write Tag EPC with a select filter*/
        
    if([_writeEPCString length] > 0)
    {
        dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0),
                       ^{
                           
                           TMR_TagFilter filter;
                           TMR_TagData oldEpc;
                           TMR_TagData newEpc;
                            TMR_TagOp tagop;
                           TMR_TagOp *newtagop = &tagop;
                           TMR_Status ret;
                           uint32_t epcByteCountOld = 0;
                           
                        
                           NSLog(@" Entred String -- %@",self.epcWriteTextFiled.text);
                           
                           /*

                           if(isHex)
                           {
                               _writeEPCString = self.epcWriteTextFiled.text;
                           }
                           else if(isASCII)
                           {
                                _writeEPCString = [self ASCIItoHex:self.epcWriteTextFiled.text];
                                NSLog(@"******** SRK ASCII String %@", _writeEPCString);
                           }
                           else
                           {
                              _writeEPCString =  [self reversebase36ToHex:self.epcWriteTextFiled.text];
                               NSLog(@"******** SRK Base36 String %@", _writeEPCString);
                           }
                            */
                           
        
                            ret = TMR_hexToBytes([_writeEPCString cStringUsingEncoding:NSUTF8StringEncoding],newEpc.epc,TMR_MAX_EPC_BYTE_COUNT,&epcByteCountOld);
                           
                           if (TMR_SUCCESS != ret)
                               NSLog(@"TMR_read Status for TMR_hexToBytes :%s", TMR_strerr(rp, ret));
                           
                           newEpc.epcByteCount = epcByteCountOld;
                           newEpc.protocol = TMR_TAG_PROTOCOL_GEN2;
                           
                           for (int i =0; i < epcByteCountOld; i++) {
                               NSLog(@"*** SRK newEpc.epc  -- %x",newEpc.epc[i]);
                           }
                    
                            /* Initialize the new tagop to write the new epc*/
                            ret = TMR_TagOp_init_GEN2_WriteTag(newtagop, &newEpc);
                            if (TMR_SUCCESS != ret)
                                NSLog(@"TMR_read Status for New EPC:%d", ret);
                            
                            /* Original EPC */
                            ret = TMR_hexToBytes([_orginalEPC cStringUsingEncoding:NSUTF8StringEncoding],oldEpc.epc,TMR_MAX_EPC_BYTE_COUNT,&epcByteCountOld);
                            
                            if (TMR_SUCCESS != ret)
                                NSLog(@"TMR_read Status for TMR_hexToBytes :%s", TMR_strerr(rp, ret));
                            
                            oldEpc.epcByteCount = epcByteCountOld;
                            oldEpc.protocol = TMR_TAG_PROTOCOL_GEN2;
                        
                            /* Initialize the filter with the original epc of the tag which is set earlier*/
                            ret = TMR_TF_init_tag(&filter, &oldEpc);
                            if (TMR_SUCCESS != ret)
                                NSLog(@"TMR_read Status for old EPC:%s", TMR_strerr(rp, ret));
                            
                            /* Execute the tag operation Gen2 writeTag with select filter applied*/
                            ret = TMR_executeTagOp(rp, newtagop, &filter, NULL);
                            if (TMR_SUCCESS != ret)
                            {
                                NSLog(@"TMR_read Status for execution tag operation:%s", TMR_strerr(rp, ret));
                                alertMessage  =[NSString stringWithFormat:@"%s",TMR_strerr(rp, ret)];
                            }
                            else
                            {
                               alertMessage  = @"Write Success";
                                
                                NSString *currentString = [self getFromUserDefaults:[_orginalEPC lowercaseString]];
                                if([currentString length] > 0)
                                {
                                     NSUserDefaults *standardUserDefaults = [NSUserDefaults standardUserDefaults];
                                    [standardUserDefaults removeObjectForKey:_orginalEPC];
                                    _orginalEPC = [_writeEPCString lowercaseString];
                                    [self saveToUserDefaults:currentString andEPCValue:[_writeEPCString lowercaseString]];
                                    
                                }
                            }
                           
                           if (theDelegate && [theDelegate respondsToSelector:@selector(saveCompleted:andResonposeString:andTitle:)])
                           {
                               NSLog(@"****** SRK SAVE DONE ******");
                               [theDelegate saveCompleted:self andResonposeString:alertMessage andTitle:@"Write EPC"];
                           }
                });
        
    }
    
}

-(IBAction)saveLockClicked:(UIButton *)sender
{
    __block NSString *alertMessage;
    [self endEditing:YES];
    
    if (theDelegate && [theDelegate respondsToSelector:@selector(didPressButton:)])
    {
        [theDelegate didPressButton:self];
    }
    
       dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{

        TMR_TagFilter filter;
        TMR_TagData lockEpc;
        TMR_TagOp newtagop;
        TMR_TagOp *op = &newtagop;
        TMR_Status ret;
        TMR_GEN2_Password accessPassword;
        uint32_t epcByteCount;
        
        ret = TMR_hexToBytes([self.epclblTxt.text cStringUsingEncoding:NSUTF8StringEncoding],lockEpc.epc,TMR_MAX_EPC_BYTE_COUNT,&epcByteCount);
        if (TMR_SUCCESS != ret)
            NSLog(@"TMR_read Status for TMR_hexToBytes :%s", TMR_strerr(rp, ret));

        lockEpc.epcByteCount = epcByteCount;
        lockEpc.protocol = TMR_TAG_PROTOCOL_GEN2;
        
        NSLog(@"*** EPC DATA****** ");

        ret = TMR_TF_init_tag(&filter, &lockEpc);
        if (TMR_SUCCESS != ret)
            NSLog(@"TMR_read Status for INiT Tag:%s", TMR_strerr(rp, ret));

        
        uint8_t buf[20];
        TMR_uint8List buf2;
        buf2.len = 20;
        buf2.list  = buf;
        
         ret = TMR_TagOp_init_GEN2_ReadData(op, TMR_GEN2_BANK_RESERVED, 2, 2);
        if (TMR_SUCCESS != ret)
            NSLog(@"*** ERROR:TMR_read Status for TMR_TagOp_init_GEN2_ReadData:%s", TMR_strerr(rp, ret));
        

        ret= TMR_executeTagOp(rp,op, &filter, &buf2);
        if (TMR_SUCCESS != ret)
            NSLog(@"*** ERROR:TMR_read Status for Lock Execution Operation TMR_GEN2_BANK_RESERVED:%s", TMR_strerr(rp, ret));
        
          NSMutableString *stringBuffer = [[NSMutableString alloc] init];
        
        for(int i =0; i <buf2.len; i++ )
        {
            NSLog(@"%x",buf2.list[i]);
            [stringBuffer appendFormat:@"%x", buf2.list[i]];
        }
        accessPassword = [self hexValue:self.epcLockTextFiled.text];
        
        //self.lockLabel.text = [NSString stringWithFormat:@"%d",accessPassword];
        
        NSLog(@"******** Access Password in Hex -- %x", accessPassword);
    
        ret = TMR_TagOp_init_GEN2_Lock(op, TMR_GEN2_LOCK_BITS_EPC, TMR_GEN2_LOCK_BITS_EPC, accessPassword);
        if (TMR_SUCCESS != ret)
            NSLog(@"*** ERROR: TMR_read Status for init_GEN2_Lock:%s", TMR_strerr(rp, ret));
        
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
            //self.lockLabel.text = [NSString stringWithFormat:@"%s",TMR_strerr(rp, ret)];
            alertMessage = [NSString stringWithFormat:@"%s",TMR_strerr(rp, ret)];
        }
        else
        {
            NSLog(@"LOCK SUCCESS");
            alertMessage = @"LOCK SUCCESS";
            //self.lockLabel.text = alertMessage;
        }
           
           if (theDelegate && [theDelegate respondsToSelector:@selector(saveCompleted:andResonposeString:andTitle:)])
           {
               [theDelegate saveCompleted:self andResonposeString:alertMessage andTitle:@"Lock EPC"];
           }
    });
    
}

- (int) hexValue:(NSString *)myString
{
    int n = 0;
    sscanf([myString UTF8String], "%x", &n);
    return n;
}

- (NSString *) StringToHex:(NSString *)myString
{
    int strLength = [myString length];
    
    //alloc(full length of string bytes)
    unichar *AllChars = malloc(strLength * sizeof(unichar)); // or (strLength*2)
    
    //Copy characters from NSString to unichar array ...
    [myString getCharacters:AllChars];
    //MutableString as result
    NSMutableString *hexResult = [[NSMutableString alloc] init];
    
    for(int i = 0; i < strLength; i++ )
    {
        [hexResult appendFormat:@"%02x", AllChars[i]];
    }
    free(AllChars); // Very important
    return hexResult; //returnd value
}

-(NSString *)ASCIItoHex:(NSString *)myString
{
    NSLog(@"*****  ASCII input string -- %@", myString);
    
    const char *s = [myString cStringUsingEncoding:NSASCIIStringEncoding];
    size_t len = strlen(s);
    
    NSMutableString *asciiCodes = [NSMutableString string];
    for (int i = 0; i < len; i++) {
        [asciiCodes appendFormat:@"%x", (int)s[i]];
    }
    
    NSLog(@"***** ASCII to Hex -- %@", asciiCodes);

    return asciiCodes;

}

- (NSString *)reversebase36ToHex:(NSString *)myString
{
    
    NSMutableString *reversedString = [NSMutableString stringWithCapacity:[myString length]];
    
    [myString enumerateSubstringsInRange:NSMakeRange(0,[myString length])
                                 options:(NSStringEnumerationReverse | NSStringEnumerationByComposedCharacterSequences)
                              usingBlock:^(NSString *substring, NSRange substringRange, NSRange enclosingRange, BOOL *stop) {
                                  [reversedString appendString:substring];
                              }];
    JKBigInteger *base36String = [[JKBigInteger alloc] initWithString:[reversedString uppercaseString] andRadix:36];
    return [base36String stringValueWithRadix:16];
}

-(IBAction)cancelClicked:(UIButton *)sender
{
    
}

-(IBAction)expandClicked:(UIButton *)sender
{
  
    if (theDelegate && [theDelegate respondsToSelector:@selector(expandTableIndex:)])
    {
        [theDelegate expandTableIndex:selSegment];
    }
}

- (void)createRadioButtonList {
    TNCircularRadioButtonData *hexData = [TNCircularRadioButtonData new];
    hexData.labelText = @"Hex";
    hexData.labelFont = font_Normal_16;
    hexData.labelColor = [UIColor darkGrayColor];
    hexData.identifier = @"Hex";
    hexData.selected =YES;
    hexData.borderColor = [UIColor darkGrayColor];
    hexData.circleColor = [UIColor darkGrayColor];
    
    
    TNCircularRadioButtonData *ASCIIData = [TNCircularRadioButtonData new];
    ASCIIData.labelText = @"ASCII";
    ASCIIData.labelFont = font_Normal_16;
    ASCIIData.labelColor = [UIColor darkGrayColor];
    ASCIIData.identifier = @"ASCII";
    ASCIIData.selected = NO;
    ASCIIData.borderColor = [UIColor darkGrayColor];
    ASCIIData.circleColor = [UIColor darkGrayColor];
    ASCIIData.borderRadius = 12;
    ASCIIData.circleRadius = 5;
    
    TNCircularRadioButtonData *RB36Data = [TNCircularRadioButtonData new];
    RB36Data.labelText = @"RB36";
    RB36Data.labelFont = font_Normal_16;
    RB36Data.labelColor = [UIColor darkGrayColor];
    RB36Data.identifier = @"RB36";
    RB36Data.selected = NO;
    RB36Data.borderColor = [UIColor darkGrayColor];
    RB36Data.circleColor = [UIColor darkGrayColor];
    RB36Data.borderRadius = 12;
    RB36Data.circleRadius = 5;
    
    self.epcGroup = [[TNRadioButtonGroup alloc] initWithRadioButtonData:@[hexData, ASCIIData, RB36Data] layout:TNRadioButtonGroupLayoutHorizontal];
    self.epcGroup.identifier = @"EPC group";
    [self.epcGroup create];
    self.epcGroup.position = CGPointMake(25, 60);
    [self.segmentContainerWriteEPCView addSubview:self.epcGroup];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(epcGroupUpdated:) name:SELECTED_RADIO_BUTTON_CHANGED object:self.epcGroup];
        
    [self.epcGroup update];
    
}

- (void)epcGroupUpdated:(NSNotification *)notification {
    NSLog(@"EPC group updated to %@", self.epcGroup.selectedRadioButton.data.identifier);
   // self.epcWriteTextFiled.text = self.epcGroup.selectedRadioButton.data.identifier;
    
    if([self.epcGroup.selectedRadioButton.data.identifier containsString:@"Hex"])
    {
        NSLog(@"*** Hex Selected");
        isHex = TRUE;
        isASCII = FALSE;
        //_writeEPCString = self.epcWriteTextFiled.text;
       // self.epcWriteTextFiled.text = @"";
    }
    else if([self.epcGroup.selectedRadioButton.data.identifier containsString:@"ASCII"])
    {
        NSLog(@"*** ASCII Selected");
        isHex = FALSE;
        isASCII = TRUE;
        //self.epcWriteTextFiled.text = @"";
        
    }
    else
    {
        isHex = FALSE;
        isASCII = FALSE;
        //self.epcWriteTextFiled.text = @"";
    }
}


- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];
}

-(IBAction)onRadioBtn:(RadioButton*)sender
{
    NSLog(@"********** RADIO ***%@",[NSString stringWithFormat:@"Selected: %@", sender.titleLabel.text]);
    
    if([sender.titleLabel.text containsString:@"Hex"])
    {
        _writeEPCString = self.epcWriteTextFiled.text;
    }
    else if([sender.titleLabel.text containsString:@"ASCII"])
    {
        _writeEPCString = [self ASCIItoHex:self.epcWriteTextFiled.text];
        NSLog(@"******** SRK ASCII String %@", _writeEPCString);
    }
    else
    {
        _writeEPCString =  [self reversebase36ToHex:self.epcWriteTextFiled.text];
        NSLog(@"******** SRK Base36 String %@", _writeEPCString);
    }
    
}

-(NSString *)hexToASCIIString:(NSString *)epcString
{
    NSData *_data = [epcString dataUsingEncoding:NSUTF8StringEncoding];
    //NSMutableString *_string = [NSMutableString stringWithString:epcString];
    NSMutableString *_string = [NSMutableString stringWithString:@""];
    for (int i = 0; i < epcString.length; i++) {
        unsigned char _byte;
        [_data getBytes:&_byte range:NSMakeRange(i, 1)];
        if (_byte >= 32 && _byte < 127) {
            [_string appendFormat:@"%c", _byte];
        } else {
            [_string appendFormat:@"[%d]", _byte];
        }
    }
    
    NSLog(@"****** ASCII STRING -- %@", _string);
    return _string;
    
}

- (NSString *)hexToRB36:(NSString *)myString
{
    
    JKBigInteger *base16String = [[JKBigInteger alloc] initWithString:myString andRadix:16];
    
    NSString *base36String = [base16String stringValueWithRadix:36];
    
    //    NSMutableString *reversedString = [NSMutableString stringWithCapacity:[base36String length]];
    //
    //    [myString enumerateSubstringsInRange:NSMakeRange(0,[myString length])
    //                                 options:(NSStringEnumerationReverse | NSStringEnumerationByComposedCharacterSequences)
    //                              usingBlock:^(NSString *substring, NSRange substringRange, NSRange enclosingRange, BOOL *stop) {
    //                                  [reversedString appendString:substring];
    //                              }];
    
    return base36String;
}

-(IBAction)clickButtonClick:(id)sender
{
    [self bringSubviewToFront: self.segmentView];
    //self.clickButton.hidden = YES;
    if (theDelegate && [theDelegate respondsToSelector:@selector(sendClickButtonAction:)])
    {
        [theDelegate sendClickButtonAction:self];
    }
}

@end
