//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface BRReachabilityMonitor : NSObject
{
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability *_reachabilityRef;
    _Bool _isNetworkReachable;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedReachabilityMonitor;
@property(nonatomic) _Bool isNetworkReachable; // @synthesize isNetworkReachable=_isNetworkReachable;
- (void)invalidate;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

