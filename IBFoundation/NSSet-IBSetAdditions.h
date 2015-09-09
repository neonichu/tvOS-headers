//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSSet.h>

#import <IBFoundation/IBCollection-Protocol.h>

@class NSString;

@interface NSSet (IBSetAdditions) <IBCollection>
+ (id)ib_setByUnioningCollections:(id)arg1;
+ (id)ib_setByUnioningCollection:(id)arg1 withCollection:(id)arg2;
+ (id)ib_collectionWithObject:(id)arg1;
+ (id)ib_emptyCollection;
+ (Class)ib_mutableClass;
- (void)ib_getObjects:(id *)arg1;
- (void)ib_removeObjectsInReceiverFromArray:(id)arg1;
- (void)ib_removeObjectsInReceiverFromOrderedSet:(id)arg1;
- (void)ib_removeObjectsInReceiverFromSet:(id)arg1;
- (long long)ib_numberOfObjectsIntersectingEnumerable:(id)arg1;
- (_Bool)ib_isSupersetOfEnumerable:(id)arg1;
- (_Bool)ib_intersectsEnumerable:(id)arg1;
- (_Bool)ib_isSupersetOfCollection:(id)arg1;
- (_Bool)ib_intersectsCollection:(id)arg1;
- (id)ib_maximumObjectUsingComparator:(CDUnknownBlockType)arg1;
- (id)ib_minimumObjectUsingComparator:(CDUnknownBlockType)arg1;
- (long long)ib_numberOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)ib_arrayBySortingUsingSelector:(SEL)arg1 onKeyPath:(id)arg2;
- (id)ib_arrayBySortingUsingSelector:(SEL)arg1;
- (id)ib_arrayBySortingUsingComparator:(CDUnknownBlockType)arg1;
- (id)ib_setByIntersectingArray:(id)arg1;
- (id)ib_setByIntersectingSet:(id)arg1;
- (id)ib_setBySubtractingSet:(id)arg1;
- (void)ib_enumerateCopyOfObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)ib_enumerateObjectsUsingMutatingBlock:(CDUnknownBlockType)arg1;
- (void)ib_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)ib_collectionByRemovingNulls;
- (id)ib_setByRemovingNulls;
- (id)ib_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ib_onlyObjectPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)ib_anyObjectsPassTest:(CDUnknownBlockType)arg1;
- (_Bool)ib_allObjectsPassTest:(CDUnknownBlockType)arg1;
- (id)ib_onlyObject;
- (Class)ib_mutableClass;
- (_Bool)ib_objectsAreStrictlyContainedBySet:(id)arg1;
- (_Bool)ib_objectsAreContainedBySet:(id)arg1;
- (id)ib_setByAddingObjectsFromCollection:(id)arg1;
- (id)ib_setByRemovingObjectsFromCollection:(id)arg1;
- (id)ib_setByRemovingObject:(id)arg1;
- (id)ib_setByRemovingObjects:(id)arg1;
- (id)ib_setByAddingObjects:(id)arg1;
- (id)ib_setByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)ib_collectionByMappingAndFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)ib_setByMappingAndFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)ib_setByMappingBlockAndAssertingOnNilMappedValue:(CDUnknownBlockType)arg1;
- (id)ib_setByMappingBlock:(CDUnknownBlockType)arg1;
- (id)ib_arrayByMappingBlock:(CDUnknownBlockType)arg1;
- (id)ib_setByMappingWithBehavior:(long long)arg1 andBlock:(CDUnknownBlockType)arg2;
- (id)ib_objectsOfClasses:(id)arg1;
- (id)ib_objectsConformingToProtocol:(id)arg1;
- (id)ib_objectsOfClass:(Class)arg1;
- (id)ib_collectionByRemovingObject:(id)arg1;
- (id)ib_collectionByAddingObject:(id)arg1;
- (id)ib_collectionByKeepingObjectsInSet:(id)arg1;
- (id)ib_collectionByRemovingObjectsInSet:(id)arg1;
- (id)ib_collectionByRemovingObjectsFromCollection:(id)arg1;
- (id)ib_collectionByAddingObjectsFromCollection:(id)arg1;
- (id)ib_collectionByMappingBlock:(CDUnknownBlockType)arg1;
- (id)ib_collectionByFilteringUsingBlock:(CDUnknownBlockType)arg1;
- (id)ib_setByFilteringUsingBlock:(CDUnknownBlockType)arg1;
- (id)ib_uniqueObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

