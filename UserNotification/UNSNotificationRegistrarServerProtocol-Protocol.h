//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotification/NSObject-Protocol.h>

@class NSString, UIUserNotificationSettings;

@protocol UNSNotificationRegistrarServerProtocol <NSObject>
- (void)setAllowsBackgroundRefresh:(_Bool)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)backgroundAppRefreshBundleIdentifierMappingWithResult:(void (^)(NSDictionary *))arg1;
- (void)setObservingRemoteNotifications:(_Bool)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)notificationTypesForBundleIdentifier:(NSString *)arg1 withResult:(void (^)(unsigned long long))arg2;
- (void)notificationSettingsForBundleIdentifier:(NSString *)arg1 withResult:(void (^)(UIUserNotificationSettings *))arg2;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(NSString *)arg1;
- (void)requestTokenForRemoteNotificationsForBundleIdentifier:(NSString *)arg1 withResult:(void (^)(NSError *))arg2;
- (void)remoteNotificationTypesForBundleIdentifier:(NSString *)arg1 withResult:(void (^)(unsigned long long))arg2;
- (void)allowsRemoteNotificationsForBundleIdentifier:(NSString *)arg1 withResult:(void (^)(_Bool))arg2;
- (void)registerRemoteNotificationTypes:(unsigned long long)arg1 forBundleIdentifier:(NSString *)arg2 withResult:(void (^)(NSError *))arg3;
- (void)registerBadgeSettingForBundleIdentifier:(NSString *)arg1;
- (void)registerNotificationSettings:(UIUserNotificationSettings *)arg1 forBundleIdentifier:(NSString *)arg2 withResult:(void (^)(UIUserNotificationSettings *))arg3;
@end

