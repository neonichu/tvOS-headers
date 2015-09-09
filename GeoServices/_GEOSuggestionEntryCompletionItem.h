//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOCompletionItem-Protocol.h>

@class GEOMapServiceTraits, GEOSearchCategory, GEOSuggestionEntry, NSArray, NSData, NSString;
@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface _GEOSuggestionEntryCompletionItem : NSObject <GEOCompletionItem>
{
    GEOSuggestionEntry *_entry;
    NSString *_query;
    int _entryListIndex;
    int _entryIndex;
    GEOMapServiceTraits *_traits;
    NSData *_completionMetaData;
}

@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSData *metadata;
@property(readonly, nonatomic) NSData *entryMetadata;
- (void)sendFeedback;
@property(readonly, nonatomic) GEOSearchCategory *searchCategory;
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem;
- (_Bool)getCoordinate:(CDStruct_c3b9c2ee *)arg1;
- (id)calloutTitle;
- (id)queryLine;
- (id)highlightsForLine:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *displayLines;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithSuggestionEntry:(id)arg1 query:(id)arg2 entryListIndex:(int)arg3 entryIndex:(int)arg4 completion:(id)arg5 traits:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

