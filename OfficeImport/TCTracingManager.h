//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSMTraceBuffer;

__attribute__((visibility("hidden")))
@interface TCTracingManager : NSObject
{
    TSMTraceBuffer *mBuffer;
    unsigned int mCount;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
+ (id)_singletonAlloc;
- (void)teardown;
- (void)setup;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

