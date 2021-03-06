//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class NSDate, NSDictionary, NSString;
@protocol HDHealthDaemon, OS_dispatch_queue;

@interface HDUserCharacteristicsManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject>
{
    _Bool _shouldUpdateQuantityCharacteristics;
    _Bool _shouldUpdateUserProfile;
    _Bool _needsUpdateAfterUnlock;
    id <HDHealthDaemon> _healthDaemon;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_userProfileLastUpdated;
    NSDictionary *_lastUserProfile;
}

@property(nonatomic) _Bool needsUpdateAfterUnlock; // @synthesize needsUpdateAfterUnlock=_needsUpdateAfterUnlock;
@property(copy, nonatomic) NSDictionary *lastUserProfile; // @synthesize lastUserProfile=_lastUserProfile;
@property(retain, nonatomic) NSDate *userProfileLastUpdated; // @synthesize userProfileLastUpdated=_userProfileLastUpdated;
@property(readonly, nonatomic) _Bool shouldUpdateUserProfile; // @synthesize shouldUpdateUserProfile=_shouldUpdateUserProfile;
@property(readonly, nonatomic) _Bool shouldUpdateQuantityCharacteristics; // @synthesize shouldUpdateQuantityCharacteristics=_shouldUpdateQuantityCharacteristics;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)samplesOfTypeWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)daemonReady:(id)arg1;
- (id)_mostRecentSampleOfType:(id)arg1 error:(id *)arg2;
- (void)_queue_updateQuantityCharacteristics;
- (void)_queue_updateUserProfile;
- (void)_queue_updateQuantityCharacteristicsAndUserProfileIfNeeded;
- (void)_updateQuantityCharacteristicsAndUserProfile;
- (void)_updateUserProfileForRestoreCompletion:(id)arg1;
- (void)_userCharacteristicsDidChangeShouldUpdateUserProfile:(_Bool)arg1 shouldSync:(_Bool)arg2;
- (double)restingCaloriesFromTotalCalories:(double)arg1 timeInterval:(double)arg2 authorizedToRead:(_Bool)arg3;
- (_Bool)_setUserCharacteristic:(id)arg1 forType:(id)arg2 shouldInsertSample:(_Bool)arg3 updateProfileAndSync:(_Bool)arg4 error:(id *)arg5;
- (_Bool)setUserCharacteristic:(id)arg1 forType:(id)arg2 error:(id *)arg3;
- (id)_userCharacteristicForType:(id)arg1 entity:(id *)arg2 error:(id *)arg3;
- (id)userCharacteristicForType:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithHealthDaemon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

