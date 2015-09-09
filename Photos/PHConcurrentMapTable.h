//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface PHConcurrentMapTable : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMapTable *_protectedTable;
}

+ (id)mapTable;
- (void).cxx_destruct;
- (void)performLockedKeyEnumeration:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (unsigned long long)count;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)dispatchIsolatedRead:(CDUnknownBlockType)arg1;
- (void)dispatchIsolatedWrite:(CDUnknownBlockType)arg1;
- (id)queue;
- (id)init;

@end

