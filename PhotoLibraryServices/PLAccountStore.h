//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Accounts/ACAccountStore.h>

@class ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface PLAccountStore : ACAccountStore
{
    NSObject<OS_dispatch_queue> *_queue;
    ACAccount *_cachedPrimaryAppleAccount;
}

+ (id)pl_sharedAccountStore;
- (void)clearCachedProperties;
@property(readonly) ACAccount *cachedPrimaryAppleAccount;
- (void)accountDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

