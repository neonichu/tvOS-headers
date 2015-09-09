//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAdDeveloper/NSStreamDelegate-Protocol.h>

@class HTSHTTPServer, NSMutableArray, NSString, NSTimer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HTSHTTPServerConnection : NSObject <NSStreamDelegate>
{
    HTSHTTPServer *_server;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_source> *_readSource;
    _Bool _readActive;
    NSObject<OS_dispatch_source> *_writeSource;
    _Bool _writeActive;
    int _socket;
    int _socketRefCount;
    struct __CFHTTPMessage *_incomingMessage;
    NSMutableArray *_incomingQueue;
    NSMutableArray *_outputQueue;
    _Bool _outputStalled;
    _Bool _closeOnEmptyQueue;
    NSString *_identifier;
    double _lastActivity;
    NSTimer *_idleTimer;
}

@property(retain, nonatomic) NSTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic) double lastActivity; // @synthesize lastActivity=_lastActivity;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)printData:(id)arg1 withMessage:(id)arg2;
- (void)_shutdownIdleConnection:(id)arg1;
- (void)_closeInputStream;
- (void)_closeOutputStream;
- (void)_processStreamOutput;
- (void)_processStreamInput;
- (void)_processIncomingBytes:(const char *)arg1 length:(long long)arg2;
- (void)sendResponse:(id)arg1 withLatency:(double)arg2 closeAfterSending:(_Bool)arg3;
- (id)initWithServer:(id)arg1 socket:(int)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

