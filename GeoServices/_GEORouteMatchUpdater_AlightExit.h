//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep, GEOPBTransitStation, GEOPBTransitStop;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_AlightExit : _GEORouteMatchUpdater
{
    GEOPBTransitStop *_alightStop;
    GEOPBTransitStation *_alightStation;
    struct PolylineCoordinate _routeCoordinateAlightStation;
    GEOComposedRouteStep *_alightStep;
    GEOComposedRouteStep *_postAlightStep;
    GEOComposedRouteStep *_postAlightWalkingStep;
}

- (id).cxx_construct;
- (_Bool)_isLocationNearAlightNode:(id)arg1;
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (void)dealloc;
- (id)initWithTransitRouteMatcher:(id)arg1 alightStep:(id)arg2;

@end

