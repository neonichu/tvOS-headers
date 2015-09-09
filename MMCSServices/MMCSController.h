//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MMCSController : NSObject
{
    long long _connectionBehavior;
}

@property long long connectionBehavior; // @synthesize connectionBehavior=_connectionBehavior;
- (void)putFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 authToken:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)getFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 authToken:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)unregisterFiles:(id)arg1;
- (_Bool)registerFiles:(id)arg1;
@property(readonly) _Bool isActive;
- (id)_options;
- (void)dealloc;
- (void)_registerPowerAssertionIfNeeded;
- (void)_unregisterPowerAssertion;
- (void)_releasePowerAssertion;
- (void)_releasePowerAssertionAndSimulateCrash;
- (id)init;

@end

