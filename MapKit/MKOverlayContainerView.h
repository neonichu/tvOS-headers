//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableOrderedSet;
@protocol MKOverlayContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface MKOverlayContainerView : UIView
{
    NSMutableOrderedSet *_overlays[2];
    NSMapTable *_overlayToDrawable[2];
    NSMutableArray *_drawables[2];
    NSMutableArray *_vkOverlays[2];
    UIView *_viewContainers[2];
    id <MKOverlayContainerViewDelegate> _delegate;
    double _mapZoomScale;
}

@property(nonatomic) double mapZoomScale; // @synthesize mapZoomScale=_mapZoomScale;
@property(nonatomic) __weak id <MKOverlayContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_insertDrawable:(id)arg1 forOverlay:(id)arg2 atIndex:(long long)arg3 level:(long long)arg4;
- (void)_updateContentScale:(id)arg1;
- (void)_removeDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3;
- (id)drawableForOverlay:(id)arg1;
- (id)overlaysInLevel:(long long)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (void)_exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 level:(long long)arg3;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 level:(long long)arg3;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (long long)_levelForOverlay:(id)arg1 exists:(_Bool *)arg2;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addOverlays:(id)arg1 level:(long long)arg2;
- (void)addOverlay:(id)arg1 level:(long long)arg2;
- (void)addAndRemoveOverlayViews;
- (id)_considerAddingDrawable:(id)arg1 inAddRect:(CDStruct_90e2a262)arg2 level:(long long)arg3;
- (void)_configureAndAddDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3;
- (CDStruct_90e2a262)_mapRectWithFractionOfVisible:(double)arg1;
- (long long)_drawableIndexForDrawable:(id)arg1 level:(long long)arg2;
- (id)_viewContainerForLevel:(long long)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

