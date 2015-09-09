//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/GKCache-Protocol.h>

@class GKLinkedList, NSMutableDictionary, NSString;

@interface GKCache : NSObject <GKCache>
{
    NSMutableDictionary *_dictionary;
    GKLinkedList *_cacheList;
    unsigned long long _maxCount;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(retain, nonatomic) GKLinkedList *cacheList; // @synthesize cacheList=_cacheList;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithMaxCount:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

