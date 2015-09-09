//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOWaypointID, GEOWaypointLocation, GEOWaypointPlace;

@interface GEOWaypointTyped : PBCodable <NSCopying>
{
    GEOWaypointID *_waypointId;
    GEOWaypointLocation *_waypointLocation;
    GEOWaypointPlace *_waypointPlace;
    int _waypointType;
    _Bool _isCurrentLocation;
    struct {
        unsigned int waypointType:1;
        unsigned int isCurrentLocation:1;
    } _has;
}

@property(nonatomic) _Bool isCurrentLocation; // @synthesize isCurrentLocation=_isCurrentLocation;
@property(retain, nonatomic) GEOWaypointLocation *waypointLocation; // @synthesize waypointLocation=_waypointLocation;
@property(retain, nonatomic) GEOWaypointPlace *waypointPlace; // @synthesize waypointPlace=_waypointPlace;
@property(retain, nonatomic) GEOWaypointID *waypointId; // @synthesize waypointId=_waypointId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsCurrentLocation;
@property(readonly, nonatomic) _Bool hasWaypointLocation;
@property(readonly, nonatomic) _Bool hasWaypointPlace;
@property(readonly, nonatomic) _Bool hasWaypointId;
@property(nonatomic) _Bool hasWaypointType;
@property(nonatomic) int waypointType; // @synthesize waypointType=_waypointType;
- (void)dealloc;
- (id)locationForWaypoint;

@end

