//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceHeaderBackgroundView.h>

@class GEOPDFlyover, MKMapView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface MKPlaceHeaderBackgroundView_Flyover : MKPlaceHeaderBackgroundView
{
    _Bool _animationPaused;
    _Bool _animationPrepared;
    UITapGestureRecognizer *_interactionTapRecognizer;
    MKMapView *_mapView;
    GEOPDFlyover *_flyover;
}

- (void)setFlyover:(id)arg1;
- (id)flyover;
- (void)setMapView:(id)arg1;
- (id)mapView;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)reset;
- (void)present;
- (void)_pauseTour;
- (void)setFrame:(struct CGRect)arg1;
- (void)prepareForPresentation;
- (id)initWithFrame:(struct CGRect)arg1 mapItem:(id)arg2;

@end

