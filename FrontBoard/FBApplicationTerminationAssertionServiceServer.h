//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/FBSystemServiceFacility.h>

@class NSMutableDictionary;

@interface FBApplicationTerminationAssertionServiceServer : FBSystemServiceFacility
{
    NSMutableDictionary *_assertionsByClient;
}

- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)noteClientDidDisconnect:(id)arg1;
- (id)prerequisiteMilestones;
- (void)_handleRelinquishTerminationAssertionMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleAcquireTerminationAssertionMessage:(id)arg1 fromClient:(id)arg2;
- (void)_rememberTerminationAssertion:(id)arg1 forClient:(id)arg2;
- (void)dealloc;

@end

