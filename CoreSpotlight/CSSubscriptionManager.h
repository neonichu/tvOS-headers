//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PSSSSubscriptionManager;

@interface CSSubscriptionManager : NSObject
{
    PSSSSubscriptionManager *_internal;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)unregisterAllSubscriptions;
- (void)unregisterSubscriptionWithInfo:(id)arg1;
- (void)registerSubscriptionWithInfo:(id)arg1 expirationDate:(id)arg2;
- (id)init;

@end

