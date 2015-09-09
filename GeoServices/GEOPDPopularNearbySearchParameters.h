//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, NSData;

@interface GEOPDPopularNearbySearchParameters : PBCodable <NSCopying>
{
    unsigned int _maxResults;
    NSData *_suggestionEntryMetadata;
    GEOPDViewportInfo *_viewportInfo;
    CDStruct_4f8569d5 _has;
}

@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(nonatomic) unsigned int maxResults; // @synthesize maxResults=_maxResults;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSuggestionEntryMetadata;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(nonatomic) _Bool hasMaxResults;
- (void)dealloc;

@end

