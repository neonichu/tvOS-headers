//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/LSUserActivityClientResponseProtocol-Protocol.h>

@class NSMapTable, NSString, NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface LSUserActivityManager : NSObject <LSUserActivityClientResponseProtocol>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serverQ;
    _Bool _connectionInitializationSucceeded;
    _Bool _needToSendInitialMessage;
    NSMapTable *_userActivitiesByUUID;
    _Bool _supportsActivityContinuation;
    _Bool _activityContinuationIsEnabled;
    NSUUID *_activeUserActivityUUID;
}

+ (id)defaultManager;
+ (_Bool)userActivityContinuationSupported;
+ (_Bool)shouldSupportActivityContinuation;
@property(retain) NSMapTable *userActivitiesByUUID; // @synthesize userActivitiesByUUID=_userActivitiesByUUID;
@property(readonly) NSObject<OS_dispatch_queue> *serverQ; // @synthesize serverQ=_serverQ;
@property(copy) NSUUID *activeUserActivityUUID; // @synthesize activeUserActivityUUID=_activeUserActivityUUID;
@property(readonly) _Bool supportsActivityContinuation; // @synthesize supportsActivityContinuation=_supportsActivityContinuation;
- (void)pinUserActivity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)markUserActivityAsDirty:(id)arg1 forceImmediate:(_Bool)arg2;
- (void)sendUserActivityInfoToLSUserActivityd:(id)arg1 makeCurrent:(_Bool)arg2;
- (void)tellDaemonAboutNewLSUserActivity:(id)arg1;
- (id)createByDecodingUserActivity:(id)arg1;
- (id)encodeUserActivity:(id)arg1;
- (void)didReceiveInputStreamWithUUID:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;
- (void)tellClientUserActivityItWasResumed:(id)arg1;
- (void)askClientUserActivityToSave:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)askClientUserActivityToSave:(id)arg1;
- (id)_findUserActivityForUUID:(id)arg1;
- (_Bool)userActivityIsActive:(id)arg1;
- (void)makeInactive:(id)arg1;
- (void)makeActive:(id)arg1;
- (void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2;
- (void)addDynamicUserActivity:(id)arg1 matching:(id)arg2;
- (void)removeUserActivity:(id)arg1;
- (void)addUserActivity:(id)arg1;
- (void)fetchUUID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly) _Bool activityContinuationIsEnabled;
@property(readonly, retain) NSXPCConnection *connection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (id)init;
- (void)sendInitialMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

