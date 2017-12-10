//
//  Global.m
//  URMA
//
//  Created by Raju on 14/08/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import "Global.h"

@interface Global ()
@end

NSFileHandle *writelog;
NSString *printlog;
NSString *logfile;

NSFileHandle *writetplog;

NSString *serviceIp;

UIFont *font_ExtraBold_18;
UIFont *font_ExtraBold_16;
UIFont *font_ExtraBold_14;
UIFont *font_ExtraBold_12;

UIFont *font_Bold_18;
UIFont *font_Bold_16;
UIFont *font_Bold_14;
UIFont *font_Bold_12;

UIFont *font_Normal_18;
UIFont *font_Normal_16;
UIFont *font_Normal_14;
UIFont *font_Normal_12;

UIFont *font_Semibold_18;
UIFont *font_Semibold_16;
UIFont *font_Semibold_14;
UIFont *font_Semibold_12;

UIFont *font_Regular_18;
UIFont *font_Regular_16;
UIFont *font_Regular_14;
UIFont *font_Regular_12;

UIFont *font_Italic_18;
UIFont *font_Italic_16;
UIFont *font_Italic_14;
UIFont *font_Italic_12;

HeaderView *headerView;
MBProgressHUD *HUD;

NSMutableDictionary *settingInfoDictionary;

UIActivityIndicatorView *spinner;

NSMutableArray* services;

int selectedBaudRate;
int selectedRegion;


NSString *exceptionlbl = @"";

NSMutableArray *allReadResultsArray = nil;
NSMutableArray *allepclblsArray = nil;
NSInteger alltotalTags = 0;
NSString *timeInSec = @"0";
NSString *tagBySec = @"0";

BOOL readToggle = TRUE;
BOOL isSerialReading = FALSE;
BOOL isTrimble = FALSE;

int globalsServiceselectedindex = -1;

@implementation Global

-(id)init{
    self = [super init];
    if (self) {
        // Custom initialization
    }
    
    NSString *documentsDirectory = [NSSearchPathForDirectoriesInDomains (NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0];
    logfile = [documentsDirectory stringByAppendingPathComponent:@"urma.log"];
    
    //create file if it doesn't exist
    if(![[NSFileManager defaultManager] fileExistsAtPath:logfile])
        [[NSFileManager defaultManager] createFileAtPath:logfile contents:nil attributes:nil];
    
    //append text to file (you'll probably want to add a newline every write)
    writelog = [NSFileHandle fileHandleForUpdatingAtPath:logfile];
    printlog = [NSString stringWithContentsOfFile:logfile encoding:NSUTF8StringEncoding error:nil];
    
    font_ExtraBold_16 = [UIFont fontWithName:@"OpenSans-ExtraBold" size:16];
    font_Bold_16 = [UIFont fontWithName:@"OpenSans-Bold" size:16];
    font_ExtraBold_14 = [UIFont fontWithName:@"OpenSans-ExtraBold" size:14];
    font_Bold_14 = [UIFont fontWithName:@"OpenSans-Bold" size:14];
    font_Normal_12 = [UIFont fontWithName:@"OpenSans" size:12];
    font_Semibold_12 = [UIFont fontWithName:@"OpenSans-Semibold" size:12];
    
    font_ExtraBold_18 = [UIFont fontWithName:@"OpenSans-ExtraBold" size:18];
    font_ExtraBold_16 = [UIFont fontWithName:@"OpenSans-ExtraBold" size:16];
    font_ExtraBold_14 = [UIFont fontWithName:@"OpenSans-ExtraBold" size:14];
    font_ExtraBold_12 = [UIFont fontWithName:@"OpenSans-ExtraBold" size:12];
    
    font_Bold_18 = [UIFont fontWithName:@"OpenSans-Bold" size:18];
    font_Bold_16 = [UIFont fontWithName:@"OpenSans-Bold" size:16];
    font_Bold_14 = [UIFont fontWithName:@"OpenSans-Bold" size:14];
    font_Bold_12 = [UIFont fontWithName:@"OpenSans-Bold" size:12];
    
    font_Normal_18 = [UIFont fontWithName:@"OpenSans" size:18];
    font_Normal_16 = [UIFont fontWithName:@"OpenSans" size:16];
    font_Normal_14 = [UIFont fontWithName:@"OpenSans" size:14];
    font_Normal_12 = [UIFont fontWithName:@"OpenSans" size:12];
    
    font_Semibold_18 = [UIFont fontWithName:@"OpenSans-Semibold" size:18];
    font_Semibold_16 = [UIFont fontWithName:@"OpenSans-Semibold" size:16];
    font_Semibold_14 = [UIFont fontWithName:@"OpenSans-Semibold" size:14];
    font_Semibold_12 = [UIFont fontWithName:@"OpenSans-Semibold" size:12];
    
    font_Regular_18 = [UIFont fontWithName:@"OpenSans-Regular" size:18];
    font_Regular_16 = [UIFont fontWithName:@"OpenSans-Regular" size:16];
    font_Regular_14 = [UIFont fontWithName:@"OpenSans-Regular" size:14];
    font_Regular_12 = [UIFont fontWithName:@"OpenSans-Regular" size:12];
    
    font_Italic_18 = [UIFont fontWithName:@"OpenSans-Italic" size:18];
    font_Italic_16 = [UIFont fontWithName:@"OpenSans-Italic" size:16];
    font_Italic_14 = [UIFont fontWithName:@"OpenSans-Italic" size:14];
    font_Italic_12 = [UIFont fontWithName:@"OpenSans-Italic" size:18];
    
    //Initialize Aray.......
    services = [[NSMutableArray alloc] init];
    
    headerView = [[HeaderView alloc] init];
    
    spinner = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleGray];
    
    HUD = [[MBProgressHUD alloc] init];
    //HUD.color = [UIColor colorWithRed:0.23 green:0.50 blue:0.82 alpha:0.90];
    HUD.color = [UIColor clearColor];
    HUD.layer.backgroundColor = [[UIColor colorWithRed:70.0/255.0 green:70.0/255.0 blue:70.0/255.0 alpha:0.25] CGColor];
    HUD.delegate = self;
    
    //Create Dictionary...
    settingInfoDictionary = [[NSMutableDictionary alloc] init];
    
    allReadResultsArray = [[NSMutableArray alloc] init];
    allepclblsArray = [[NSMutableArray alloc] init];
    
    //Add BaudRate list to Dictionary....
    [settingInfoDictionary setObject:[NSArray arrayWithObjects:@"9600",@"115200",@"921600",@"19200",@"38400",@"57600",@"230400",@"460800", nil] forKey:@"BaudRate"];
    
    //Add BaudRate list to Dictionary....
    
    // [regoinlist addObject:[NSNumber numberWithInt: [[NSString stringWithFormat:@"%i",regions.list[i]] integerValue]]];
    [settingInfoDictionary setObject:[NSArray arrayWithObjects:@"0", nil] forKey:@"Region"];
    
    return self;
}

@end
