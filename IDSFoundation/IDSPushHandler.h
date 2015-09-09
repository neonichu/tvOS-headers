//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData;

@interface IDSPushHandler : NSObject
{
}

+ (id)sharedInstance;
- (void)configureAsMacNotificationCenterObserver:(id)arg1;
- (void)setCommands:(id)arg1 forListener:(id)arg2;
- (void)setTopics:(id)arg1 forListener:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4;
- (void)_recalculateTopicsCacheOnIvarQueue;
- (void)_updateTopicsOnIvarQueue;
@property(readonly, nonatomic) _Bool isConnected;
@property(readonly, nonatomic) NSData *pushToken;
- (void)dealloc;
- (id)init;

@end

