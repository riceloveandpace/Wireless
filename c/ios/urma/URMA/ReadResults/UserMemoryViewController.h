//
//  UserMemoryViewController.h
//  URMA
//
//  Created by qvantel on 11/21/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainViewController.h"
#import "ASFTableView.h"
#import "ASFTableViewCell.h"
#import "tm_reader.h"

@interface UserMemoryViewController : MainViewController<ASFTableViewDelegate,UITextViewDelegate>
{
    TMR_Reader r;
    TMR_Reader*rp;
}
@property(nonatomic,strong)IBOutlet UILabel *lblEPCString;
@property(nonatomic,strong) NSString *recEPCString;

@property(nonatomic,strong) IBOutlet UISegmentedControl *segControl;
@property(nonatomic,strong) IBOutlet UIView *hexEditorView;
@property (nonatomic, strong) IBOutlet UIScrollView *hexScrollView;
@property(nonatomic,strong) IBOutlet UIView *ASCIIEditorView;
@property (nonatomic, strong) IBOutlet UITextView *ASCIITextView;

@property (weak, nonatomic) IBOutlet ASFTableView *mASFTableView;

@property (nonatomic, strong) NSData * TMR_Reader_data;
@property (nonatomic,assign) TMR_Reader *rp;
@property  TMR_Reader r;
@property(nonatomic,strong)IBOutlet UILabel *lblAvailableBytes;
@property(nonatomic,strong)IBOutlet UIButton *btn_writeTag;



-(IBAction)writeTag:(UIButton *)sender;

@end
