//
//  ReadResultsVO.m
//  URMA
//
//  Created by Raju on 29/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import "ReadResultsVO.h"

@implementation ReadResultsVO
//@synthesize epclblTxt,epcTagCount;

-(id)init{
    self = [super init];
    if (self) {
        // Custom initialization
    }
    epclblTxt = @"";
    epcTagCount = 0;
    epcServiceName = @"";
    
    antenna = 0;
    protocol = @"";
    phase = @"";
    frequency = @"";
    rssi = 0;
    timestampHigh = @"";
    
    return self;
}

-(void) setepclblTxt:(NSString *)string{
    epclblTxt = string;
}

- (NSString *) getepclblTxt{
    return epclblTxt;
}

-(void) setepcTagCount:(NSInteger)value{
    epcTagCount = value;
}

-(NSInteger) getepcTagCount{
    return epcTagCount;
}

-(void) setepcServiceName:(NSString *)string{
    epcServiceName = string;
}

-(NSString*) getepcServiceName{
    return epcServiceName;
}


-(void) setAntenna:(NSInteger)value{
    antenna = value;
}
-(NSInteger) getAntenna{
    return antenna;
}

-(void) setProtocol:(NSString *)string{
    protocol= string;
}
-(NSString*) getProtocol{
    return protocol;
}

-(void) setPhase:(NSString *)string{
    phase = string;
}
-(NSString*) getPhase{
    return  phase;
}

-(void) setFrequency:(NSString *)string{
    frequency = string;
}
-(NSString*) getFrequency{
    return frequency;
}

-(void) setRssi:(NSInteger )value{
    rssi = value;
}
-(NSInteger) getRssi{
    return rssi;
}

-(void) setTimestampHigh:(NSString *)string{
    timestampHigh = string;
}
-(NSString*) getTimestampHigh{
    return timestampHigh;
}



@end
