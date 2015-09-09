//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <Photos/NSCacheDelegate-Protocol.h>

@class NSCache, NSMutableDictionary, NSRecursiveLock, NSSet, NSString, PHPhotoLibrary;
@protocol PHBatchFetchingArrayDataSource;

@interface PHBatchFetchingArray : NSArray <NSCacheDelegate>
{
    NSArray *_oids;
    NSSet *_oidsSet;
    id <PHBatchFetchingArrayDataSource> _dataSource;
    unsigned long long _count;
    NSCache *_cache;
    unsigned long long _firstBatchIndex;
    NSArray *_firstBatch;
    NSMutableDictionary *_uuidsByOIDs;
    NSRecursiveLock *_firstBatchLock;
    unsigned long long _batchSize;
    unsigned long long _propertyHint;
}

+ (_Bool)accessInstanceVariablesDirectly;
@property(readonly) NSArray *oids; // @synthesize oids=_oids;
- (void).cxx_destruct;
@property(readonly) NSSet *oidsSet;
- (void)min:(id *)arg1 andMax:(id *)arg2 forKeypath:(id)arg3;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (void)_invalidateUUIDCache;
- (void)_evictBatchNumber:(long long)arg1;
- (void)_rememberUUIDsForBatch:(id)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)_phObjectAtIndex:(unsigned long long)arg1;
- (id)__batchHelper:(unsigned long long)arg1;
- (id)_phObjectsForOIDs:(id)arg1;
- (unsigned long long)batchSize;
@property(readonly) PHPhotoLibrary *photoLibrary;
- (unsigned long long)_populateObjectBuffer:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
@property(readonly, copy) NSString *description;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 dataSource:(id)arg3;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

