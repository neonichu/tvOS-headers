//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MTLResourceListPool;

__attribute__((visibility("hidden")))
@interface MTLResourceList : NSObject
{
    struct {
        unsigned short buckets[64];
        unsigned int numEntries;
        unsigned int capacity;
        struct MTLResourceListEntry *entries;
        MTLResourceListPool *pool;
        struct {
            MTLResourceList *tqe_next;
            id *tqe_prev;
        } entry;
        unsigned long long time_added;
    } _listPriv;
}

- (void)dealloc;
- (void)releaseAllObjectsAndReset;
- (id)initWithCapacity:(int)arg1;

@end

