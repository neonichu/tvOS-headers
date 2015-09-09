//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteStep, GEOComposedTransitStationRouteStep, GEOComposedTransitTripRouteStep, NSArray, NSDate;

@interface GEORouteMatch : NSObject
{
    GEOComposedRoute *_route;
    struct PolylineCoordinate _routeCoordinate;
    CDStruct_2c43369c _locationCoordinate;
    unsigned long long _stepIndex;
    NSArray *_candidateSteps;
    double _matchedCourse;
    double _distanceFromRoute;
    double _modifiedHorizontalAccuracy;
    double _modifiedCourseAccuracy;
    unsigned long long _consecutiveProgressionsOffRoute;
    double _distanceTraveledOffRoute;
    _Bool _isGoodMatch;
    CDStruct_209eac20 *_road;
    double _roadWidth;
    GEORouteMatch *_projectedFrom;
    NSDate *_timestamp;
    unsigned long long _transitID;
}

@property(nonatomic) unsigned long long transitID; // @synthesize transitID=_transitID;
@property(nonatomic) double distanceTraveledOffRoute; // @synthesize distanceTraveledOffRoute=_distanceTraveledOffRoute;
@property(nonatomic) unsigned long long consecutiveProgressionsOffRoute; // @synthesize consecutiveProgressionsOffRoute=_consecutiveProgressionsOffRoute;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool isGoodMatch; // @synthesize isGoodMatch=_isGoodMatch;
@property(retain, nonatomic) GEORouteMatch *projectedFrom; // @synthesize projectedFrom=_projectedFrom;
@property(nonatomic) double modifiedCourseAccuracy; // @synthesize modifiedCourseAccuracy=_modifiedCourseAccuracy;
@property(nonatomic) double modifiedHorizontalAccuracy; // @synthesize modifiedHorizontalAccuracy=_modifiedHorizontalAccuracy;
@property(nonatomic) double distanceFromRoute; // @synthesize distanceFromRoute=_distanceFromRoute;
@property(readonly, nonatomic) double roadWidth; // @synthesize roadWidth=_roadWidth;
@property(nonatomic) CDStruct_209eac20 *road; // @synthesize road=_road;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(readonly, nonatomic) double matchedCourse; // @synthesize matchedCourse=_matchedCourse;
@property(retain, nonatomic) NSArray *candidateSteps; // @synthesize candidateSteps=_candidateSteps;
@property(nonatomic) unsigned long long stepIndex; // @synthesize stepIndex=_stepIndex;
@property(nonatomic) CDStruct_c3b9c2ee locationCoordinate; // @synthesize locationCoordinate=_locationCoordinate;
@property(readonly, nonatomic) struct PolylineCoordinate routeCoordinate; // @synthesize routeCoordinate=_routeCoordinate;
- (id).cxx_construct;
- (id)description;
@property(readonly, nonatomic) GEOComposedTransitStationRouteStep *transitStationStep;
@property(readonly, nonatomic) GEOComposedTransitTripRouteStep *transitTripStep;
@property(readonly, nonatomic) GEOComposedRouteStep *step;
@property(readonly, nonatomic) _Bool projectedPastEndOfLeg;
@property(readonly, nonatomic) _Bool routeMatchedToEnd;
- (double)fractionOfCurrentStepTraveled;
- (_Bool)routeMatchBehind:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualIgnoringScore:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)updateWithMinRouteCoordinate:(struct PolylineCoordinate)arg1;
- (void)updateOffRouteProgress:(id)arg1 minDistanceToGetOnRoute:(double)arg2;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 routeCoordinate:(struct PolylineCoordinate)arg2 locationCoordinate:(CDStruct_c3b9c2ee)arg3 stepIndex:(unsigned long long)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6;
- (id)initWithComposedRoute:(id)arg1 routeStatus:(id)arg2;

@end

