//
//  UserMemoryEditData.m
//  URMA
//
//  Created by qvantel on 2/3/15.
//  Copyright (c) 2015 ThingMagic. All rights reserved.
//

#import "UserMemoryEditData.h"

@implementation UserMemoryEditData
@synthesize curIndex;
@synthesize curValue;
@synthesize prevValue;
@synthesize xValue,yValue;

-(id)init{
    self = [super init];
    if (self) {
        // Custom initialization
        curIndex = 0;
        curValue = 0;
        prevValue = 0;
        xValue= 0;
        yValue =0;
    }
    
    
    return self;
}

@end
