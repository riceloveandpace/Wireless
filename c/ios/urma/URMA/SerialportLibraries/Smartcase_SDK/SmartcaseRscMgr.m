//
//  SmartcaseRscMgr.m
//  EADemo
//
//  Created by qvantel on 10/13/14.
//
//

#import "SmartcaseRscMgr.h"
#import "Global.h"
#import <pthread.h>


@implementation SmartcaseRscMgr
{
    EADSessionController *_eaSessionController;
    NSMutableArray *_accessoryList;
    uint32_t _totalBytesRead;
    NSString *receivedProtocol;
    NSData *receivedData;
    BOOL IS_READY;
    pthread_mutex_t mutex;
}

- (id) init
{
    
    self = [super init];
    //NSLog(@"*********SRK -- INIT CALLED ******");
    
    [[EAAccessoryManager sharedAccessoryManager] registerForLocalNotifications];
   _eaSessionController = [EADSessionController sharedController];
   
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(_accessoryDidConnect:) name:EAAccessoryDidConnectNotification object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(_accessoryDidDisconnect:) name:EAAccessoryDidDisconnectNotification object:nil];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(sessionDataReceived:) name:EADSessionDataReceivedNotification object:nil];
    
    pthread_mutex_init(&mutex,NULL);
    
    IS_READY = FALSE;
//    if(self){
//        receivedData = [[NSData alloc] init];
//    }
    
    return self;
}

- (void)setDelegate:(id <SmartcaseRscMgrDelegate>)aDelegate {
    if (theDelegate != aDelegate) {
        theDelegate = aDelegate;
        
    }
}

-(NSMutableArray *)getAccessoryList
{
   // [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(_accessoryDidConnect:) name:EAAccessoryDidConnectNotification object:nil];
    
    _accessoryList = [[NSMutableArray alloc] initWithArray:[[EAAccessoryManager sharedAccessoryManager] connectedAccessories]];
        
    if([_accessoryList count] > 0)
    {
    
        if (theDelegate && [theDelegate respondsToSelector:@selector(letsStart)])
        {
            [theDelegate letsStart];
        }
    }
    
    return _accessoryList;
}



-(void) getAssignedProtocols
{
    
    
    if([_accessoryList count] > 0)
    {
    
        theAccessory = [_accessoryList objectAtIndex:0];
    }
    
   
    // control protocol string
    NSString *protocolString = @"com.trimble.mcs.smartcase.c0";
    
    // open a session to the accessory that supports the protocol
    
    NSArray *protocolStrings = [theAccessory protocolStrings];
    
    //[writelog writeData:[protocolString dataUsingEncoding:NSUTF8StringEncoding]];

    
    for(NSString *tmpString in protocolStrings) {
        if([tmpString isEqualToString:protocolString])
        {
            [_eaSessionController setupControllerForAccessory:theAccessory
                                           withProtocolString:protocolString];
                        
            EADSessionController *sessionController = [EADSessionController sharedController];
            [sessionController openSession];
        }
        else{
           // //NSLog(@"******** SRK --ELSE - tmpString --- %@",tmpString);
        }
    }
    
    [self sendRequestToGetProtocolList];
}

-(void)sendRequestToGetProtocolList
{
    
    //NSLog(@"*****SEND START*****");
    
    //[writelog writeData:[@"\nSEND COMMAND PROTOCOL \n" dataUsingEncoding:NSUTF8StringEncoding]];
    
    
    NSString *result = @"com.trimble.thingmagic.rfid";
    //[writelog writeData:[result dataUsingEncoding:NSUTF8StringEncoding]];
    
    NSMutableData *data = [NSMutableData data];
    if([result length] > 0)
    {
        const char *buf = [result UTF8String];
        uint32_t len1 = strlen(buf) + 3;
        
        unsigned char singleNumberString[3];
        
        
        singleNumberString[0] =  (char)(len1  & 0xFF);
        singleNumberString[1] =  (char)((len1 >> 8) & 0xFF);
        singleNumberString[2] =  (char)1;
        
        [data appendBytes:(const void *)singleNumberString length:sizeof(unsigned char) * 3];
        [data appendBytes:[result cStringUsingEncoding:NSUTF8StringEncoding] length:result.length];
        
        //NSLog(@"*****SEND :HEADER DATA : %@", data);
        //[writelog writeData:[[NSString stringWithFormat:@"\n%@",data] dataUsingEncoding:NSUTF8StringEncoding]];

        [[EADSessionController sharedController] writeData:data];
    }
    
    
}

- (void)sessionDataReceived:(NSNotification *)notification
{
    //NSLog(@"***** DATA RECEIVED *****");

    EADSessionController *sessionController = (EADSessionController *)[notification object];
    uint32_t bytesAvailable = 0;
    
    NSData *data;
    _totalBytesRead = 0;
    
    while ((bytesAvailable = [sessionController readBytesAvailable]) > 0) {
        data = [sessionController readData:bytesAvailable];
        if (data) {
            _totalBytesRead += bytesAvailable;
        }
    }
    
    //NSLog(@"*****READ: TOTAL BYTES READ : %d", _totalBytesRead);
    //[writelog writeData:[[NSString stringWithFormat:@"READ: TOTAL BYTES READ : %d \n", _totalBytesRead] dataUsingEncoding:NSUTF8StringEncoding]];
    //[writelog writeData:[[NSString stringWithFormat:@"READ: DATA : %@ \n", data] dataUsingEncoding:NSUTF8StringEncoding]];

    [self decodeRecivedData:data andLength:_totalBytesRead];
    
}

-(void)decodeRecivedData:(NSData *)data andLength:(uint32_t)bytesRead
{
    
    //NSLog(@"RECEIVED STRING -- %@", data);
    
    if([data length] > 0)
    {
    
        //unsigned char *readReceiveData = (unsigned char *)[data bytes];
        
//        int value1 = readReceiveData[0];
//        int value2 = readReceiveData[1];
//        int value3 = readReceiveData[2];
        
        //NSLog(@"*****V1 = %d \n V2 = %d \n V3 = %d", value1, value2, value3);
        

        
        NSData *subData = [data subdataWithRange:NSMakeRange(3, bytesRead - 3)];
        
        NSString  *receivedString= [[NSString alloc] initWithData:subData encoding:NSUTF8StringEncoding];
        //NSLog(@"*****READ:  RECEIVED STRING : %@", receivedString);
        //[writelog writeData:[[NSString stringWithFormat:@"*****READ:  RECEIVED STRING : %@", receivedString] dataUsingEncoding:NSUTF8StringEncoding]];
        
        NSArray * array = [receivedString componentsSeparatedByString:@","];
        
        //[writelog writeData:[[NSString stringWithFormat:@"READ:  RECEIVED Array : -- %@ \n", array] dataUsingEncoding:NSUTF8StringEncoding]];
    
        if([array count] > 0)
        {
            receivedProtocol = [array objectAtIndex:1];
        }
        
        IS_READY = TRUE;
        
        //[self openReceivedProtocol];
        
        // delegate is called once open is ready
        if (theDelegate && [theDelegate respondsToSelector:@selector(cableConnected:)])
        {
            [theDelegate cableConnected:receivedProtocol];
        }
    }
    [self closeControlProtcol];
    
}

-(void)closeControlProtcol
{
    
    // remove the observers
//    [[NSNotificationCenter defaultCenter] removeObserver:self name:EAAccessoryDidConnectNotification object:nil];
//    [[NSNotificationCenter defaultCenter] removeObserver:self name:EAAccessoryDidDisconnectNotification object:nil];
    [[NSNotificationCenter defaultCenter] removeObserver:self name:EADSessionDataReceivedNotification object:nil];
    
//    [[EAAccessoryManager sharedAccessoryManager] unregisterForLocalNotifications];

    
    //Close Control Protocol
    EADSessionController *sessionController = [EADSessionController sharedController];
    [sessionController closeSession];
    
    
}

-(void) open:(NSString *)newProtocolString
{
    
//    [[EAAccessoryManager sharedAccessoryManager] registerForLocalNotifications];
//    
//    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(_accessoryDidConnect:) name:EAAccessoryDidConnectNotification object:nil];
//    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(_accessoryDidDisconnect:) name:EAAccessoryDidDisconnectNotification object:nil];
    
    // watch for received data from the accessory
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(newDataReceived:) name:EADSessionDataReceivedNotification object:nil];
    
    //[self getAssignedProtocols];
    
    [self openReceivedProtocol:newProtocolString];
    
}

-(void)openReceivedProtocol:(NSString *)newProtocolString
{
    //[self closeControlProtcol];
    
    EADSessionController *sessionController = [EADSessionController sharedController];
    [sessionController setupControllerForAccessory:theAccessory withProtocolString:newProtocolString];
    
    
    //NSLog(@"*****SEND: SET Protocol String: %@",newProtocolString);
    
    [sessionController openSession];
    
     //NSLog(@"*****DEVICE IS READY TO SEND : %d",IS_READY);
    
    //[writelog writeData:[[NSString stringWithFormat:@"*****SEND: SET Accessory : %@ \n",theAccessory] dataUsingEncoding:NSUTF8StringEncoding]];
    
    //[writelog writeData:[[NSString stringWithFormat:@"*****SEND: SET Protocol String: %@ \n",newProtocolString] dataUsingEncoding:NSUTF8StringEncoding]];
    
     //[writelog writeData:[[NSString stringWithFormat:@"*****DEVICE IS READY TO SEND : %d \n",IS_READY] dataUsingEncoding:NSUTF8StringEncoding]];
    
 
}

-(BOOL)getProtocolStatus
{
    //[writelog writeData:[[NSString stringWithFormat:@"IS _READY at getPROTCOL : %d \n",IS_READY] dataUsingEncoding:NSUTF8StringEncoding]];
    return IS_READY;
}



-(void)close
{
     //IS_READY = FALSE;
    
    //NSLog(@"***** SRK CLOSE CALLED ******");
    
    receivedData = nil;
    
    
    // Remove Notifications
    [[NSNotificationCenter defaultCenter] removeObserver:self name:EADSessionDataReceivedNotification object:nil];
//    [[NSNotificationCenter defaultCenter] removeObserver:self name:EAAccessoryDidConnectNotification object:nil];
//    [[NSNotificationCenter defaultCenter] removeObserver:self name:EAAccessoryDidDisconnectNotification object:nil];
//    
//    [[EAAccessoryManager sharedAccessoryManager] unregisterForLocalNotifications];

    
    //Close Control Protocol
    EADSessionController *sessionController = [EADSessionController sharedController];
    [sessionController closeSession];


}

- (void) writeData:(NSData *)data
{
    [[EADSessionController sharedController] writeData:data];
}

#pragma mark Internal

- (void)_accessoryDidConnect:(NSNotification *)notification {
 
    //NSLog(@"******* SRK CABLE CONNECTED ******** PROTCOL");
    
    EAAccessory *connectedAccessory = [[notification userInfo] objectForKey:EAAccessoryKey];
    
    int connectedAccessoryIndex = 0;
    for(EAAccessory *accessory in _accessoryList) {
        if ([connectedAccessory connectionID] == [accessory connectionID]) {
            [_accessoryList removeObjectAtIndex:connectedAccessoryIndex];
        }
        connectedAccessoryIndex++;
    }
    
  [_accessoryList addObject:connectedAccessory];
    
    if([_accessoryList count] > 0)
    {
        
        theAccessory = [_accessoryList objectAtIndex:0];
    }

    //[writelog writeData:[@"\n******* SRK CABLE CONNECTED ******** \n" dataUsingEncoding:NSUTF8StringEncoding]];

    
    // control protocol string
    //NSString *protocolString = @"com.trimble.mcs.smartcase.c0";
    
     //delegate is called once open is ready
    if (theDelegate && [theDelegate respondsToSelector:@selector(cableConnected:)])
    {
        [theDelegate cableConnected:receivedProtocol];
    }
    
  
}

- (void)_accessoryDidDisconnect:(NSNotification *)notification {
    
    //NSLog(@"******* SRK CABLE DISCONNECTED ******** PROTCOL");
    
    //[writelog writeData:[@"\n******* SRK CABLE DISCONNECTED ******** \n" dataUsingEncoding:NSUTF8StringEncoding]];

    receivedData = nil;
    
    // Remove Notifications
    [[NSNotificationCenter defaultCenter] removeObserver:self name:EADSessionDataReceivedNotification object:nil];
  
    
    EAAccessory *disconnectedAccessory = [[notification userInfo] objectForKey:EAAccessoryKey];

    int disconnectedAccessoryIndex = 0;
    for(EAAccessory *accessory in _accessoryList) {
        if ([disconnectedAccessory connectionID] == [accessory connectionID]) {
            break;
        }
        disconnectedAccessoryIndex++;
    }
    
    if (disconnectedAccessoryIndex < [_accessoryList count]) {
        [_accessoryList removeObjectAtIndex:disconnectedAccessoryIndex];
        
    } else {
        //NSLog(@"could not find disconnected accessory in accessory list");
    }
    

    
//    // Control Protocol
//    EADSessionController *sessionController = [EADSessionController sharedController];
//    [sessionController closeSession];
    
    // delegate for cable disconnected
    if (theDelegate && [theDelegate respondsToSelector:@selector(cableDisconnected)])
    {
        [theDelegate cableDisconnected];
    }
}

- (void)newDataReceived:(NSNotification *)notification
{
    //NSLog(@"***** NEW DATA RECEIVED *****");
    
    //[writelog writeData:[@"***** NEW DATA RECEIVED ***** \n" dataUsingEncoding:NSUTF8StringEncoding]];

    EADSessionController *sessionController = (EADSessionController *)[notification object];

    uint32_t bytesAvailable = 0;
    _totalBytesRead = 0;
    
    NSData *data  =nil;
    
    while ((bytesAvailable = [sessionController readBytesAvailable]) > 0) {
        data = [sessionController readData:bytesAvailable];
        if (data) {
            _totalBytesRead += bytesAvailable;
        }
        //[writelog writeData:[@"\n **** WHILE LOOP ****** \n" dataUsingEncoding:NSUTF8StringEncoding]];

    }
    
    //NSLog(@"*****READ: NEW TOTAL BYTES READ : %d", _totalBytesRead);
    //NSLog(@"*****READ: RECEIVED DATA : %@", data);
    
    if (_totalBytesRead > 0)
    {
        pthread_mutex_lock(&mutex);
        receivedData = nil;
        //receivedData = data;
        receivedData = [[NSData alloc] initWithData:data];

        
        pthread_mutex_unlock(&mutex);
        
        //[writelog writeData:[[NSString stringWithFormat:@"NEW DATA -- %@ \n", data] dataUsingEncoding:NSUTF8StringEncoding]];

        if (theDelegate && [theDelegate respondsToSelector:@selector(readBytesAvailable:)])
        {
            [theDelegate readBytesAvailable:_totalBytesRead];
        }
    }
    
    
    
}

- (void)smartCaseReceived:(NSNotification *)notification
{
    //NSLog(@"SRK SMART CASE RECIVED NOTOFICATION" );
   
}

- (int) getReadBytesAvailable
{
    return _totalBytesRead;
}

- (NSString *) getStringFromBytesAvailable
{
    return [NSString stringWithUTF8String:[receivedData bytes]];
}

- (NSData *) getDataFromBytesAvailable
{
    //[writelog writeData:[[NSString stringWithFormat:@"\n ReceivedData -- %@ \n", receivedData] dataUsingEncoding:NSUTF8StringEncoding]];

     NSData *localData;
    
    pthread_mutex_lock(&mutex);
    localData = [[NSData alloc] initWithData:receivedData];
    pthread_mutex_unlock(&mutex);
    
    return localData;
}


#pragma mark EAAccessoryDelegate
- (void)accessoryDidDisconnect:(EAAccessory *)accessory
{
    // do something ...
}


-(void)receivedDataDelegate:(NSMutableData *)data
{
    
}

@end


