//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@class HKActivityCache;

@interface HKCurrentActivityCacheQuery : HKQuery
{
    CDUnknownBlockType _updateHandler;
    HKActivityCache *_lastActivityCache;
}

@property(retain, nonatomic) HKActivityCache *lastActivityCache; // @synthesize lastActivityCache=_lastActivityCache;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (CDUnknownBlockType)_queue_errorHandler;
- (_Bool)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (void)_queue_cleanupAfterDeactivation;
- (void)deliverSample:(id)arg1 forQuery:(id)arg2;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;

@end

