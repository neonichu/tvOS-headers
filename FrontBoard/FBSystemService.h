//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSerialQueue, FBSystemServiceServer;
@protocol FBSystemServiceDelegate;

@interface FBSystemService : NSObject
{
    FBSSerialQueue *_queue;
    int _pendingExit;
    id <FBSystemServiceDelegate> _delegate;
    FBSystemServiceServer *_server;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FBSystemServiceServer *server; // @synthesize server=_server;
@property(nonatomic) id <FBSystemServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) FBSSerialQueue *queue; // @synthesize queue=_queue;
- (_Bool)_isWhitelistedLaunchSuspendedApp:(id)arg1;
- (_Bool)_requiresOpenApplicationEntitlement:(id)arg1 options:(id)arg2 originalSource:(id)arg3;
- (void)_performExitTasksForRelaunch:(_Bool)arg1;
- (void)handleActions:(id)arg1 source:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)isPasscodeLockedOrBlockedWithResult:(CDUnknownBlockType)arg1;
- (void)_activateURL:(id)arg1 application:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (void)activateURL:(id)arg1 application:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (void)_reallyActivateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 sequenceNumber:(unsigned long long)arg5 cacheGUID:(id)arg6 ourSequenceNumber:(unsigned long long)arg7 ourCacheGUID:(id)arg8 withResult:(CDUnknownBlockType)arg9;
- (_Bool)_shouldPendRequestForClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4;
- (void)_logPendedActivationRequestForMismatchedClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4;
- (void)_activateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (void)activateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (void)canActivateApplication:(id)arg1 source:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 source:(id)arg5;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 source:(id)arg5;
- (void)_terminateProcess:(id)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4;
- (void)exitAndRelaunch:(_Bool)arg1 withOptions:(unsigned long long)arg2;
- (void)setPendingExit:(_Bool)arg1;
@property(readonly, getter=isPendingExit) _Bool pendingExit;
- (id)systemApplicationBundleIdentifier;
- (void)prepareForExitAndRelaunch:(_Bool)arg1;
- (void)exitAndRelaunch:(_Bool)arg1;
- (void)shutdownWithOptions:(unsigned long long)arg1;
- (void)shutdownAndReboot:(_Bool)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

