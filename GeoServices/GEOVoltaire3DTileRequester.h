//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOVoltaireTileRequester.h>

@interface GEOVoltaire3DTileRequester : GEOVoltaireTileRequester
{
}

+ (Class)simpleRequesterClass;
+ (id)queryStringFromKey:(const struct _GEOTileKey *)arg1 manifestConfiguration:(id)arg2;
+ (struct _GEOTileKey)patchTileKey:(struct _GEOTileKey *)arg1;
+ (unsigned char)tileProviderIdentifier;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;

@end

