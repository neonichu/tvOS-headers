//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTileSetBackedTileSource.h>

__attribute__((visibility("hidden")))
@interface VKRealisticTileSource : VKTileSetBackedTileSource
{
}

- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (unsigned long long)mapLayerForZoomLevelRange;
- (long long)defaultMaximumZoomLevel;
- (long long)defaultMinimumZoomLevel;
- (_Bool)minimumZoomLevelBoundsCamera;

@end

