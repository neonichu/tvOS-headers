//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOTimezone;

@interface GEOPDPlaceInfo : PBCodable <NSCopying>
{
    double _area;
    GEOLatLng *_center;
    GEOTimezone *_timezone;
    _Bool _isApproximateCenter;
    struct {
        unsigned int area:1;
        unsigned int isApproximateCenter:1;
    } _has;
}

+ (id)placeInfoForPlaceData:(id)arg1;
@property(nonatomic) _Bool isApproximateCenter; // @synthesize isApproximateCenter=_isApproximateCenter;
@property(retain, nonatomic) GEOTimezone *timezone; // @synthesize timezone=_timezone;
@property(nonatomic) double area; // @synthesize area=_area;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsApproximateCenter;
@property(readonly, nonatomic) _Bool hasTimezone;
@property(nonatomic) _Bool hasArea;
@property(readonly, nonatomic) _Bool hasCenter;
- (void)dealloc;

@end

