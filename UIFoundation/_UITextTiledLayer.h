//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSMutableArray;

@interface _UITextTiledLayer : CALayer
{
    NSMutableArray *_visibleTiles;
    NSMutableArray *_unusedTiles;
    struct CGRect _gridBounds;
    struct CGSize _tileSize;
    struct {
        unsigned int disableTiling:1;
        unsigned int ditchAllTiles:1;
        unsigned int suspendLayout:4;
    } _tcTiledLayerFlags;
}

- (void)renderInContext:(struct CGContext *)arg1;
- (void)resumeTiling;
- (void)suspendTiling;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSublayers;
- (void)_prepareTilesForVisibleBounds:(struct CGRect)arg1 inBounds:(struct CGRect)arg2;
- (void)_prepareGridForBounds:(struct CGRect)arg1;
- (void)setDrawsAsynchronously:(_Bool)arg1;
- (id)_preparedTileForFrame:(struct CGRect)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
@property(nonatomic) _Bool usesTiledLayers;
- (void)drawDirtyLayer:(id)arg1 intoContext:(struct CGContext *)arg2;
- (void)dealloc;
- (id)init;

@end

