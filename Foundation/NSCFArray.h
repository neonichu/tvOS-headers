//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

__attribute__((visibility("hidden")))
@interface NSCFArray : NSMutableArray
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjects:(id *)arg2 count:(unsigned long long)arg3;
- (void)sortUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)removeAllObjects;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (_Bool)containsObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
- (void)finalize;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

