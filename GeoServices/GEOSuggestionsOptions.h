//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData;

@interface GEOSuggestionsOptions : PBCodable <NSCopying>
{
    int _entriesType;
    int _listType;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    _Bool _includeRankingFeatures;
    _Bool _normalizePOIs;
    struct {
        unsigned int entriesType:1;
        unsigned int listType:1;
        unsigned int includeRankingFeatures:1;
        unsigned int normalizePOIs:1;
    } _has;
}

@property(nonatomic) _Bool includeRankingFeatures; // @synthesize includeRankingFeatures=_includeRankingFeatures;
@property(nonatomic) _Bool normalizePOIs; // @synthesize normalizePOIs=_normalizePOIs;
@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property(retain, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIncludeRankingFeatures;
@property(nonatomic) _Bool hasNormalizePOIs;
@property(readonly, nonatomic) _Bool hasSuggestionEntryMetadata;
@property(readonly, nonatomic) _Bool hasSuggestionMetadata;
@property(nonatomic) _Bool hasEntriesType;
@property(nonatomic) int entriesType; // @synthesize entriesType=_entriesType;
@property(nonatomic) _Bool hasListType;
@property(nonatomic) int listType; // @synthesize listType=_listType;
- (void)dealloc;

@end

