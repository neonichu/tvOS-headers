//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOComposedRouteTransitStationSection.h>

@interface GEOComposedRouteTransitStationSection (RenderRegion)
- (void)updateLabelExternalObjectsInRenderRegion:(id)arg1 previousSection:(id)arg2 nextSection:(id)arg3 labelExternalObjectsModerator:(struct LabelExternalObjectsModerator *)arg4 nodeIDToStyleAttributeMap:(unordered_map_4f9963f1 *)arg5;
- (id)unsnappedPathsInOverlay:(id)arg1;
- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(_Bool)arg3;
@end

