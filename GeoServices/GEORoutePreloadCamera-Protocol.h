//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOComposedRoute, GEOTileKeyList;

@protocol GEORoutePreloadCamera <NSObject>
- (void)implicateTilesForCoordinate:(CDStruct_c3b9c2ee)arg1 route:(GEOComposedRoute *)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(_Bool)arg4 into:(GEOTileKeyList *)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7;
@end

