//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NSObject (NSObject_AVShared)
- (void)fromMainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)fromNotifySafeThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)fromNotifySafeThreadPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (_Bool)okToNotifyFromThisThread;
- (void)disallowSafePerformSelector;
- (void)allowSafePerformSelector;
- (void)postNotificationWithDescription:(id)arg1;
@end

