//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng;

@interface GEONavigationTransitStopSummary : PBCodable <NSCopying>
{
    unsigned long long _stopID;
    GEOLatLng *_coordinate;
    struct {
        unsigned int stopID:1;
    } _has;
}

@property(retain, nonatomic) GEOLatLng *coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) unsigned long long stopID; // @synthesize stopID=_stopID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCoordinate;
@property(nonatomic) _Bool hasStopID;
- (void)dealloc;
- (id)initWithTransitStop:(id)arg1;

@end

