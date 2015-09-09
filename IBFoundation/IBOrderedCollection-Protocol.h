//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBCollection-Protocol.h>

@class NSSet, Protocol;
@protocol IBCollection, IBOrderedCollection;

@protocol IBOrderedCollection <IBCollection>
+ (id)ib_orderedCollectionWithOrderedCollection:(id <IBOrderedCollection>)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(long long (^)(id, id))arg4;
- (id)lastObject;
- (id)firstObject;
- (long long)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (_Bool)ib_binarySearchForObject:(id)arg1 usingComparator:(long long (^)(id, id))arg2;
- (unsigned long long)ib_indexOfFirstObjectPassingTest:(_Bool (^)(id))arg1;
- (id <IBOrderedCollection>)ib_collectionByReversingObjects;
- (id <IBOrderedCollection>)ib_collectionByRemovingObject:(id)arg1;
- (id <IBOrderedCollection>)ib_collectionByInsertingObjects:(id <IBCollection>)arg1 atIndex:(long long)arg2;
- (id <IBOrderedCollection>)ib_collectionByInsertingObject:(id)arg1 atIndex:(long long)arg2;
- (id <IBOrderedCollection>)ib_collectionByAddingObject:(id)arg1;
- (id <IBOrderedCollection>)ib_collectionByAddingObjectsFromCollection:(id <IBCollection>)arg1;
- (id)ib_collectionByKeepingObjectsInSet:(NSSet *)arg1;
- (id <IBOrderedCollection>)ib_collectionByMappingAndFilteringWithBlock:(id (^)(id))arg1;
- (id <IBOrderedCollection>)ib_collectionByRemovingObjectsInSet:(NSSet *)arg1;
- (id <IBOrderedCollection>)ib_collectionByRemovingObjectsFromCollection:(id <IBCollection>)arg1;
- (id <IBOrderedCollection>)ib_collectionByMappingBlock:(id (^)(id))arg1;
- (id <IBOrderedCollection>)ib_collectionByFilteringUsingBlock:(_Bool (^)(id))arg1;
- (id <IBOrderedCollection>)ib_collectionByRemovingNulls;
- (id <IBOrderedCollection>)ib_objectsConformingToProtocol:(Protocol *)arg1;
- (id <IBOrderedCollection>)ib_objectsOfClass:(Class)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
@end

