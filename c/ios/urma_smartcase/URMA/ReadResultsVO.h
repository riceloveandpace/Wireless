//
//  ReadResultsVO.h
//  URMA
//
//  Created by Raju on 29/09/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ReadResultsVO : NSObject
{
    NSString *epclblTxt;
    NSInteger epcTagCount;
    NSString *epcServiceName;
    
    NSInteger antenna;
    NSString *protocol;
    NSString *phase;
    NSString *frequency;
    NSInteger rssi;
    NSString *timestampHigh;
    
}


-(void) setepclblTxt:(NSString *)string;
- (NSString *) getepclblTxt;

-(void) setepcTagCount:(NSInteger)value;
-(NSInteger) getepcTagCount;

-(void) setepcServiceName:(NSString *)string;
-(NSString*) getepcServiceName;

-(void) setAntenna:(NSInteger)value;
-(NSInteger) getAntenna;

-(void) setProtocol:(NSString *)string;
-(NSString*) getProtocol;

-(void) setPhase:(NSString *)string;
-(NSString*) getPhase;

-(void) setFrequency:(NSString *)string;
-(NSString*) getFrequency;

-(void) setRssi:(NSInteger)value;
-(NSInteger) getRssi;

-(void) setTimestampHigh:(NSString *)string;
-(NSString*) getTimestampHigh;

@end
