//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKMapItemAttribution.h>

@class GEOMapItemPhotosAttribution, NSArray;

@interface _MKMapItemPhotosAttribution : _MKMapItemAttribution
{
    GEOMapItemPhotosAttribution *_geoPhotosAttribution;
}

- (void).cxx_destruct;
- (id)urlsForPhotoWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *addPhotoURLs;
- (id)initWithGEOMapItemAttribution:(id)arg1;

@end

