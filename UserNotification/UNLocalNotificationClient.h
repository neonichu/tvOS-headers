//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BKSApplicationDataStore, NSArray, NSMutableDictionary, NSMutableSet, NSString, PCPersistentTimer;
@protocol OS_dispatch_queue;

@interface UNLocalNotificationClient : NSObject
{
    NSString *_bundleIdentifier;
    BKSApplicationDataStore *_dataStore;
    PCPersistentTimer *_localNotificationTimer;
    NSMutableSet *_requireLocalNotificationsCachingReasons;
    NSArray *_cachedLocalNotifications;
    NSMutableDictionary *_localNotificationsByMonitoredRegionIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _monitoringLocaleAndTimeChanges;
    _Bool _uninstalled;
    _Bool _userNotificationsEnabled;
    _Bool _requiresLocalNotifications;
    _Bool _isSystemApplication;
}

- (void)_purgeCachedLocalNotifications;
- (void)snoozeLocalNotifications:(id)arg1;
- (void)snoozeLocalNotification:(id)arg1;
- (void)scheduleSnoozeNotification:(id)arg1;
- (id)snoozeNotificationForLocalNotification:(id)arg1;
- (void)_fireNotification:(id)arg1;
- (void)localNotificationTimerFired;
- (void)_updateLocalNotificationTimers;
- (_Bool)_canScheduledLocalNotificationTimers;
- (void)_invalidateLocalNotificationTimers;
- (void)handleLocaleChange;
- (void)handleSignificantTimeChange;
- (void)_removeNotificationFromRegionMonitoring:(id)arg1;
- (void)_updateLocalNotificationRegionRegistrations;
- (void)_invalidateLocalNotificationRegionRegistrations;
- (void)triggerLocationArrow;
- (_Bool)appIsAuthorizedForRegionMonitoring;
- (id)_lastLocalNotificationFireDate;
- (void)_setLastLocalNotificationFireDate:(id)arg1;
- (void)cancelLocalNotification:(id)arg1;
- (void)cancelLocalNotifications:(id)arg1;
- (void)scheduleLocalNotifications:(id)arg1 replaceExistingNotifications:(_Bool)arg2;
- (id)fireDatesForLocalNotification:(id)arg1 withFetchRequest:(id)arg2;
- (id)scheduleForFetchRequest:(id)arg1;
- (id)scheduledLocalNotifications;
- (id)_getLocalNotificationFromBulletin:(id)arg1;
- (id)_copyUnexpiredScheduledLocalNotifications;
- (_Bool)_isLocalNotification:(id)arg1 scheduledToFireAfterDate:(id)arg2;
- (void)_setScheduledLocalNotifications:(id)arg1;
- (id)_scheduledLocalNotifications;
- (void)_endRequireLocalNotificationsCachingWithReason:(id)arg1;
- (_Bool)isAppRunning;
- (void)_beginRequireLocalNotificationsCachingWithReason:(id)arg1;
- (void)handleMemoryWarning;
- (void)handleUninstall;
- (void)handleProcessExit;
- (void)dealloc;
- (void)setUserNotificationsEnabled:(_Bool)arg1;
- (void)updateLocalNotificationTimersAndRegionRegistrations;
- (void)invalidateLocalNotificationTimersAndRegionRegistrations;
- (id)initWithBundleIdentifier:(id)arg1 isSystemApplication:(_Bool)arg2 requiresLocalNotifications:(_Bool)arg3 userNotificationsEnabled:(_Bool)arg4 queue:(id)arg5;

@end

