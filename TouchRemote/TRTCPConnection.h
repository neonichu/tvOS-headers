//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/TRTCPConnectionStreamDelegate-Protocol.h>

@class NSArray, NSString, TRTCPConnectionStream;
@protocol OS_dispatch_queue, OS_dispatch_source, TRTCPConnectionDelegate;

@interface TRTCPConnection : NSObject <TRTCPConnectionStreamDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _closed;
    TRTCPConnectionStream *_connectionStream;
    id <TRTCPConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_deviceIdentifier;
    NSObject<OS_dispatch_source> *_keepAliveTimer;
    NSArray *_relevantPacketEventClasses;
    int _uniqueID;
}

@property(readonly, nonatomic) int uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (void)_performNextRead;
- (void)_handleReceivedPacketEvent:(id)arg1;
- (void)sendPacketEvent:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)close;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) __weak id <TRTCPConnectionDelegate> delegate;
- (void)connectionStreamDidClose:(id)arg1;
- (void)dealloc;
- (id)_initWithUniqueID:(int)arg1 connectionStream:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

