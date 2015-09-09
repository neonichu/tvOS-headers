//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKitExtensions/HKExtendedClientInterface-Protocol.h>

@class NSString, NSXPCConnection, _HKExtendedHealthStoreProxy;
@protocol OS_dispatch_queue;

@interface HKExtendedHealthStore : NSObject <HKExtendedClientInterface>
{
    CDUnknownBlockType _achievementsAddedHandler;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSXPCConnection *_connection;
    _HKExtendedHealthStoreProxy *_connectionProxy;
}

@property(retain, nonatomic) _HKExtendedHealthStoreProxy *connectionProxy; // @synthesize connectionProxy=_connectionProxy;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
- (void)achievementsWereAdded;
- (void)runAchievementsFixupAsDryRun:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addAchievement:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAchievementAsViewed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchNumberOfUnviewedAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAchievementsWithCompletedDateBetweenStart:(id)arg1 end:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)markAchievementsAlerted:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUnalertedAchievementsWithCompletion:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType achievementsAddedHandler;
- (void)daemonDidStart;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)clientInterface;
- (id)serverInterface;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

