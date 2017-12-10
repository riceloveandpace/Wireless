/**
 *  @file RDRscMgrInterface.m
 *  @brief urma
 *  @author Raju
 *  @date 08/03/14
 */

/*
 * Copyright (c) 2014 Trimble Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#import "RDRscMgrInterface.h"

#include <sys/time.h>
#include <unistd.h>
#import "Global.h"

static RDRscMgrInterface *_sharedInterface = nil;
static pthread_mutex_t *mutex_buffer;
static  pthread_mutex_t mutex_buf;

@implementation RDRscMgrInterface


uint32_t msglength;


+ (RDRscMgrInterface*)sharedInterface
{
    static dispatch_once_t pred = 0;
    dispatch_once(&pred, ^{
        _sharedInterface = [[self alloc] init];
    });
    return _sharedInterface;
}

- (id)init
{
    self = [super init];
    
    
    if (self)
    {
        _bufferedData = [NSMutableData data];
        _lastReadIndex = 0;
        _isAppLaunchCableConnected= FALSE;
        
        NSArray *connectAccesseries =   [[EAAccessoryManager sharedAccessoryManager] connectedAccessories];
        NSString *manufacturer = @"";
        
        if([connectAccesseries count] > 0)
        {
        
            manufacturer = [[connectAccesseries objectAtIndex:0] manufacturer];
        }
        
        if([manufacturer containsString:@"Trimble"])
        {
            isTrimble = TRUE;
        }
        else
        {
            isTrimble = FALSE;
        }
        
        pthread_mutex_init(&mutex_buf,NULL);
        mutex_buffer = &mutex_buf;
    
        // Create and start the comm thread.  We'll use this thread to manage the rscMgr so
        // we don't tie up the UI thread.
        if (commThread == nil)
        {
            commThread = [[NSThread alloc] initWithTarget:self
                                                 selector:@selector(startCommThread:)
                                                   object:nil];
            [commThread start];  // Actually create the thread
            
        }
     
    }
    
    return self;
}

- (void) startCommThread:(id)object
{
    
    if (isTrimble)
    {
        _scMgr = [[SmartcaseRscMgr alloc] init];
        _scMgr.delegate = self;
        NSMutableArray *tmpArray = [_scMgr getAccessoryList];
    }
    else
    {
        _rscMgr = [[RscMgr alloc] init];
        
        [_rscMgr setBaud:selectedBaudRate];
        [_rscMgr setDataSize:kDataSize8];
        [_rscMgr setParity:kParityNone];
        [_rscMgr setStopBits:kStopBits1];
        
        _rscMgr.delegate = self;
    }
    
    // run the run loop
    [[NSRunLoop currentRunLoop] run];

}

- (void)startDeviceTest
{
    
}

- (void) resetCounters
{
    txCount = rxCount = errCount = 0;
    seqNum = 0;
    
//    serialPortControl portCtl;
//    portCtl.rxFlush = 1;
//    portCtl.txFlush = 1;
//    [_rscMgr setPortControl:&portCtl requestStatus:NO];
}

#pragma mark - SmartcaseRscMgrDelegate method


-(void)letsStart
{
    
    if (isTrimble)
    {
        [_scMgr  getAssignedProtocols];
        
        
        _cableState = kCableConnected;
        
        if (_delegate && [_delegate respondsToSelector:@selector(rscMgrCableConnected)])
        {
            [_delegate rscMgrCableConnected];
        }
    }

}

- (void) cableConnected:(NSString *)protocol
{
    NSLog(@"******Cable Connected at RDRscMgrInterface : %d", _isAppLaunchCableConnected);
    
    if (isTrimble)
    {
    
        if(![_scMgr getProtocolStatus])
        {
            [_scMgr  getAssignedProtocols];
        }

        _recivedProtocolString = protocol;
        _cableState = kCableConnected;
    }
    else
    {
    
        NSLog(@"Cable Connected: %@", protocol);
        
        [self resetCounters];
        
        pthread_mutex_lock(mutex_buffer);
        _bufferedData = nil;
        _bufferedData = [NSMutableData data];
        
        pthread_mutex_unlock(mutex_buffer);
        
        
        _cableState = kCableConnected;
        
        if (_delegate && [_delegate respondsToSelector:@selector(rscMgrCableConnected)])
        {
            [_delegate rscMgrCableConnected];
        }
    }
    
}


- (void) cableDisconnected
{
    //NSLog(@"***** Cable disconnected *********");
    
    
    if (isTrimble)
    {
    
        _cableState = kCableNotConnected;
        
        if (_delegate && [_delegate respondsToSelector:@selector(rscMgrCableDisconnected)])
        {
            [_delegate rscMgrCableDisconnected];
        }
        
    }
    else
    {
        NSLog(@"Cable disconnected");
        
        _cableState = kCableNotConnected;
        
        if (_delegate && [_delegate respondsToSelector:@selector(rscMgrCableDisconnected)])
        {
            [_delegate rscMgrCableDisconnected];
        }
        
        [self resetCounters];
    }
}

- (void) portStatusChanged
{
    //NSLog(@"portStatusChanged");
    
    if (!isTrimble)
    {
        serialPortStatus status;
        [_rscMgr getPortStatus: &status];
        
        //DLog(@"Serial port status txdiscard %d rxoverrun %d rxparity %d rxframe %d txack %d msr %d ",status.txDiscard,status.rxOverrun,status.rxParity,status.rxFrame,status.txAck,status.msr);
        
        //DLog(@"Portstatus rtsDtrState %d rxflowstat %d txflowstat %d returnresponse %d", status.rtsDtrState, status.rxFlowStat, status.txFlowStat, status.returnResponse);
    }
    
}

- (void) readBytesAvailable:(UInt32)length
{
    
    if (isTrimble)
    {
        ////[writelog writeData:[[NSString stringWithFormat:@"***** NEW DATA RECEIVED with BYTES***** %d",length]dataUsingEncoding:NSUTF8StringEncoding]];
        
        ////NSLog(@"***** NEW DATA RECEIVED with BYTES***** %d",length);
        pthread_mutex_lock(mutex_buffer);
        
        _bufferedData =  [[_scMgr getDataFromBytesAvailable] mutableCopy];
        ////NSLog(@"***** NEW DATA RECEIVED ***** %@",_bufferedData);
        ////[writelog writeData:[[NSString stringWithFormat:@"BUFFER DATA -- %@ \n", _bufferedData] dataUsingEncoding:NSUTF8StringEncoding]];
        
        pthread_mutex_unlock(mutex_buffer);
    }
    else
    {
        
        UInt8 rxBuffer[BUFFER_LEN] = {0};
        
        //DLog(@"readBytesAvailable: %d", (unsigned int)length);
        int len;
        
        pthread_mutex_lock(mutex_buffer);
        //NSLog(@"before read _bufferedData length: %d", [_bufferedData length]);
        len = [_rscMgr read:rxBuffer length:BUFFER_LEN];
        //NSLog(@"Actual read  data  length: %d", len);
        
        /*
        DLog(@"** RXBuffer ****");
        for(int i =0; i < len; i++)
        {
            DLog(@"%x",rxBuffer[i]);
        }
        DLog(@"** RXBuffer End****");
         */
        

        [_bufferedData appendBytes:rxBuffer length:len];
        
        //DLog(@"after read _bufferedData length: %d", [_bufferedData length]);

        
        NSMutableString *stringBuffer = [NSMutableString stringWithCapacity:length*2];
        const unsigned char *dataBuffer = [_bufferedData bytes];
        dataBuffer = [_bufferedData bytes];
        for (int i=0; i < [_bufferedData length]; ++i)
        {
            [stringBuffer appendFormat:@"%x ", dataBuffer[i]];
        }
         
        pthread_mutex_unlock(mutex_buffer);
        
        //NSLog(@"Data read: %@", stringBuffer);

    }
}





-(void)receivedTimeOutFromCAPI
{
    //NSLog(@"**********RDRscMgrReceiveBytes receivedTimeOutFromCAPI");
    [[NSNotificationCenter defaultCenter] postNotificationName:@"STOPREADACTION"  object:self];
}

// called when a response is received to a getPortConfig call
- (void) didReceivePortConfig
{
    ULog(@"didReceivePortConfig");
    
}

// GPS Cable only - called with result when loop test completes.
- (void) didGpsLoopTest:(BOOL)pass
{
    ULog(@"didGpsLoopTest");
    
}

- (BOOL) rscMessageReceived:(UInt8 *)msg TotalLength:(int)len
{
    DLog(@"rscMessageRecieved:TotalLength:");
    return FALSE;
}

#pragma mark - C_API

TMR_Status RDRscMgrOpen (void *self)
{
   
    if (!isTrimble)
    {
         DLog(@"****** RDRscMgrOpen ******");
        
        RscMgr *rscMgr = [[RDRscMgrInterface sharedInterface] rscMgr];
        
        serialPortConfig portCfg;
        [rscMgr getPortConfig:&portCfg];
        portCfg.txAckSetting = 1;
        portCfg.rxForwardingTimeout = 5; // Good:10;
        portCfg.rxForwardCount=255;// Good: 255
        [rscMgr setPortConfig:&portCfg requestStatus: NO];
        
        serialPortControl portCtl;
        portCtl.rxFlush = 1;
        portCtl.txFlush = 1;
        [rscMgr setPortControl:&portCtl requestStatus:NO];
        
        
        [rscMgr open];
    }
    
    return TMR_SUCCESS;
}


TMR_Status RDRscMgrSendBytes (TMR_SR_SerialTransport *this, uint32_t length,
                                  uint8_t* message, const uint32_t timeoutMs)
{
    
        int lengthOfBufferedData = 0;
        NSMutableString *str = [NSMutableString string];
        int i;
        for (i = 0; i < length; i++)
        {
            [str appendFormat:@"%02x ", message[i]];
        }
        pthread_mutex_lock(mutex_buffer);
        
        lengthOfBufferedData = [[RDRscMgrInterface sharedInterface].bufferedData length];

        pthread_mutex_unlock(mutex_buffer);

        if(isTrimble)
        {
        
        if(message[2] == 0x91)
            {
                DLog(@"This Antenna Command... reframe it");
                //10 ff 05 91 02 01 01 02 02 2d c0
                /*
                 // Antenna 1 and 2
                 message[0] = 0x10;
                 message[1] = 0xff;
                 message[2] = 0x05;
                 message[3] = 0x91;
                 message[4] = 0x02;
                 message[5] = 0x01;
                 message[6] = 0x01;
                 message[7] = 0x02;
                 message[8] = 0x02;
                 message[9] = 0x2d;
                 message[10] = 0xc0;
                 */
                
                // FF  03  91  02  02  02  41  C6 Antenna 2
                message[0] = 0xff;
                message[1] = 0x03;
                message[2] = 0x91;
                message[3] = 0x02;
                message[4] = 0x02;
                message[5] = 0x02;
                message[6] = 0x41;
                message[7] = 0xc6;
                 
               
            }
        }
        
        if(message[2] == 0x2f && message[5] == 0x02)
        {
            NSLog(@"Stop read Command send");
        }
        pthread_mutex_lock(mutex_buffer);

  
        if (lengthOfBufferedData)
        {
            msglength = 0;
            NSMutableString *stringBuffer = [NSMutableString stringWithCapacity:length*2];
            const unsigned char *dataBuffer = [[RDRscMgrInterface sharedInterface].bufferedData bytes];
            NSInteger i;
            for (i=0; i < lengthOfBufferedData; ++i)
            {
                [stringBuffer appendFormat:@"%x ", dataBuffer[i]];
            }
            DLog(@"Data in buffer before deleting it: %@", stringBuffer);
            
            DLog(@"Data already exists in bufferedData with size %d, deleting it", lengthOfBufferedData);
            
            if(!isTrimble)
            {
                serialPortControl portCtl;
                portCtl.rxFlush = 1;
                portCtl.txFlush = 1;

                [[RDRscMgrInterface sharedInterface].rscMgr setPortControl:&portCtl requestStatus:NO];
                
            }
            [RDRscMgrInterface sharedInterface].bufferedData = nil;
            [RDRscMgrInterface sharedInterface].bufferedData = [NSMutableData data];
        }
    
        DLog(@"RDRscMgrSendBytes messageLenth: %d %@", length, str);
        
        NSMutableData *data = [NSMutableData data];
        
        if(isTrimble)
        {
            if(message[2] == 0x91)
            {
                length = 8;// 11;
            }
            
            [data appendBytes:(const void *)message length:sizeof(unsigned char) * length];
            
            
            [[[RDRscMgrInterface sharedInterface] scMgr] writeData:data];
        }
        else
        {
//              i = [[[RDRscMgrInterface sharedInterface] rscMgr] write:message Length:length];
            
            NSData *messageData = [NSData dataWithBytes:message length:length];
            
            [[RDRscMgrInterface sharedInterface] performSelector:@selector(startWriteOnThread:) onThread:[RDRscMgrInterface sharedInterface]->commThread withObject:messageData waitUntilDone:YES];

        
        }
    
        pthread_mutex_unlock(mutex_buffer);
        return TMR_SUCCESS;
}


-(void)startWriteOnThread:(NSData *)messageData
{
    
     [[[RDRscMgrInterface sharedInterface] rscMgr] write:(uint8_t *)[messageData bytes] Length:[messageData length]];
}

TMR_Status RDRscMgrReceiveBytes (TMR_SR_SerialTransport *this, uint32_t length,
                                 uint32_t* messageLength, uint8_t* message, const uint32_t timeoutMs)
{
    TMR_Status status = TMR_ERROR_TIMEOUT;

    uint8_t *msgPtr = message;
    
        DLog(@"RDRscMgrReceiveBytes: %d messageLength: %d, timeout: %d", length, *messageLength, timeoutMs);
        
        NSRange rangeToWrite;
        struct timeval currentTime, initialTime;
        int lengthOfBufferedData = 0;
        if (*messageLength == -1)
        {
            *messageLength = 0;
        }
        
        gettimeofday(&initialTime, NULL);
        gettimeofday(&currentTime, NULL);
        
        double currentMillis, initialMillis;
        currentMillis = initialMillis = (initialTime.tv_sec * 1000) + (initialTime.tv_usec / 1000);
        
        while((currentMillis - initialMillis) < timeoutMs)
        {
            
            pthread_mutex_lock(mutex_buffer);
            
            
            lengthOfBufferedData = [[RDRscMgrInterface sharedInterface].bufferedData length];
            
            pthread_mutex_unlock(mutex_buffer);

            
            if ((lengthOfBufferedData >= (length)) && lengthOfBufferedData > 0)
            {
                pthread_mutex_lock(mutex_buffer);
                
                //            NSMutableString *stringBuffer = [NSMutableString stringWithCapacity:length*2];
                //            const unsigned char *dataBuffer = [[RDRscMgrInterface sharedInterface].bufferedData bytes];
                //            NSInteger i;
                //            for (i=0; i < [[RDRscMgrInterface sharedInterface].bufferedData length]; ++i)
                //            {
                //                [stringBuffer appendFormat:@"%x ", dataBuffer[i]];
                //            }
                //            //NSLog(@"Data in buffer while writing: %@", stringBuffer);
                
                
                @try
                {
                    rangeToWrite = NSMakeRange( 0, length);
                    
                    memcpy(msgPtr, [[[RDRscMgrInterface sharedInterface].bufferedData subdataWithRange:rangeToWrite] bytes], length);
                    
                    msgPtr += length;
                    *messageLength += length;
                }
                @catch (NSException *exception)
                {
                    //NSLog(@"EXCEPTION %@",exception);
                    
                    NSLog(@"******* EXCEPTION **********");
                }

                status = TMR_SUCCESS;
                
                @try
                {
                    [[RDRscMgrInterface sharedInterface].bufferedData replaceBytesInRange:rangeToWrite withBytes:NULL length:0];
                    
                }
                @catch (NSException *exception)
                {
                    NSLog(@"************ EXCEPTION %@",exception);
                }
               
                pthread_mutex_unlock(mutex_buffer);
                break;
            }
            else
            {
                gettimeofday(&currentTime, NULL);
                
                currentMillis = (currentTime.tv_sec * 1000) + (currentTime.tv_usec / 1000);
                usleep(10 * 1000);
            }
            
        }
        
        if (status == TMR_ERROR_TIMEOUT)
        {
            ////[writelog writeData:[[NSString stringWithFormat:@" \n RDRscMgrReceiveBytes TIMEOUT \n"] dataUsingEncoding:NSUTF8StringEncoding]];
            
            NSLog(@"**********RDRscMgrReceiveBytes TIMEOUT");
           // [[RDRscMgrInterface sharedInterface] receivedTimeOutFromCAPI];
        }

    return status;
}



TMR_Status setRDRscMgrBaudRate (TMR_SR_SerialTransport *this, uint32_t rate)
{
    NSLog(@"setRDRscMgrBaudRate:%d", rate);
    
    if(!isTrimble)
    {
        [[[RDRscMgrInterface sharedInterface] rscMgr] setBaud:rate];
    }
    
    return TMR_SUCCESS;
}



TMR_Status RDRscMgrshutdown (TMR_SR_SerialTransport *this)
{
    NSLog(@"RDRscMgrReceiveBytes");
    
    return TMR_SUCCESS;
}



TMR_Status RDRscMgrFlush (TMR_SR_SerialTransport *this)
{
    NSLog(@"RDRscMgrFlush");
    
    if(!isTrimble)
    {
        RscMgr *rscMgr = [[RDRscMgrInterface sharedInterface] rscMgr];
        
        [RDRscMgrInterface sharedInterface].lastReadIndex = 0;
        
        serialPortControl portCtl;
        portCtl.rxFlush = 1;
        portCtl.txFlush = 1;
        
        [rscMgr setPortControl:&portCtl requestStatus:NO];
    }
    
    return TMR_SUCCESS;
}

@end
