//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GEOMapItemURLExtras : NSObject
{
}

+ (id)mapItemsFromURL:(id)arg1 hasCurrentLocation:(_Bool *)arg2 currentLocationIndex:(unsigned long long *)arg3 options:(id *)arg4;
+ (id)_mapItemsFromDirectionsAction:(id)arg1 hasCurrentLocation:(_Bool *)arg2 currentLocationIndex:(unsigned long long *)arg3 options:(id *)arg4;
+ (id)_mapItemsFromPresentAction:(id)arg1 hasCurrentLocation:(_Bool *)arg2 currentLocationIndex:(unsigned long long *)arg3 options:(id *)arg4;
+ (id)urlToPresentDirectionsFromCurrentLocationToMapItem:(id)arg1 withOptions:(id)arg2;
+ (id)urlToPresentDirectionsForItems:(id)arg1 options:(id)arg2;
+ (id)urlToPresentAction:(id)arg1 present:(id)arg2;

@end

