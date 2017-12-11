//
//  InspectTagViewController.m
//  URMA
//
//  Created by qvantel on 11/20/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import "InspectTagViewController.h"
#import "UILabel+Padding.h"
#import "JKBigInteger.h"

#define BUFSIZE 4096

@interface InspectTagViewController ()
{
    
    __block TMR_ReadPlan plan;
    __block  TMR_TagData tagData;
    __block TMR_TagFilter filter;
    __block NSString *alertString;
    __block TMR_TransportListenerBlock tb;
    __block NSString *modelString;
    NSString *reqReserveBankDataString;
    NSString *reqEPCMemoryDataString;
    NSString *reqTIDMemoryDataString;
    NSString *reqUserMemoryDataString;
}

@end

@implementation InspectTagViewController
@synthesize lblEPCString;
@synthesize recEPCString;
@synthesize rp,r;

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self.view addSubview:HUD];
    //[HUD hide:YES];
    
    NSLog(@"Received EPC String at Inspect Tag -- %@", recEPCString);
    lblEPCString.text = recEPCString;
    
    [_lblKillPassword setBorder];
    [ _lblAccessPassword setBorder];
    [_lblCRC setBorder];
    [_lbPC setBorder];
    [_lblEPCID setBorder];
    [ _lblclsID setBorder];
    [ _lblVendorID setBorder];
    [_lblModelID setBorder];
    [_lblUniqueID setBorder];
    [_lblUserDataHex setBorder];
    [_lblUserDataASCII setBorder];
    
}

-(void) viewWillAppear:(BOOL)animated
{
    
    _lblKillPassword.text = @" 00 00";

    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(stopHUDInspectTag) name:@"NowStopHUD"  object:nil];
    
    [MBProgressHUD showHUDAddedTo:self.view animated:YES];
    
    dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0),^{

    //Whatever is happening in the fetchedData method will now happen in the background
     [self  readTagData];
    
  
    });

   
}

-(void)viewWillDisappear:(BOOL)animated
{
    [[NSNotificationCenter defaultCenter] removeObserver:self name:@"NowStopHUD"  object:self];

}


-(void)stopHUDInspectTag
{
//    dispatch_async(dispatch_get_main_queue(), ^{
//        
//        [MBProgressHUD hideHUDForView:self.view animated:YES];
//    });
    
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

-(void) readTagData
{
    uint8_t buf[BUFSIZE];
    TMR_uint8List reserved_buf;
    reserved_buf.max = BUFSIZE;
    reserved_buf.len = 0;
    reserved_buf.list  = buf;
    
    uint32_t epcByteCount;
    TMR_Status ret;
    
    char buf2[BUFSIZE];
    TMR_String tmrString;
    tmrString.value = buf2;
    tmrString.max = BUFSIZE;
 
    
    
//    //call TransportListener
//    tb.listener = InspectMemoryPrinter;
//    
//    tb.cookie = NULL;
//    ret = TMR_addTransportListener(rp, &tb);
    
    TMR_RP_init_simple(&plan, 0, NULL, TMR_TAG_PROTOCOL_GEN2, 1000);

    
    ret = TMR_hexToBytes([recEPCString cStringUsingEncoding:NSUTF8StringEncoding],tagData.epc,TMR_MAX_EPC_BYTE_COUNT,&epcByteCount);
    
    if (TMR_SUCCESS != ret)
        NSLog(@"TMR_read Status for TMR_hexToBytes :%s", TMR_strerr(rp, ret));
    
    tagData.epcByteCount = epcByteCount;
    tagData.protocol = TMR_TAG_PROTOCOL_GEN2;
    
    ret = TMR_TF_init_tag(&filter, &tagData);
    if (TMR_SUCCESS != ret)
    {
        NSLog(@"TMR_read Status for INiT Tag:%s", TMR_strerr(rp, ret));
    }
    
    
    ret = TMR_RP_set_filter(&plan, &filter);
    if (TMR_SUCCESS != ret)
    {
        NSLog(@"*** ERROR:setting tag filter:%s", TMR_strerr(rp, ret));
    }
     
    
    ret = TMR_paramGet(rp, TMR_PARAM_VERSION_MODEL, &tmrString);
    if (TMR_SUCCESS != ret)
        NSLog(@"*** ERROR:TMR_GEN2_BANK_EPC:%s", TMR_strerr(rp, ret));
    
    modelString = [[NSString alloc] initWithUTF8String:(const char *)buf2];
    
    [self readTagMemoryData];

    
}


-(void)readTagMemoryData
{
    
    if([modelString isEqualToString:@"M5e"] || [modelString isEqualToString:@"M5e EU"] || [modelString isEqualToString:@"M5e Compact"] || [modelString isEqualToString:@"M5e PRC"] || [modelString isEqualToString:@"Astra"])
    {
        dispatch_async(dispatch_get_main_queue(), ^{
            
            uint8_t buf[BUFSIZE];
            TMR_uint8List reserved_buf;
            reserved_buf.max = BUFSIZE;
            reserved_buf.len = 0;
            reserved_buf.list  = buf;
            
            [self readTagMemoryWordByWord:TMR_GEN2_BANK_RESERVED andBuf:&reserved_buf];
            NSLog(@"******** Fill Reserved Memory ********");
            NSString *stringReserveDataHex = [self bufToString:&reserved_buf];
            NSLog(@"Reserve Mem0ry String --- %@", stringReserveDataHex);
            [self fillReserveMemoryBank:stringReserveDataHex];
           
            reserved_buf.len = 0;
            [self readTagMemoryWordByWord:TMR_GEN2_BANK_EPC andBuf:&reserved_buf];
            NSLog(@"******** Fill EPC Memory ********");
            NSString *stringEPCDataHex = [self bufToString:&reserved_buf];
            NSLog(@"EPC Memory String --- %@", stringEPCDataHex);
            [self fillEPCMemoryBank:stringEPCDataHex];
            
            reserved_buf.len = 0;
            [self readTagMemoryWordByWord:TMR_GEN2_BANK_TID andBuf:&reserved_buf];
            NSLog(@"******** Fill TID Memory ********");
            NSString *stringTIDDataHex = [self bufToString:&reserved_buf];
            NSLog(@"TID Memory String --- %@", stringTIDDataHex);
            [self fillTIDMemoryBank:stringTIDDataHex];
            
            reserved_buf.len = 0;
            [self readTagMemoryWordByWord:TMR_GEN2_BANK_USER andBuf:&reserved_buf];
            NSLog(@"******** Fill USER Memory ********");
            NSString *stringUserDataHex = [self bufToString:&reserved_buf];
            NSLog(@"UserMemory String --- %@", stringUserDataHex);
            [self fillUserMemoryBank:stringUserDataHex];
            
            [MBProgressHUD hideHUDForView:self.view animated:YES];
        });

    }
    else
    {
        dispatch_async(dispatch_get_main_queue(), ^{
            
            /* Start Reading Memory Banks */
            reqReserveBankDataString = [self getDataUsingReadPlan:TMR_GEN2_BANK_RESERVED];
            NSLog(@"RESERVER BUFFER LEN -- %d", [reqReserveBankDataString length]);
            [self fillReserveMemoryBank:reqReserveBankDataString];
            
            reqEPCMemoryDataString = [self getDataUsingReadPlan:TMR_GEN2_BANK_EPC];
            NSLog(@"EPC MEMORY  BUFFER LEN -- %d", [reqEPCMemoryDataString length]);
            [self fillEPCMemoryBank:reqEPCMemoryDataString];
            
            reqTIDMemoryDataString = [self getDataUsingReadPlan:TMR_GEN2_BANK_TID];
            NSLog(@"TID MEMORY  BUFFER LEN -- %d", [reqTIDMemoryDataString length]);
            [self fillTIDMemoryBank:reqTIDMemoryDataString];
            
            reqUserMemoryDataString = [self getDataUsingReadPlan:TMR_GEN2_BANK_USER];
            NSLog(@"User MEMORY  BUFFER LEN -- %d", [reqUserMemoryDataString length]);
            [self fillUserMemoryBank:reqUserMemoryDataString];
            
            [MBProgressHUD hideHUDForView:self.view animated:YES];
        });
    }
 
}

-(NSString *)bufToString:(TMR_uint8List *)buf
{
    NSLog(@"USER MEMORY  BUFFER LEN -- %d", buf->len);
    NSLog(@"USER MEMORY  BUFFER  -- %s", buf->list);
    
    NSString *stringUserDataHex = @"";

    for(int i =0; i < buf->len; i++ )
    {
        NSLog(@"%x",buf->list[i]);
        stringUserDataHex =[stringUserDataHex stringByAppendingFormat:@"%02x",buf->list[i]];
    }

    return stringUserDataHex;
}

-(TMR_Status)readTagMemoryWordByWord:(TMR_GEN2_Bank) GEN2 andBuf:(TMR_uint8List *)reserved_buf
{
    TMR_TagOp newtagop;
    TMR_TagOp *op = &newtagop;
    TMR_Status ret;
    uint32_t startaddress = 0;
    BOOL isAllDatareceived = TRUE;
    
    uint32_t epcByteCount;
    TMR_TagData tagDataTmp;
    TMR_TagFilter filterTmp;
    
    ret = TMR_hexToBytes([recEPCString cStringUsingEncoding:NSUTF8StringEncoding],tagDataTmp.epc,TMR_MAX_EPC_BYTE_COUNT,&epcByteCount);
    
    if (TMR_SUCCESS != ret)
        NSLog(@"TMR_read Status for TMR_hexToBytes :%s", TMR_strerr(rp, ret));
    
    tagDataTmp.epcByteCount = epcByteCount;
    tagDataTmp.protocol = TMR_TAG_PROTOCOL_GEN2;
    
    ret = TMR_TF_init_tag(&filterTmp, &tagDataTmp);
    if (TMR_SUCCESS != ret)
    {
        NSLog(@"TMR_read Status for INiT Tag:%s", TMR_strerr(rp, ret));
    }
    
    while(isAllDatareceived)
    {
        
        uint8_t buf[BUFSIZE];
        TMR_uint8List tmp_buf;
        tmp_buf.max = BUFSIZE;
        tmp_buf.len = 0;
        tmp_buf.list  = buf;
        
        @try
        {
            ret = TMR_TagOp_init_GEN2_ReadData(op, GEN2, startaddress,  1);
            if (TMR_SUCCESS != ret)
            {
                NSLog(@"*** ERROR:TMR_GEN2_BANK_RESERVED:%s", TMR_strerr(rp, ret));
                alertString = [NSString stringWithFormat:@"%s",TMR_strerr(rp, ret)];
            }
            
            ret = TMR_executeTagOp(rp,op, &filterTmp, &tmp_buf);
            if (TMR_ERROR_GEN2_PROTOCOL_MEMORY_OVERRUN_BAD_PC == ret ||
                TMR_ERROR_GENERAL_TAG_ERROR == ret)
            {
                NSLog(@"*** ERROR:TMR_GEN2_BANK_RESERVED EXECUTE:%s", TMR_strerr(rp, ret));
                alertString = [NSString stringWithFormat:@"%s",TMR_strerr(rp, ret)];
                NSLog(@"*** ERROR:TMR_GEN2_BANK_RESERVED EXECUTE RECIVED MEMORY OVER RUN");
                
                if(reserved_buf->len > 0)
                    isAllDatareceived = FALSE;
            }
            
            else if (TMR_SUCCESS == ret)
            {
                int i;
                NSLog(@"*** Tag data length %d", tmp_buf.len);
                
                for (i = 0; i < tmp_buf.len; i ++){
                    reserved_buf->list[reserved_buf->len + i] = tmp_buf.list[i];
                    reserved_buf->len += 1;
                }
                startaddress += 1;
            }
            else {
                NSLog(@"*** ERROR:TMR_GEN2_BANK_RESERVED EXECUTE:%s", TMR_strerr(rp, ret));
                alertString = [NSString stringWithFormat:@"%s",TMR_strerr(rp, ret)];
                return ret;
            }
            
        }
        @catch (NSException *exception)
        {
            NSLog(@"******* EXCEPTION readTagMemoryWordByWord %@",exception);
        }
    }
    
    return TMR_SUCCESS;
}


-(void)fillReserveMemoryBank:(NSString *) dataString
{
    NSString *stringKillPassword = @" ";
    NSString *stringAccessPassword = @" ";
    
    if([dataString length] >=4)
    {
        stringKillPassword=[dataString substringWithRange:NSMakeRange(0, 4)];
        stringAccessPassword=[dataString substringFromIndex:MAX((int)[dataString length]-4, 0)];
    }
    
    NSLog(@"stringKillPassword -- %@", stringKillPassword);
    NSLog(@"stringAccessPassword -- %@", stringAccessPassword);
    
    _lblKillPassword.text = stringKillPassword;
    _lblAccessPassword.text = stringAccessPassword;
}

-(void)fillEPCMemoryBank:(NSString *) dataString
{
    NSLog(@"******** Fill EPC Memory ********");
    NSString *stringCRC = @" ";
    NSString *stringPC = @" ";
    
    
    if([dataString length] >=4)
    {
        stringCRC=[dataString substringWithRange:NSMakeRange(0, 4)];
        stringPC=[dataString substringFromIndex:MAX((int)[dataString length]-4, 0)];
    }
    
    _lblCRC.text = stringCRC;
    _lbPC.text = stringPC;
    _lblEPCID.text = recEPCString;
    
}

-(void)fillTIDMemoryBank:(NSString *) dataString
{
    NSLog(@"******** Fill TID Memory ********");

    NSString *stringUnique = @"00 00 00 00";
    
    NSLog(@"RECEIVED Data String ------ %@",dataString);
    
    if([dataString length] >=8)
    {
        _lblclsID.text = [dataString substringWithRange:NSMakeRange(0, 2)];
        _lblVendorID.text = [dataString substringWithRange:NSMakeRange(2, 3)];
        _lblModelID.text = [dataString substringWithRange:NSMakeRange(5, 3)];
          if([dataString length] > 8)
          {
              _lblUniqueID.text = [dataString substringWithRange:NSMakeRange(8, [dataString length] - 8)];
          }
          else{
              _lblUniqueID.text = stringUnique;
          }
    }
    
}

-(void)fillUserMemoryBank:(NSString *) dataString
{
    NSLog(@"******** Fill USER Memory with Data %@********",dataString);
 
    _lblUserDataHex.text = dataString;
    _lblUserDataASCII.text = [self hexToASCIIString:dataString];
    
     //[[NSNotificationCenter defaultCenter] postNotificationName:@"NowStopHUD"  object:self];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(IBAction)onRadioBtn:(RadioButton*)sender
{
    NSLog(@"********** RADIO ***%@",[NSString stringWithFormat:@"Selected: %@", sender.titleLabel.text]);
    
    if([sender.titleLabel.text containsString:@"ASCII"])
    {
        
        _lblEPCID.text = [self hexToASCIIString:recEPCString];
    }
    else if([sender.titleLabel.text containsString:@"RB36"])
    {
        _lblEPCID.text = [self hexToRB36:recEPCString];
    }
    else
    {
        _lblEPCID.text = recEPCString;
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

-(NSString *) getDataUsingReadPlan:(TMR_GEN2_Bank) GEN2
{
    
    //dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0),^{
        TMR_Status ret;
        
        TMR_String model;
        char str[64];
        model.value = str;
        model.max = 64;
        
        
//        uint32_t epcByteCount;
//        TMR_TagData tagData;
//        TMR_TagFilter filter;
        //TMR_ReadPlan plan;
        TMR_TagOp newtagop;
        TMR_TagOp *op = &newtagop;
        uint8_t readLen;
    
        NSString *actualEPCString;
        NSString *recievedDataString;
    
    
        
        if([modelString isEqualToString:@"M5e"] || [modelString isEqualToString:@"M5e EU"] || [modelString isEqualToString:@"M5e Compact"] || [modelString isEqualToString:@"M5e PRC"] || [modelString isEqualToString:@"Astra"])
        {
             readLen = 0;
        }
        else
        {
              readLen = 2;
        }
   
        ret = TMR_TagOp_init_GEN2_ReadData(op, GEN2, 0, readLen);
        if (TMR_SUCCESS != ret)
        {
            NSLog(@"*** ERROR:creating tagop: GEN2 read data:%s", TMR_strerr(rp, ret));
        }
        ret = TMR_RP_set_tagop(&plan, op);
        if (TMR_SUCCESS != ret)
        {
            NSLog(@"*** ERROR:setting tagop:%s", TMR_strerr(rp, ret));
        }
    
        
        /* Commit read plan */
        ret = TMR_paramSet(rp, TMR_PARAM_READ_PLAN, &plan);
        if (TMR_SUCCESS != ret)
        {
            NSLog(@"*** ERROR:setting read plan:%s", TMR_strerr(rp, ret));
        }
    
        ret = TMR_read(rp, 500, NULL);
        if (TMR_SUCCESS != ret)
        {
            NSLog(@"*** ERROR:reading tags:%s", TMR_strerr(rp, ret));
        }
        NSLog(@"*** read completed");
        
        while (TMR_SUCCESS == TMR_hasMoreTags(rp))
        {
            TMR_TagReadData trd;
            uint8_t dataBuf[BUFSIZE];
            char epcStr[128];
            NSString *EPCString;
          
            
            ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
            if (TMR_SUCCESS != ret)
            {
                NSLog(@"*** ERROR:creating tag read data:%s", TMR_strerr(rp, ret));
            }
            
            ret = TMR_getNextTag(rp, &trd);
            if (TMR_SUCCESS != ret)
            {
                NSLog(@"*** ERROR:fetching tags in getNext Tag :%s", TMR_strerr(rp, ret));
            }
            
            TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
            
           
            EPCString = [NSString stringWithCString:epcStr encoding:NSUTF8StringEncoding];
            
            NSLog(@"Received EPC String -- %@", EPCString);
            
            if (0 < trd.data.len)
            {
                char dataStr[BUFSIZE];
                TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
                NSLog(@"  data(%d): %s\n", trd.data.len, dataStr);
                
                if([EPCString isEqualToString:recEPCString])
                {
                    actualEPCString = [NSString stringWithCString:epcStr encoding:NSUTF8StringEncoding];
                    recievedDataString = [NSString stringWithCString:dataStr encoding:NSUTF8StringEncoding];
                }
                
            }
        }
    
         NSLog(@"******** EPC String -- %@",actualEPCString);
          NSLog(@"******** EPC DATA -- %@",recievedDataString);
    
    //});
    
    return recievedDataString;
}

void InspectMemoryPrinter(bool tx, uint32_t dataLen, const uint8_t data[],
                       uint32_t timeout, void *cookie)
{
    NSLog(@"%@ \n",[NSString stringWithFormat:@"%s",tx ? "Sending: " : "Received:"] );
    NSLog(@"Data --- %@ \n",[NSString stringWithFormat:@"%s\n",data]);
}



@end
