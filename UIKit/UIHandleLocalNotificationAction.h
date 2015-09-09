//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class NSDictionary, NSObject, NSString, UILocalNotification;
@protocol OS_dispatch_semaphore;

@interface UIHandleLocalNotificationAction : BSAction
{
    NSObject<OS_dispatch_semaphore> *_decodeSemaphore;
    UILocalNotification *_cachedNotification;
}

- (void).cxx_destruct;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (long long)UIActionType;
@property(readonly, copy, nonatomic) NSDictionary *userResponse;
@property(readonly, copy, nonatomic) NSString *action;
@property(readonly, copy, nonatomic) UILocalNotification *notification;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithNotification:(id)arg1 action:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)initWithNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithNotification:(id)arg1;
- (id)_initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(long long)arg4 withHandler:(CDUnknownBlockType)arg5;

@end

