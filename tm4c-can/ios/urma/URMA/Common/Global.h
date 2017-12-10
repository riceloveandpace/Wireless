//
//  Global.h
//  URMA
//
//  Created by Raju on 14/08/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HeaderView.h"
#import "MBProgressHUD.h"

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

@interface Global : NSObject<MBProgressHUDDelegate>

// log operations declaration..
extern NSFileHandle *writelog;
extern NSString *printlog;
extern NSString *logfile;

extern NSFileHandle *writetplog;

//Pass serviceIp ..
extern NSString *serviceIp;

// font styles declaration..

extern UIFont *font_ExtraBold_18;
extern UIFont *font_ExtraBold_16;
extern UIFont *font_ExtraBold_14;
extern UIFont *font_ExtraBold_12;

extern UIFont *font_Bold_18;
extern UIFont *font_Bold_16;
extern UIFont *font_Bold_14;
extern UIFont *font_Bold_12;

extern UIFont *font_Normal_18;
extern UIFont *font_Normal_16;
extern UIFont *font_Normal_14;
extern UIFont *font_Normal_12;

extern UIFont *font_Semibold_18;
extern UIFont *font_Semibold_16;
extern UIFont *font_Semibold_14;
extern UIFont *font_Semibold_12;

extern UIFont *font_Regular_18;
extern UIFont *font_Regular_16;
extern UIFont *font_Regular_14;
extern UIFont *font_Regular_12;

extern UIFont *font_Italic_18;
extern UIFont *font_Italic_16;
extern UIFont *font_Italic_14;
extern UIFont *font_Italic_12;

extern HeaderView *headerView;
extern MBProgressHUD *HUD;

extern NSMutableDictionary *settingInfoDictionary;
extern UIActivityIndicatorView *spinner;

extern NSMutableArray* services;

extern int selectedBaudRate;
extern int selectedRegion;

extern NSMutableArray *allReadResultsArray;
extern NSMutableArray *allepclblsArray;
extern NSInteger alltotalTags;
extern NSString *timeInSec;
extern NSString *tagBySec;

extern NSString *exceptionlbl;

extern int globalsServiceselectedindex;
extern BOOL readToggle;
extern BOOL isSerialReading;
extern BOOL isTrimble;

@end
