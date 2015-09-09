//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GEODiskSpaceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_freeableClaims;
}

+ (id)sharedManager;
- (unsigned long long)freeDiskSpaceBy:(unsigned long long)arg1;
- (unsigned long long)getFreeableSpace;
- (void)dealloc;
- (void)_registerCacheDeleteCallbacks;
- (_Bool)_isValidVolume:(struct __CFDictionary *)arg1;
- (id)_getVolume:(struct __CFDictionary *)arg1;
- (id)_getPurgeableSpace:(struct __CFDictionary *)arg1;
- (id)init;

@end

