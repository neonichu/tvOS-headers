//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSBiometrics : NSObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    SSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)_sendMessage:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setAllowed:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setEnabled:(_Bool)arg1 withAuthToken:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setEnabled:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)resetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)renewPurchaseTokenWithAuthToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

