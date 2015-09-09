//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVSBackgroundTaskManager : NSObject
{
    _Bool _scheduledNotificationPost;
    int _enabledTaskTypesChangedNotificationToken;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) int enabledTaskTypesChangedNotificationToken; // @synthesize enabledTaskTypesChangedNotificationToken=_enabledTaskTypesChangedNotificationToken;
- (unsigned long long)_enabledTaskTypesMask;
- (void)_postEnabledTasksDidChangeNotification;
- (void)_updateTasksForEnabledTaskTypesChangeWithToken:(int)arg1;
- (void)_configureDistributedNotifications;
- (void)performFinishedForTask:(id)arg1;
- (void)updateTasksForTimeChange;
- (_Bool)tasksEnabledOfType:(long long)arg1;
- (void)disableBackgroundTasksOfType:(long long)arg1;
- (void)enableBackgroundTasksOfType:(long long)arg1;
- (void)unregisterBackgroundTask:(id)arg1;
- (void)registerBackgroundTask:(id)arg1;
- (id)init;

@end

