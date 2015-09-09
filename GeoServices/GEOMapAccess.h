//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOMapRequestManager.h>

@class NSObject;
@protocol GEOMapAccessRestrictions, OS_dispatch_queue;

@interface GEOMapAccess : GEOMapRequestManager
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <GEOMapAccessRestrictions> _restrictions;
    CDUnknownBlockType _tileErrorHandler;
    unsigned int _zoomLevel;
}

+ (id)transitMap;
+ (id)realisticMap;
+ (_Bool)supportsTransitMap;
+ (_Bool)supportsRealisticMap;
@property(nonatomic) unsigned int zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(copy, nonatomic) CDUnknownBlockType tileErrorHandler; // @synthesize tileErrorHandler=_tileErrorHandler;
@property(nonatomic) id <GEOMapAccessRestrictions> restrictions; // @synthesize restrictions=_restrictions;
- (id)_transitPointForTransitMapNode:(shared_ptr_52e51bdf)arg1;
- (id)_findTransitPointWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 type:(unsigned long long)arg3 pointHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_findTransitPointsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 type:(unsigned long long)arg3 pointHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)buildMapEdgeTransitFrom:(const struct TransitEdgePiece *)arg1 edgeHandler:(CDUnknownBlockType)arg2;
- (id)buildMapEdgeFrom:(const CDStruct_91f75a7f *)arg1 edgeHandler:(CDUnknownBlockType)arg2;
- (id)findRoadTilesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 tileHander:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitPointWithParentID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 type:(unsigned long long)arg3 pointHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)findTransitHallWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 hallHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStopWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 stopHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStationWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 stationHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitNodeWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 nodeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitPointWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 pointHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitHallsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 hallHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStopsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 stopHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStationsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 stationHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitNodesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 nodeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitPointsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 pointHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitLinksWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 linkHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitEdgesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 edgeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findRoadsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findRoadEdgesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 edgeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findClosestRoadAtCoordinate:(CDStruct_c3b9c2ee)arg1 roadHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findClosestNamedFeaturesAtCoordinate:(CDStruct_c3b9c2ee)arg1 roadHandler:(CDUnknownBlockType)arg2 pointHandler:(CDUnknownBlockType)arg3 polygonHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) _Bool allowsNetworkTileLoad;
@property(readonly, nonatomic) unsigned int maxTransitZoomLevel;
@property(readonly, nonatomic) unsigned int maxZoomLevel;
@property(readonly, nonatomic) unsigned int minZoomLevel;
- (void)setCallbackQueue:(id)arg1;
- (id)callbackQueue;
- (void)dealloc;
- (id)init;

@end

