//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKVectorMapModel.h>

#import <VectorKit/VKBuildingFootprintMapModelDelegate-Protocol.h>

@class NSMutableSet, VKCamera, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKTransitLineMapModel : VKVectorMapModel <VKBuildingFootprintMapModelDelegate>
{
    int _stencilRef;
    _Bool _updateSelectionIDs;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _renderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _renderState3D;
    float _inflation;
    int _styleZ;
    _Bool _forceStyleUpdate;
    struct LabelExternalObjectsModerator *_labelExternalObjectsModerator;
    int _sourceTileZtoStencilOffset;
    VKCamera *_previousCamera;
    _Bool _isTransitioningToTransit;
    unsigned char _transitLinesCommandBufferId;
    struct unique_ptr<vk::TransitNodeFeaturePool, std::__1::default_delete<vk::TransitNodeFeaturePool>> _nodeFeaturePool;
    _Bool _shouldSynchronizeWithLabels;
    VKTimedAnimation *_fadeOutAnimation;
    NSMutableSet *_lastTilesInScene;
    NSMutableSet *_tilesEnteringScene;
    NSMutableSet *_tilesLeavingScene;
    unordered_set_6cd805f9 _selectedLineIDs;
    unordered_set_6cd805f9 _selectedNodeIDs;
    unordered_set_6cd805f9 _linesOnSelectedNodes;
    unordered_set_6cd805f9 _nodesOnSelectedLines;
}

@property(readonly, nonatomic) const unordered_set_6cd805f9 *linesOnSelectedNodes; // @synthesize linesOnSelectedNodes=_linesOnSelectedNodes;
@property(readonly, nonatomic) const unordered_set_6cd805f9 *nodesOnSelectedLines; // @synthesize nodesOnSelectedLines=_nodesOnSelectedLines;
@property(readonly, nonatomic) const unordered_set_6cd805f9 *selectedNodes; // @synthesize selectedNodes=_selectedNodeIDs;
@property(readonly, nonatomic) const unordered_set_6cd805f9 *selectedLines; // @synthesize selectedLines=_selectedLineIDs;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint)arg1;
- (id)transitLineMarkersInCurrentViewport;
- (void)stylesheetDidChange;
- (void)appendTransitLineCommandsToBuffer:(struct CommandBuffer *)arg1 inContext:(id)arg2;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)didEndTransitionToTransit;
- (void)didBeginTransitionToTransit;
- (void)reset;
- (void)didReceiveMemoryWarning:(_Bool)arg1;
- (void)setSelectedNodes:(const unordered_set_6cd805f9 *)arg1;
- (void)setSelectedLines:(const unordered_set_6cd805f9 *)arg1;
- (unsigned int)minSelectedLineZoomForIDs:(const unordered_set_6cd805f9 *)arg1;
- (void)buildingFootprintMapModel:(id)arg1 didUpdateStencilRef:(int)arg2;
- (void)transitionTiles:(id)arg1 fromAlpha:(float)arg2 toAlpha:(float)arg3 animated:(_Bool)arg4;
- (void)stopFadeOut;
- (void)beginFadeOut:(CDUnknownBlockType)arg1;
- (void)willDeactivate;
- (void)_clearLastTilesInScene;
- (void)_willStopDrawingTiles:(id)arg1;
- (void)_willStartDrawingTiles:(id)arg1;
- (unsigned long long)mapLayerPosition;
- (void)dealloc;
- (void)clearDelegates;
- (id)initWithSharedResources:(id)arg1 contentScale:(double)arg2 labelExternalObjectsModerator:(struct LabelExternalObjectsModerator *)arg3;
- (id)initWithSharedResources:(id)arg1 contentScale:(double)arg2 labelExternalObjectsModerator:(struct LabelExternalObjectsModerator *)arg3 supportedPassId:(unsigned char)arg4 shouldSynchronizeWithLabels:(_Bool)arg5;

@end

