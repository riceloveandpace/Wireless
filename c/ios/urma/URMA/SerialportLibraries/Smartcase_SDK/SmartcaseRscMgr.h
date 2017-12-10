//
//  SmartcaseRscMgr.h
//  EADemo
//
//  Created by qvantel on 10/13/14.
//
//

#import <Foundation/Foundation.h>
#import <ExternalAccessory/ExternalAccessory.h>
#import "EADSessionController.h"


@protocol SmartcaseRscMgrDelegate;

@interface SmartcaseRscMgr : NSObject< EAAccessoryDelegate, NSStreamDelegate>
{
    id <SmartcaseRscMgrDelegate> theDelegate;
    
    
    // EA api variables
    EASession *theSession;
    EAAccessory *theAccessory;
    NSArray *supportedProtocols;
    NSString *connectedProtocol;
}


-(NSMutableArray *)getAccessoryList;

- (void) setDelegate:(id <SmartcaseRscMgrDelegate>) delegate;



// Initializes the RscMgr and reigsters for accessory connect/disconnect notifications.
- (id) init;

// establish communication with the Redpark Serial Cable.  This call will also
// configure the serial port based on defaults or prior calls to set the port config
// (see setBaud, setDataSize, ...)
//- (void) open;

-(void) open:(NSString *)newProtocolString;

-(void) getAssignedProtocols;

- (int) getReadBytesAvailable;


// same as write: but takes an NSData object instead of a C style buffer
- (void) writeData:(NSData *)data;


// returns an NSString containing the available bytes in rx fifo as a string.
// assumes the data is ASCII and encoded as UTF8
// calling this clears rx fifo similar to read:
- (NSString *) getStringFromBytesAvailable;

// returns an NSData containing the available bytes in rx fifo
// calling this clears rx fifo similar to read:
- (NSData *) getDataFromBytesAvailable;

- (BOOL)getProtocolStatus;

- (void) close;

@end

@protocol SmartcaseRscMgrDelegate  <NSObject>

-(void)letsStart;

//  Serial Cable has been connected and/or application moved to foreground.
// protocol is the string which matched from the protocol list passed to initWithProtocol:
- (void) cableConnected:(NSString *)protocol;

//  Serial Cable was disconnected and/or application moved to background
- (void) cableDisconnected;


// bytes are available to be read (user should call read:, getDataFromBytesAvailable, or getStringFromBytesAvailable)
//- (void) readBytesAvailableFromTrimble:(uint32_t)length andData:(NSData *)data;

- (void) readBytesAvailable:(uint32_t)length;


@end