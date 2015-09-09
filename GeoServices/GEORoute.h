//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface GEORoute : PBCodable <NSCopying>
{
    CDStruct_95bda58d _advisorys;
    CDStruct_9f2792e4 _incidentEndOffsetsInRoutes;
    CDStruct_9f2792e4 _incidentIndices;
    CDStruct_9f2792e4 _trafficColorOffsets;
    CDStruct_9f2792e4 _trafficColors;
    NSMutableArray *_advisoryNotices;
    NSData *_arrivalRouteID;
    unsigned int _arrivalStepID;
    NSData *_basicPoints;
    NSData *_departureRouteID;
    unsigned int _departureStepID;
    unsigned int _distance;
    int _drivingSide;
    unsigned int _expectedTime;
    unsigned int _historicTravelTime;
    NSString *_name;
    NSString *_phoneticName;
    NSData *_routeID;
    NSMutableArray *_routeNames;
    int _routeType;
    NSMutableArray *_steps;
    int _transportType;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeConservativeEstimate;
    NSData *_unpackedLatLngVertices;
    NSData *_zilchPoints;
    struct {
        unsigned int arrivalStepID:1;
        unsigned int departureStepID:1;
        unsigned int distance:1;
        unsigned int drivingSide:1;
        unsigned int expectedTime:1;
        unsigned int historicTravelTime:1;
        unsigned int routeType:1;
        unsigned int transportType:1;
        unsigned int travelTimeAggressiveEstimate:1;
        unsigned int travelTimeConservativeEstimate:1;
    } _has;
}

@property(retain, nonatomic) NSData *unpackedLatLngVertices; // @synthesize unpackedLatLngVertices=_unpackedLatLngVertices;
@property(nonatomic) unsigned int travelTimeConservativeEstimate; // @synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate;
@property(nonatomic) unsigned int travelTimeAggressiveEstimate; // @synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate;
@property(nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property(retain, nonatomic) NSMutableArray *routeNames; // @synthesize routeNames=_routeNames;
@property(retain, nonatomic) NSMutableArray *advisoryNotices; // @synthesize advisoryNotices=_advisoryNotices;
@property(retain, nonatomic) NSData *basicPoints; // @synthesize basicPoints=_basicPoints;
@property(nonatomic) unsigned int arrivalStepID; // @synthesize arrivalStepID=_arrivalStepID;
@property(retain, nonatomic) NSData *arrivalRouteID; // @synthesize arrivalRouteID=_arrivalRouteID;
@property(nonatomic) unsigned int departureStepID; // @synthesize departureStepID=_departureStepID;
@property(retain, nonatomic) NSData *departureRouteID; // @synthesize departureRouteID=_departureRouteID;
@property(retain, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;
@property(retain, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property(nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setIncidentEndOffsetsInRoutes:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)incidentEndOffsetsInRouteAtIndex:(unsigned long long)arg1;
- (void)addIncidentEndOffsetsInRoute:(unsigned int)arg1;
- (void)clearIncidentEndOffsetsInRoutes;
@property(readonly, nonatomic) unsigned int *incidentEndOffsetsInRoutes;
@property(readonly, nonatomic) unsigned long long incidentEndOffsetsInRoutesCount;
- (void)setIncidentIndices:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)incidentIndicesAtIndex:(unsigned long long)arg1;
- (void)addIncidentIndices:(unsigned int)arg1;
- (void)clearIncidentIndices;
@property(readonly, nonatomic) unsigned int *incidentIndices;
@property(readonly, nonatomic) unsigned long long incidentIndicesCount;
@property(readonly, nonatomic) _Bool hasUnpackedLatLngVertices;
@property(nonatomic) _Bool hasTravelTimeConservativeEstimate;
@property(nonatomic) _Bool hasTravelTimeAggressiveEstimate;
- (void)setAdvisorys:(int *)arg1 count:(unsigned long long)arg2;
- (int)advisoryAtIndex:(unsigned long long)arg1;
- (void)addAdvisory:(int)arg1;
- (void)clearAdvisorys;
@property(readonly, nonatomic) int *advisorys;
@property(readonly, nonatomic) unsigned long long advisorysCount;
@property(nonatomic) _Bool hasHistoricTravelTime;
- (id)routeNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)routeNamesCount;
- (void)addRouteName:(id)arg1;
- (void)clearRouteNames;
- (void)setTrafficColorOffsets:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (void)clearTrafficColorOffsets;
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
- (void)setTrafficColors:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)clearTrafficColors;
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) unsigned long long trafficColorsCount;
- (id)advisoryNoticeAtIndex:(unsigned long long)arg1;
- (unsigned long long)advisoryNoticesCount;
- (void)addAdvisoryNotice:(id)arg1;
- (void)clearAdvisoryNotices;
@property(readonly, nonatomic) _Bool hasBasicPoints;
@property(nonatomic) _Bool hasArrivalStepID;
@property(readonly, nonatomic) _Bool hasArrivalRouteID;
@property(nonatomic) _Bool hasDepartureStepID;
@property(readonly, nonatomic) _Bool hasDepartureRouteID;
@property(nonatomic) _Bool hasDrivingSide;
@property(nonatomic) int drivingSide; // @synthesize drivingSide=_drivingSide;
@property(readonly, nonatomic) _Bool hasZilchPoints;
@property(nonatomic) _Bool hasRouteType;
@property(nonatomic) int routeType; // @synthesize routeType=_routeType;
@property(readonly, nonatomic) _Bool hasRouteID;
@property(nonatomic) _Bool hasExpectedTime;
@property(nonatomic) _Bool hasDistance;
@property(readonly, nonatomic) _Bool hasPhoneticName;
@property(readonly, nonatomic) _Bool hasName;
- (id)stepAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepsCount;
- (void)addStep:(id)arg1;
- (void)clearSteps;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void)dealloc;
- (int)transportTypeForStep:(id)arg1;
- (_Bool)isContingentRouteFor:(id)arg1 afterPoint:(unsigned int)arg2 mainRoutes:(id)arg3;
- (id)newETARouteFromStepIndex:(unsigned long long)arg1 stepPercentRemaining:(double)arg2;
- (id)newETARoute;
- (id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(_Bool)arg2 uniquePointRange:(struct _NSRange *)arg3;
- (unsigned long long)indexForStepID:(unsigned long long)arg1;
- (id)simplifiedDescription;
- (id)debugDescription;
- (unsigned long long)stepIndexForPointIndex:(unsigned int)arg1;
- (unsigned long long)distanceFromStepIndex:(unsigned long long)arg1 toStepIndex:(unsigned long long)arg2;
- (_Bool)unpackBasicPoints;
- (_Bool)unpackZilchPoints;
- (_Bool)unpackLatLngVertices;
@property(readonly) unsigned int pointCount;
- (CDStruct_c3b9c2ee)pointAt:(unsigned int)arg1;
- (void *)controlPoints;

@end

