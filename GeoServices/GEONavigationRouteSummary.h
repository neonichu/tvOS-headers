//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOComposedWaypoint, NSString;

@interface GEONavigationRouteSummary : PBCodable <NSCopying>
{
    double _travelTime;
    GEOComposedWaypoint *_destination;
    NSString *_destinationName;
    GEOComposedWaypoint *_origin;
    int _transportType;
    struct {
        unsigned int travelTime:1;
        unsigned int transportType:1;
    } _has;
}

@property(nonatomic) double travelTime; // @synthesize travelTime=_travelTime;
@property(retain, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTravelTime;
@property(readonly, nonatomic) _Bool hasDestinationName;
@property(readonly, nonatomic) _Bool hasDestination;
@property(readonly, nonatomic) _Bool hasOrigin;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void)dealloc;
- (void)setRoute:(id)arg1;
- (id)initWithRoute:(id)arg1 destinationName:(id)arg2;

@end

