//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMReadWriteLock, NSMutableDictionary;

@interface FMConcurrentMutableDictionary : NSObject
{
    NSMutableDictionary *_underlyingDictionary;
    FMReadWriteLock *_lock;
}

@property(retain, nonatomic) FMReadWriteLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *underlyingDictionary; // @synthesize underlyingDictionary=_underlyingDictionary;
- (void).cxx_destruct;
- (id)popObjectforKey:(id)arg1;
- (id)replaceObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1 withConstructor:(CDUnknownBlockType)arg2;
- (id)nativeDictionary;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

