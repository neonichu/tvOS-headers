//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationServices/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol UNSNotificationSchedulerConnectionObserver <NSObject>
- (void)didChangeScheduledLocalNotifications:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didFireLocalNotifications:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
@end

