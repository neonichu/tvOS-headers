//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSSetChanges.h>

@class NSMutableArray, NSSet;

__attribute__((visibility("hidden")))
@interface NSConcreteSetChanges : NSSetChanges
{
    NSSet *_backing;
    NSMutableArray *_changes;
    _Bool _backingIsMutable;
}

- (void)dealloc;
- (id)description;
- (void)_fault;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)changeCount;
- (void)transformObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)filterObjectsWithTest:(CDUnknownBlockType)arg1;
- (void)unionSet:(id)arg1;
- (void)removeAllObjects;
- (void)minusSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)addObjectsFromArray:(id)arg1;
- (void)addChange:(id)arg1;
- (void)_willChange;
- (id)initWithSet:(id)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;

@end

