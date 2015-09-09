//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOPlaceDataDBReader, GEOPlaceDataDBWriter;
@protocol OS_dispatch_queue;

@interface GEOPlaceDataComponentCache : NSObject
{
    GEOPlaceDataDBWriter *_writer;
    GEOPlaceDataDBReader *_reader;
    NSObject<OS_dispatch_queue> *_queue;
    int _resultProviderID;
}

@property(readonly, nonatomic) int resultProviderID; // @synthesize resultProviderID=_resultProviderID;
- (void)evictAllEntries;
- (void)shrinkBySize:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)componentsForKeys:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)forgetComponentForKey:(union _GEOPlaceDataComponentKey)arg1;
- (void)rememberComponent:(id)arg1 forKey:(union _GEOPlaceDataComponentKey)arg2;
- (id)componentForKey:(union _GEOPlaceDataComponentKey)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 resultProviderID:(int)arg2;
- (id)init;
- (id)allCacheEntries;
- (void)deletePhoneNumberMapping;
- (id)placeDataForPhoneNumber:(unsigned long long)arg1;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
- (void)setPlaceData:(id)arg1 forKey:(struct _GEOTileKey)arg2;
- (void)evictPlaceDataForKey:(struct _GEOTileKey)arg1;
- (id)placeDataForKey:(struct _GEOTileKey)arg1;
- (void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2;
- (void)evictPlaceDataForMUID:(unsigned long long)arg1;
- (id)placeDataForMUID:(unsigned long long)arg1;
- (void)rememberPlaceData:(id)arg1;

@end

