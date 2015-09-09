//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArrayChanges.h>

__attribute__((visibility("hidden")))
@interface NSConcreteArrayChanges : NSArrayChanges
{
    CDStruct_29daef6c _changes;
}

- (void)applyChangesToArray:(id)arg1;
- (void)addChange:(id)arg1;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateChanges:(unsigned long long)arg1 stop:(_Bool *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)changeCount;
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)init;

@end

