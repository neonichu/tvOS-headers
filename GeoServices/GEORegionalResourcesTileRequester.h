//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOTileRequester.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEORegionalResourcesTileRequester : GEOTileRequester
{
    NSMutableArray *_loaders;
}

+ (unsigned char)tileProviderIdentifier;
- (void)cancel;
- (void)start;
- (void)dealloc;

@end

