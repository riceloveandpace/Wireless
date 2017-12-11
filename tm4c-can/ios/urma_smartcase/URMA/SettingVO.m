//
//  SettingVO.m
//  URMA
//
//  Created by Raju on 08/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import "SettingVO.h"

@implementation SettingVO


-(id)init{
    self = [super init];
    if (self) {
        // Custom initialization
    }
    
    baudRate = @"9600";
    hostName = @"";
    region = @"";
    transportLog = FALSE;
    read = 0; 
    timeOut= @"250";
    rfOn= @"1000";
    rfOff= @"250";
    fastSearch = FALSE;
    connectState = FALSE;
    return self;
}

- (void) setBaudRate:(NSString *)string{
    baudRate = string;
}
- (NSString *) getBaudRate{
    return baudRate;
}

- (void) setHostName:(NSString *)string{
    hostName = string;
}
- (NSString *) getHostName{
    return hostName;
}

- (void) setRegion:(NSString *)string{
    region = string;
}
- (NSString *) getRegion{
    return  region;
}

- (void) setTransportLog:(BOOL)string{
    transportLog = string;
}
- (BOOL) getTransportLog{
    return transportLog;
}

- (void) setRead:(NSInteger)value{
    read = value;
}
- (NSInteger) getRead{
    return read;
}

- (void) setTimeOut:(NSString *)string{
    timeOut = string;
}
- (NSString *) getTimeOut{
    return timeOut;
}

- (void) setRfOn:(NSString *)string{
    rfOn = string;
}
- (NSString *) getRfOn{
    return rfOn;
}

-(void) setRfOff:(NSString *)string{
    rfOff = string;
}
- (NSString *) getRfOff{
    return rfOff;
}

- (void) setFastSearch:(BOOL)string{
    fastSearch = string;
}
- (BOOL) getFastSearch{
    return fastSearch;
}

- (void) setConnectState:(BOOL)string{
    connectState = string;
}
- (BOOL) getConnectState{
    return connectState;
}

@end
