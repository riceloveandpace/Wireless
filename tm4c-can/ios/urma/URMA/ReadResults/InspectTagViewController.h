//
//  InspectTagViewController.h
//  URMA
//
//  Created by qvantel on 11/20/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "tm_reader.h"
#import "RadioButton.h"
#import "Global.h"

@interface InspectTagViewController : UIViewController
{
    TMR_Reader r;
    TMR_Reader*rp;
}

@property(nonatomic,strong)IBOutlet UILabel *lblEPCString;
@property(nonatomic,strong) NSString *recEPCString;

@property(nonatomic,strong)IBOutlet UILabel *lblKillPassword;
@property(nonatomic,strong)IBOutlet UILabel *lblAccessPassword;
@property(nonatomic,strong)IBOutlet UILabel *lblCRC;
@property(nonatomic,strong)IBOutlet UILabel *lbPC;
@property(nonatomic,strong)IBOutlet UILabel *lblEPCID;
@property(nonatomic,strong)IBOutlet UILabel *lblclsID;
@property(nonatomic,strong)IBOutlet UILabel *lblVendorID;
@property(nonatomic,strong)IBOutlet UILabel *lblModelID;
@property(nonatomic,strong)IBOutlet UILabel *lblUniqueID;
@property(nonatomic,strong)IBOutlet UILabel *lblUserDataHex;
@property(nonatomic,strong)IBOutlet UILabel *lblUserDataASCII;

//@property (nonatomic, strong) NSData * TMR_Reader_data;
@property (nonatomic,assign) TMR_Reader *rp;
@property  TMR_Reader r;

@property (nonatomic, strong) IBOutlet RadioButton* hexButton;

-(IBAction)onRadioBtn:(RadioButton*)sender;

@end
