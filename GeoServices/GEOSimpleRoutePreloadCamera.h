//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEORoutePreloadCamera-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOSimpleRoutePreloadCamera : NSObject <GEORoutePreloadCamera>
{
    unsigned long long _zoomLevel;
}

- (unsigned long long)zoomLevel;
- (void)implicateTilesForCoordinate:(CDStruct_c3b9c2ee)arg1 route:(id)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(_Bool)arg4 into:(id)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7;
- (id)initWithZoomLevel:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

