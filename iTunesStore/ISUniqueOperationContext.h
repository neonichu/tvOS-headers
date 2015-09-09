//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface ISUniqueOperationContext : NSObject
{
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

- (id)uniqueOperationForKey:(id)arg1;
- (void)setUniqueOperation:(id)arg1 forKey:(id)arg2;
- (void)removeOperation:(id)arg1;
- (unsigned long long)countOfOperations;
- (_Bool)containsOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

