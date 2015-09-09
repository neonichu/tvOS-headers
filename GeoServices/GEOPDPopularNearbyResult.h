//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOPDPopularNearbyResult : PBCodable <NSCopying>
{
    CDStruct_b9067c0b *_litePlaceResults;
    unsigned long long _litePlaceResultsCount;
    unsigned long long _litePlaceResultsSpace;
    NSString *_sectionHeader;
}

@property(retain, nonatomic) NSString *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setLitePlaceResults:(CDStruct_b9067c0b *)arg1 count:(unsigned long long)arg2;
- (CDStruct_b9067c0b)litePlaceResultAtIndex:(unsigned long long)arg1;
- (void)addLitePlaceResult:(CDStruct_b9067c0b)arg1;
- (void)clearLitePlaceResults;
@property(readonly, nonatomic) CDStruct_b9067c0b *litePlaceResults;
@property(readonly, nonatomic) unsigned long long litePlaceResultsCount;
@property(readonly, nonatomic) _Bool hasSectionHeader;
- (void)dealloc;

@end

