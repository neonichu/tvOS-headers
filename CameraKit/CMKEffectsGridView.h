//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraKit/CMKGLView.h>

@class NSDictionary;

@interface CMKEffectsGridView : CMKGLView
{
    _Bool _square;
    _Bool __fetchingGridFilters;
    _Bool __atomicBlackAndWhite;
    NSDictionary *__gridFilters;
}

@property(getter=_isAtomicBlackAndWhite, setter=_setAtomicBlackAndWhite:) _Bool _atomicBlackAndWhite; // @synthesize _atomicBlackAndWhite=__atomicBlackAndWhite;
@property(setter=_setFetchingGridFilters:) _Bool _fetchingGridFilters; // @synthesize _fetchingGridFilters=__fetchingGridFilters;
@property(retain, setter=_setGridFilters:) NSDictionary *_gridFilters; // @synthesize _gridFilters=__gridFilters;
@property(getter=isSquare) _Bool square; // @synthesize square=_square;
- (void).cxx_destruct;
- (id)filterIndices;
- (unsigned long long)filterIndexForPoint:(struct CGPoint)arg1;
- (struct CGRect)rectForFilterIndex:(unsigned long long)arg1;
- (unsigned long long)_filterIndexForGridIndex:(unsigned long long)arg1;
- (unsigned long long)_gridIndexForFilterIndex:(unsigned long long)arg1;
- (unsigned long long)_cellCount;
- (unsigned long long)_cellsPerRow;
- (void)_setupGridFiltersIfNecessary;
- (struct CGRect)_squareCropFromRect:(struct CGRect)arg1;
- (void)_renderGridFilters:(id)arg1 withInputImage:(id)arg2 ciContext:(id)arg3 mirrorRendering:(_Bool)arg4;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg1 ciContext:(id)arg2 mirrorRendering:(_Bool)arg3;
@property(getter=isBlackAndWhite) _Bool blackAndWhite;
- (void)dealloc;

@end

