//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteSection, GEOMapRequest, NSArray;

@interface GEOSnappedRoutePath : NSObject
{
    GEOComposedRoute *_route;
    GEOComposedRouteSection *_section;
    NSArray *_edges;
    GEOMapRequest *_edgeSearchRequest;
    struct __CFSet *_observers;
    struct unique_ptr<geo::RouteMapMatchingSection, std::__1::default_delete<geo::RouteMapMatchingSection>> _mapMatchingSection;
    _Bool _hasCompletedMapMatching;
    unsigned int _routeStartIndex;
    unsigned int _routeEndIndex;
    unsigned int _unsnappedPointCount;
    CDStruct_b2fbf00d *_unsnappedPoints;
}

@property(readonly) unsigned int routeEndIndex; // @synthesize routeEndIndex=_routeEndIndex;
@property(readonly) unsigned int routeStartIndex; // @synthesize routeStartIndex=_routeStartIndex;
@property(readonly) GEOComposedRouteSection *section; // @synthesize section=_section;
@property(readonly) NSArray *edges; // @synthesize edges=_edges;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)hasObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)removeObserver:(id)arg1;
@property(readonly) const struct RouteMapMatchingSection *mapMatchingSection;
- (void)matchWithDecoder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (float)_calculateEdgeLengthFrom:(const Matrix_8746f91e *)arg1 to:(const Matrix_8746f91e *)arg2 startCoord:(const struct PolylineCoordinate *)arg3 endCoord:(const struct PolylineCoordinate *)arg4;
@property(readonly) _Bool isMapMatching;
@property(readonly) _Bool isMapMatched;
@property(readonly) _Bool hasCompletedMapMatching;
- (void)_debugPrintEdge:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4;

@end

