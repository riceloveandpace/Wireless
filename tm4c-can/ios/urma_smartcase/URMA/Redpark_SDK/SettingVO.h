//
//  SettingVO.h
//  URMA
//
//  Created by Raju on 08/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SettingVO : NSObject{
    
    NSString *baudRate;
    NSString *hostName;
    NSString *region;
    BOOL transportLog;
    NSInteger read;
    NSString *timeOut;
    NSString *rfOn;
    NSString *rfOff;
    BOOL fastSearch;
    BOOL connectState;
}

- (void) setBaudRate:(NSString *)string;
- (NSString *) getBaudRate;

- (void) setHostName:(NSString *)string;
- (NSString *) getHostName;

- (void) setRegion:(NSString *)string;
- (NSString *) getRegion;

- (void) setTransportLog:(BOOL)string;
- (BOOL) getTransportLog;

- (void) setRead:(NSInteger)string;
- (NSInteger) getRead;

- (void) setTimeOut:(NSString *)string;
- (NSString *) getTimeOut;

- (void) setRfOn:(NSString *)string;
- (NSString *) getRfOn;

-(void) setRfOff:(NSString *)string;
- (NSString *) getRfOff;

- (void) setFastSearch:(BOOL)string;
- (BOOL) getFastSearch;

- (void) setConnectState:(BOOL)string;
- (BOOL) getConnectState;

@end
