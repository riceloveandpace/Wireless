//
//  UserMemoryViewController.m
//  URMA
//
//  Created by qvantel on 11/21/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import "UserMemoryViewController.h"
#import "Global.h"
#import "UserMemoryEditData.h"
#define BUFSIZE 4096

@interface UserMemoryViewController ()
{
  
    //__block  TMR_TagData tagData;
    //__block TMR_TagFilter filter;
    __block NSString *alertString;
    __block TMR_TransportListenerBlock tb;
    
    __block  NSString *tmpString;
    NSMutableArray *words;
    NSMutableArray *duplicateWords;
    UIWindow *window;
    NSInteger dataIndex;
    NSInteger rowHeadr;
    NSString *stringUserDataHex;
    NSMutableArray *editedDataArray;
    NSString *recievedDataString;
    NSString *asciiString;
}

@property (nonatomic, retain) NSMutableArray *rowsArray;

@end

@implementation UserMemoryViewController
@synthesize recEPCString;
@synthesize TMR_Reader_data;
@synthesize rp,r;

- (id)initWithCoder:(NSCoder*)aDecoder
{
    if(self = [super initWithCoder:aDecoder])
    {
        _rowsArray = [[NSMutableArray alloc] init];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    _lblEPCString.text = recEPCString;
    tmpString = [NSString stringWithString:recEPCString];
    
    _hexEditorView.hidden = NO;
    _ASCIIEditorView.hidden = YES;
    _btn_writeTag.hidden = NO;
    
    _segControl.selectedSegmentIndex = 0;
    
    _ASCIITextView.layer.borderWidth = 1.0f;
    _ASCIITextView.layer.borderColor = [[UIColor lightGrayColor] CGColor];
    _ASCIITextView.layer.cornerRadius = 2.0f;
    _ASCIITextView.delegate = self;
    _ASCIITextView.userInteractionEnabled = NO;
    asciiString = [NSString string];
    
    NSLog(@"Recived EPC string in UserMemory View -- %@", recEPCString);
    
    editedDataArray = [NSMutableArray array];
    duplicateWords = [NSMutableArray array];
    recievedDataString = [NSString string];
    
    _hexScrollView.contentSize = CGSizeMake(_hexScrollView.contentSize.width,1.0);
    
}

-(void) viewWillAppear:(BOOL)animated
{
  
    NSLog(@"*** Rp status -- %d",r.connected);
        
    [MBProgressHUD showHUDAddedTo:self.view animated:YES];
    
    dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0),^{

 
    //Whatever is happening in the fetchedData method will now happen in the background
     [self getEPCData];
    
   
    });
    
    
 
    if (IS_IPAD)
    {
        if ([[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeLeft || [[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeRight)
        {
            CGRect frame = _hexScrollView.frame;
            frame.origin.x = 40;
            _hexScrollView.frame = frame;
        }
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}




-(void) getEPCData
{
    NSLog(@"*** GET EPC DATA********");
    uint8_t buf[BUFSIZE];
    TMR_uint8List reserved_buf;
    reserved_buf.max = BUFSIZE;
    reserved_buf.len = 0;
    reserved_buf.list  = buf;
    
    [self readTagMemoryData:TMR_GEN2_BANK_USER andBuf:&reserved_buf];
    
   // _ASCIITextView.text = [self hexToASCIIString:stringUserDataHex];

}

-(void)readTagMemoryData:(TMR_GEN2_Bank) GEN2 andBuf:(TMR_uint8List *)reserved_buf
{
    
    char buf2[BUFSIZE];
    TMR_String tmrString;
    tmrString.value = buf2;
    tmrString.max = BUFSIZE;
    TMR_Status ret;
    
    
    ret = TMR_paramGet(rp, TMR_PARAM_VERSION_MODEL, &tmrString);
    if (TMR_SUCCESS != ret)
        NSLog(@"*** ERROR:TMR_GEN2_BANK_EPC:%s", TMR_strerr(rp, ret));
    
    NSString *modelString = [[NSString alloc] initWithUTF8String:(const char *)buf2];
   
    
//    //call TransportListener
//    tb.listener = userMemoryPrinter;
//    
//    tb.cookie = NULL;
//    ret = TMR_addTransportListener(rp, &tb);
    
    
    if([modelString isEqualToString:@"M5e"] || [modelString isEqualToString:@"M5e EU"] || [modelString isEqualToString:@"M5e Compact"] || [modelString isEqualToString:@"M5e PRC"] || [modelString isEqualToString:@"Astra"])
    {
        
        dispatch_async(dispatch_get_main_queue(), ^{

            [self readTagMemoryWordByWord:GEN2 andBuf:reserved_buf];
             NSLog(@"USER MEMORY  BUFFER LEN -- %d", reserved_buf->len);
            NSLog(@"USER MEMORY  BUFFER  -- %s", reserved_buf->list);
            
          
            NSLog(@"******** Fill USER Memory ********");
            stringUserDataHex = @"";
            
            NSLog(@"*** FULLL USER DATA****");
            for(int i =0; i < reserved_buf->len; i++ )
            {
                NSLog(@"%x",reserved_buf->list[i]);
                stringUserDataHex =[stringUserDataHex stringByAppendingFormat:@"%02x",reserved_buf->list[i]];
            }
            
            NSLog(@"UserMemory String --- %@", stringUserDataHex);
            [self displayTextViewinHexEditor:stringUserDataHex];
           // _ASCIITextView.text = stringUserDataHex;
            NSLog(@"*** FULLL USER DATA END****");
                
            [MBProgressHUD hideHUDForView:self.view animated:YES];
        });
        
    }
    else
    {
        
        dispatch_async(dispatch_get_main_queue(), ^{
            
        NSLog(@"*** M6e memory read********");

        [self readPlan];
        [MBProgressHUD hideHUDForView:self.view animated:YES];
        });
    }
    
}

-(TMR_Status)readMemoryM6eVariants:(TMR_GEN2_Bank) GEN2 andBuf:(TMR_uint8List *)reserved_buf
{
    NSLog(@"READER IS M6E..............");
    
     __block TMR_Status ret;
    __block uint8_t buf[BUFSIZE];
    __block  TMR_uint8List tmp_buf;
    tmp_buf.max = BUFSIZE;
    tmp_buf.len = 0;
    tmp_buf.list  = buf;
    
  
    
    @try
    {
        uint32_t epcByteCount;
        TMR_TagData tagData;
        TMR_TagFilter filter;
        TMR_ReadPlan plan;
        TMR_TagOp newtagop;
        TMR_TagOp *op = &newtagop;
      
        
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
        
        // Read tag memory
      ret = TMR_TagOp_init_GEN2_ReadData(op, GEN2, 0,  0);
        if (TMR_SUCCESS != ret)
        {
            NSLog(@"*** ERROR:TMR_GEN2_BANK_RESERVED:%s", TMR_strerr(rp, ret));
            alertString = [NSString stringWithFormat:@"%s",TMR_strerr(rp, ret)];
            
        }
        
        //Set to Anetena 2
        
        uint8_t antenna = 2;
         ret = TMR_paramSet(rp, TMR_PARAM_TAGOP_ANTENNA, &antenna);
        if (TMR_SUCCESS != ret)
        {
            NSLog(@"*** ERROR:Antennaaaaaa :%s", TMR_strerr(rp, ret));
            alertString = [NSString stringWithFormat:@"%s",TMR_strerr(rp, ret)];
            
        }
        
        ret = TMR_executeTagOp(rp,op, &filter, &tmp_buf);
        if (TMR_SUCCESS != ret)
        {
            NSLog(@"*** ERROR:TMR_GEN2_BANK_RESERVED Execute:%s", TMR_strerr(rp, ret));
            alertString = [NSString stringWithFormat:@"%s",TMR_strerr(rp, ret)];

        }
        
        
    }
    @catch (NSException *exception)
    {
        
        NSLog(@"******* EXCEPTION readMemoryM6eVariants %@",exception);
        
    }
    
    return TMR_SUCCESS;
}



void userMemoryPrinter(bool tx, uint32_t dataLen, const uint8_t data[],
                               uint32_t timeout, void *cookie)
{
    NSLog(@"%@ \n",[NSString stringWithFormat:@"%s",tx ? "Sending: " : "Received:"] );
    NSLog(@"Data --- %@ \n",[NSString stringWithFormat:@"%s\n",data]);
}
 

-(TMR_Status)readTagMemoryWordByWord:(TMR_GEN2_Bank) GEN2 andBuf:(TMR_uint8List *)reserved_buf
{
    TMR_TagOp newtagop;
    TMR_TagOp *op = &newtagop;
    TMR_Status ret;
    uint32_t startaddress = 0;
    BOOL isAllDatareceived = TRUE;
    uint32_t epcByteCount;
    TMR_TagData tagData;
    TMR_TagFilter filter;

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
            
            ret = TMR_executeTagOp(rp,op, &filter, &tmp_buf);
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


-(IBAction)segmentIndexChanged:(UISegmentedControl *)sender
{
    UISegmentedControl * segControl = (UISegmentedControl *)sender;
    
    if(segControl.selectedSegmentIndex == 0)
    {
        _hexEditorView.hidden = NO;
        _ASCIIEditorView.hidden = YES;
        _btn_writeTag.hidden = NO;
    }
    else
    {
        _ASCIIEditorView.hidden = NO;
        _hexEditorView.hidden = YES;
        _btn_writeTag.hidden = YES;
    }
}


-(void)displayTextViewinHexEditor:(NSString *) dataString
{
    
    _lblAvailableBytes.text = [NSString stringWithFormat:@"Space Available for %d bytes",[dataString length]/2];
    //NSLog(@"DATA TO BE DISPLAYED --- %@", dataString);
     //NSLog(@"DATA TO BE DISPLAYED LENGTH --- %d", [dataString length]);
    
    words = [[NSMutableArray alloc] initWithCapacity:[dataString length]];
    for (int i=0; i < [dataString length]; ) {
        NSString *ichar  = [dataString substringWithRange:NSMakeRange(i, 2)];
        [words addObject:ichar];
        i = i+2;
    }
    
    duplicateWords = [words mutableCopy];
    
    //NSLog(@"String Array ---- %@", words);
     NSLog(@"String Array count---- %d", [words count]);
    int numOfRows = [words count]/16;
     //NSLog(@"String Array count divide 16---- %d", numOfRows);
    NSInteger numOfCols = [words count]%16;
    //NSLog(@"String Array Columns---- %d", numOfCols);

    dataIndex =0;
    rowHeadr = 0;
    
    if(numOfRows >0)
    {
    
        //NSArray *cols = @[@"",@"0x0000",@"0x0010",@"0x0020",@"0x0030"];
  
        NSMutableArray *colHeader = [NSMutableArray array];
        [colHeader addObject:@"0x00"];
        [colHeader addObjectsFromArray:[self cellHeader:16]];
        
        NSArray *cols =  colHeader;
  /*@[@"0x00",@"00",@"01",@"02",@"03",@"04",@"05",@"06",@"07",@"08",@"09",@"0a",@"0b",@"0c",@"0d",@"0e",@"0f"];
   */
        
        
        NSMutableArray *weightHeader = [NSMutableArray array];
        [weightHeader addObject: @(0.08f)];
        [weightHeader addObjectsFromArray:[self cellWeights:16]];
        NSArray *weights = weightHeader;
        /*
        //NSArray *weights = @[@(0.1f),@(0.1f),@(0.1f),@(0.1f),@(0.1f)];
        NSArray *weights = @[@(0.1f),@(0.056f),@(0.056f),@(0.056f),@(0.056f),@(0.056f),@(0.056f),@(0.056f),@(0.056f),@(0.056f),@(0.056f),@(0.056f),@(0.056f),@(0.056f),@(0.056f),@(0.056f),@(0.056f)];
         */
        
        NSDictionary *options = @{kASF_OPTION_CELL_TEXT_FONT_SIZE : @(14),
                                  kASF_OPTION_CELL_TEXT_FONT_BOLD : @(true),
                                  kASF_OPTION_CELL_BORDER_COLOR : [UIColor clearColor],
                                  kASF_OPTION_CELL_BORDER_SIZE : @(0.0),
                                  kASF_OPTION_BACKGROUND : [UIColor clearColor]};
        
        [_mASFTableView setDelegate:self];
        [_mASFTableView setBounces:NO];
        [_mASFTableView setSelectionColor:[UIColor colorWithRed:242/255.0 green:242/255.0 blue:242/255.0 alpha:1.0f]];
        [_mASFTableView setTitles:cols
                      WithWeights:weights
                      WithOptions:options
                        WitHeight:32 Floating:YES];
        
        [_rowsArray removeAllObjects];
        
        for (int i=0; i<numOfRows; i++)
        {
            
            //Check Number of Columns in Last row
            if(i == numOfRows - 1)
            {
                numOfCols = [words count] % 16;
                if (numOfCols == 0) {
                    numOfCols = 16;
                }
            }
            else
            {
                numOfCols = 16;
            }
            
            NSDictionary *rowDict = @{kASF_CELL_TITLE : [NSString stringWithFormat:@"%x0",rowHeadr++],
                                   kASF_OPTION_CELL_TEXT_ALIGNMENT : @(NSTextAlignmentCenter),
                                   kASF_OPTION_CELL_BORDER_COLOR : [UIColor clearColor],
                                   kASF_OPTION_CELL_TEXT_FONT_BOLD : @(true),
                                   };
            
            
            NSMutableArray *cellArray = [NSMutableArray new];
            [cellArray addObject:rowDict];
            [cellArray addObjectsFromArray:[self cellCreator:numOfCols]];

            [_rowsArray addObject:@{
                                    kASF_ROW_ID :
                                        @(i),
                                    
                                    kASF_ROW_CELLS :cellArray,
                                    
                                    
                                    kASF_ROW_OPTIONS :
                                        @{kASF_OPTION_BACKGROUND : [UIColor whiteColor],
                                          kASF_OPTION_CELL_PADDING : @(0),
                                          kASF_OPTION_CELL_BORDER_COLOR : [UIColor lightGrayColor],
                                          kASF_OPTION_CELL_BORDER_SIZE : @(1.5),
                                          kASF_OPTION_CELL_TEXT_FONT_SIZE : @(13)
                                          },
                                    }];
        }
    }
    
    [_mASFTableView setRows:_rowsArray];
    
     [MBProgressHUD hideHUDForView:window animated:YES];
}

-(NSMutableArray *)cellHeader:(NSInteger) count
{
    NSMutableArray *cellheaderArray = [NSMutableArray array];
    
    for (int i =0; i<count; i++) {
        NSString *titleString = [NSString stringWithFormat:@"%.2x",i];
        [cellheaderArray addObject:titleString];
    }
    
    return cellheaderArray;
}

-(NSMutableArray *)cellWeights:(NSInteger) count
{
    NSMutableArray *cellWeightsArray = [NSMutableArray array];
    
    for (int i =0; i<count; i++) {
        [cellWeightsArray addObject:@(0.0585f)];
    }
    
    return cellWeightsArray;
}


-(NSMutableArray *)cellCreator:(NSInteger) count
{
    
    NSDictionary *tmpDict = [NSDictionary dictionary];
    NSMutableArray *cellArray  = [NSMutableArray new];
    
    for(int i =0; i < count; i++)
    {
        tmpDict =  @{kASF_CELL_TITLE : [words objectAtIndex:dataIndex++],
                     kASF_CELL_TEXTVIEW_TAG:@(i),
                     kASF_CELL_IS_EDITABLE:@(true),
                     kASF_CELL_TEXTVIEW_DELEGATE:self,
                     };
    
        [cellArray addObject:tmpDict];
        
    }
    
    return cellArray;
}

-(void)textViewDidBeginEditing:(UITextView *)textView
{
    
    
}

-(void)textViewDidChangeSelection:(UITextView *)textView
{
    
}
-(void)textViewDidEndEditing:(UITextView *)textView
{
    
    if(_hexEditorView.hidden == NO)
    {
        ASFTableViewCell *cell = (ASFTableViewCell*)[textView superview];
        NSString *strRowId = (NSString *)cell.rowId;
        /*
        NSLog(@"END with ROW ID -- %d",[strRowId integerValue] );
        NSLog(@"END with col ID -- %ld",(long)textView.tag);
        NSLog(@"END with text -- %@",textView.text);
         */
        
        NSInteger editIndex = 16*[strRowId integerValue] + textView.tag + 1;
        
       // NSLog(@"END with editIndex -- %d",editIndex);
        [words replaceObjectAtIndex:editIndex-1 withObject:textView.text];
        
        NSString *curString = [duplicateWords objectAtIndex:editIndex - 1];
        //NSLog(@"Previos value -- %@", curString);
    
        if (![curString isEqualToString:textView.text])
        {
            textView.textColor = [UIColor redColor];
            
            UserMemoryEditData *editData = [[UserMemoryEditData alloc] init];
            editData.curIndex = editIndex;
            editData.curValue = [textView.text integerValue];
            editData.xValue = [strRowId integerValue];
            editData.yValue = textView.tag;
            editData.prevValue = [curString integerValue];
            
            BOOL isExist = 0;
            
            
            for (UserMemoryEditData *item in editedDataArray)
            {
                
                if (item.curIndex == editData.curIndex)
                {
                    item.curValue = editData.curValue;
                    isExist = 1;
                    break;
                }
            }
            
            if(!isExist)
            {
                [editedDataArray addObject:editData];
            }
            
        }
    }
    else
    {
        
    }
    
}


- (void)textViewDidChange:(UITextView *)textView
{
    
    NSInteger restrictedLength;
    
    if(_hexEditorView.hidden == NO)
    {
    
        restrictedLength=2;
    }
    else
    {
        restrictedLength = [asciiString length];
    }
    
    NSString *temp=textView.text;
    
    if([[textView text] length] > restrictedLength){
        textView.text=[temp substringToIndex:[temp length]-1];
    }
}


- (BOOL)textView:(UITextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text
{
    
    // This will be the character set of characters I do not want in my text field.  Then if the replacement string contains any of the characters, return NO so that the text does not change.
    NSCharacterSet *unacceptedInput = nil;
    
    if(_hexEditorView.hidden == NO)
    {
        //NSLog(@"*** Hex Selected. Only Hex text");
        unacceptedInput = [[NSCharacterSet characterSetWithCharactersInString:@"0123456789ABCDEFabcdef"] invertedSet];
    }
    else
    {
        
        //NSLog(@"*** ASCII Selected. Only ASCII text");
        unacceptedInput = [[NSCharacterSet characterSetWithRange:NSMakeRange(0, 128)] invertedSet];
    }

        
    return ([[text componentsSeparatedByCharactersInSet:unacceptedInput] count] <= 1);
    
}

-(void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration{
    
    
    if (IS_IPAD)
    {
        if ([[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeLeft || [[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeRight)
        {
            CGRect frame = _hexScrollView.frame;
            frame.origin.x = 40;
            _hexScrollView.frame = frame;
        }
        else
        {
            CGRect frame = _hexScrollView.frame;
            frame.origin.x = 260;
            _hexScrollView.frame = frame;
        }
    }
    
   
 /*
    if (IS_IPAD) {
        if ([[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeLeft || [[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeRight) {
            
            mainHeaderView.logoview.frame = CGRectMake(0.0, 15.0, 150.0, 44.0);
            mainHeaderView.ttllbl.frame = CGRectMake(370.0, 15.0, 300.0, 44.0);
            mainHeaderView.statusShowIcon.frame = CGRectMake(865,20,32,32);
            mainHeaderView.offBtn.frame = CGRectMake(920.0, 20.0, 33, 33);
            mainHeaderView.settingBtn.frame = CGRectMake(970.0, 20.0, 32.0, 32.0);
            
            
        }
        else{
            
            mainHeaderView.logoview.frame = CGRectMake(0.0, 15.0, 150.0, 44.0);
            mainHeaderView.ttllbl.frame = CGRectMake(250.0, 15.0, 250.0, 44.0);
            mainHeaderView.statusShowIcon.frame = CGRectMake(610,20,32,32);
            mainHeaderView.offBtn.frame = CGRectMake(665.0, 20.0, 33, 33);
            mainHeaderView.settingBtn.frame = CGRectMake(720.0, 20.0, 32.0, 32.0);
            
        }
        
    }
  */
        
    
}


-(IBAction)writeTag:(UIButton *)sender
{
    [MBProgressHUD showHUDAddedTo:self.view animated:YES];
    
    dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0),^{
        
        
        //NSLog(@"********** Edit This Data in User Memory -- %d",[editedDataArray count]);
        if (editedDataArray > 0)
        {
            
            [self writeToBank];
            
        }
        
        
    });
    
  
    
    [MBProgressHUD hideHUDForView:self.view animated:YES];
    

}

-(void)writeToBank
{
    
    TMR_TagFilter filter;
    TMR_TagData lockEpc;
    TMR_TagOp newtagop;
    TMR_TagOp *op = &newtagop;
    TMR_Status ret;
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
    
   
    for (int i =0; i < [editedDataArray count]; i++)
    {
        UserMemoryEditData *tmpData = [editedDataArray objectAtIndex:i];
        /*
        NSLog(@"Current Index -- %d", tmpData.curIndex);
        NSLog(@"Previous Value -- %d", tmpData.prevValue);
        NSLog(@"Current Value -- %d", tmpData.curValue);
        NSLog(@"Current xValue -- %d", tmpData.xValue);
        NSLog(@"Current yValue -- %d", tmpData.yValue);
        NSLog(@"Word address -- %d", (tmpData.curIndex-1)/2);
         */
        
        UserMemoryEditData *curData = [editedDataArray  objectAtIndex:i];
        int wordAddressIndex = ((tmpData.curIndex-1)/2)*2;
        //NSLog(@"Word address  wordAddressIndex-- %d", wordAddressIndex);
        
        NSString *ichar  = [NSString stringWithFormat:@"%@%@",[words objectAtIndex:wordAddressIndex],
                            [words objectAtIndex:wordAddressIndex+1]];
        //NSLog(@"Write word --- %@", ichar);
    
        uint16_t data1 = (uint16_t)[ichar intValue];
        
        //NSLog(@"Write Data --- %d", data1);
         uint8_t data[2];
        uint16_t data2[1];
        
        TMR_hexToBytes([ichar cStringUsingEncoding:NSUTF8StringEncoding],data,2,NULL);
        for (int i =0; i < 2; i++) {
            NSLog(@"%x",data[i]);
        }
        
        data2[0] = data[0] <<8 | data[1];
        
        for (int i =0; i < 1; i++) {
            NSLog(@"***** %x",data2[i]);
        }
        
       
        TMR_uint16List writeData;
        writeData.len = writeData.max = sizeof(data2) / sizeof(data2[0]);
        writeData.list = data2;
        uint16_t userMemoryAddress = (curData.curIndex -1)/2;
        
        ret = TMR_TagOp_init_GEN2_WriteData(op, TMR_GEN2_BANK_USER, userMemoryAddress,&writeData);
        if (TMR_SUCCESS != ret)
        {
            NSLog(@"*** ERROR:fTMR_TagOp_init_GEN2_WriteData :%s", TMR_strerr(rp, ret));
        }
        ret= TMR_executeTagOp(rp,op, &filter, NULL);
        if (TMR_SUCCESS != ret)
        {
            NSLog(@"*** ERROR:TMR_TagOp_init_GEN2_WriteData Execution:%s", TMR_strerr(rp, ret));
        }
    }
    
    [editedDataArray removeAllObjects];

}


-(void) readPlan
{
    
    //dispatch_async( dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0),^{
        TMR_Status ret;

        TMR_String model;
        char str[64];
        model.value = str;
        model.max = 64;
      
        
        uint32_t epcByteCount;
        TMR_TagData tagData;
        TMR_TagFilter filter;
        TMR_ReadPlan plan;
        TMR_TagOp newtagop;
        TMR_TagOp *op = &newtagop;
        uint8_t readLen;
        NSString *actualEPCString;
    
        

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
        
        /* Embedded Tagop */

            
            /* Specify the read length for readData */
            TMR_paramGet(rp, TMR_PARAM_VERSION_MODEL, &model);
            if ((0 == strcmp("M6e", model.value)) || (0 == strcmp("M6e PRC", model.value))
                || (0 == strcmp("M6e Micro", model.value)) || (0 == strcmp("Mercury6", model.value))
                || (0 == strcmp("Astra-EX", model.value)))
            {
                /**
                 * Specifying the readLength = 0 will retutrn full TID for any
                 * tag read in case of M6e and M6 reader.
                 **/
                readLen = 0;
            }
            else
            {
                /**
                 * In other case readLen is minimum.i.e 2 words
                 **/
                readLen = 2;
            }
            
            ret = TMR_TagOp_init_GEN2_ReadData(op, TMR_GEN2_BANK_USER, 0, readLen);
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
    
    
    ret = TMR_read(rp, 1000, NULL);
    if (TMR_SUCCESS != ret)
    {
        NSLog(@"*** ERROR:reading tags:%s", TMR_strerr(rp, ret));
    }

    while (TMR_SUCCESS == TMR_hasMoreTags(rp))
    {
        TMR_TagReadData trd;
        uint8_t dataBuf[16];
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
            NSLog(@"*********************data(%d): %s\n", trd.data.len, dataStr);
            
            if([EPCString isEqualToString:recEPCString])
            {
                actualEPCString = [NSString stringWithCString:epcStr encoding:NSUTF8StringEncoding];
                recievedDataString = [NSString stringWithCString:dataStr encoding:NSUTF8StringEncoding];
            }
            
        }
    }
        
        NSLog(@"******** EPC String -- %@",actualEPCString);
        NSLog(@"******** EPC DATA -- %@",recievedDataString);
    if ([recievedDataString length] > 0)
    {
        [self displayTextViewinHexEditor:recievedDataString];
        _ASCIITextView.text = [self hexToASCIIString:recievedDataString];
    }
    else
    {
         _lblAvailableBytes.text = [NSString stringWithFormat:@"Space Available for 0 bytes"];
    }
    
    
    //});
}


-(NSString *)hexToASCIIString:(NSString *)epcString
{
    NSMutableString * newString = [NSMutableString string];
    
    for ( NSString * component in words ) {
        int value = 0;
        sscanf([component cStringUsingEncoding:NSASCIIStringEncoding], "%x", &value);
        [newString appendFormat:@"%c", (char)value];
    }
    
    NSLog(@"%@", newString);
    
    
    NSLog(@"****** ASCII STRING -- %@", newString);
    NSLog(@"****** ASCII STRING  Length-- %d", [newString length]);
    asciiString = newString;
    return newString;
    
}



@end
