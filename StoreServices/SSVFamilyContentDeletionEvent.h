//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SSVFamilyContentDeletionEvent : NSObject
{
    NSArray *_deletedAccounts;
}

+ (void)postDistributedNotificationWithAccountPairs:(id)arg1;
+ (id)notificationPayloadWithAccountPairs:(id)arg1;
@property(readonly, nonatomic) NSArray *deletedAccounts; // @synthesize deletedAccounts=_deletedAccounts;
- (void).cxx_destruct;
- (id)initWithXPCEventStreamEvent:(id)arg1;
- (id)initWithNotificationUserInfo:(id)arg1;

@end

