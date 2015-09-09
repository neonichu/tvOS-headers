//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKVectorMapModel.h>

#import <VectorKit/VKMapLayer-Protocol.h>
#import <VectorKit/VKMercatorTerrainHeightProvider-Protocol.h>

@class NSString, VK3DObjectSubMapModel, VKMercatorTerrainHeightCache, VKSkyModel, VKTimedAnimation;
@protocol VKBuildingFootprintMapModelDelegate;

__attribute__((visibility("hidden")))
@interface VKBuildingFootprintMapModel : VKVectorMapModel <VKMercatorTerrainHeightProvider, VKMapLayer>
{
    float _brightness;
    long long _vectorType;
    int _buildingMode;
    VKTimedAnimation *_styleChangeAnimation;
    VKTimedAnimation *_fadeBuildingAnimation;
    _Bool _fadeTiles;
    VKSkyModel *_skyModel;
    struct unordered_map<VKVectorTile *, OccluderGroupList, std::__1::hash<VKVectorTile *>, std::__1::equal_to<VKVectorTile *>, std::__1::allocator<std::__1::pair<VKVectorTile *const, OccluderGroupList>>> _currentOccluders;
    struct unordered_map<VKVectorTile *, OccluderGroupList, std::__1::hash<VKVectorTile *>, std::__1::equal_to<VKVectorTile *>, std::__1::allocator<std::__1::pair<VKVectorTile *const, OccluderGroupList>>> _previousOccluders;
    struct RenderItemBatcher _batcher;
    float _minLayeringHeight;
    float _maxLayeringHeight;
    _Bool _shouldDraw3DBuildingsInVectorBuildingsRenderPass;
    _Bool _shouldDraw3DBuildingsIn3DBuildingsRenderPass;
    _Bool _initializedStyles;
    id <VKBuildingFootprintMapModelDelegate> _delegate;
    int _stencilRef;
    VK3DObjectSubMapModel *_landmarksModel;
    shared_ptr_f06afc6c _styleManager;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingFlatStroke::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingFlatStroke::Shader::Setup>>> _strokeShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingFlat::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingFlat::Shader::Setup>>> _fillShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingTop::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingTop::Shader::Setup>>> _topShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::FoggedBuildingTop::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::FoggedBuildingTop::Shader::Setup>>> _foggedTopShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PrefilteredLine::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PrefilteredLine::Shader::Setup>>> _stroke3DShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::Building::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Building::Shader::Setup>>> _buildingShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::FoggedBuilding::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::FoggedBuilding::Shader::Setup>>> _foggedBuildingShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingPointyRoof::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingPointyRoof::Shader::Setup>>> _pointyRoofShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingShadow::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingShadow::Shader::Setup>>> _shadowShaderSetupPool;
    struct shared_ptr<ggl::RenderState> _strokeRenderState;
    struct shared_ptr<ggl::RenderState> _fillRenderState;
    struct shared_ptr<ggl::RenderState> _fillRenderStateWithBlending;
    struct shared_ptr<ggl::RenderState> _threeDRenderStateWithoutBlending;
    struct shared_ptr<ggl::RenderState> _threeDRenderStateWithBlending;
    struct shared_ptr<ggl::RenderState> _threeDStrokeRenderState;
    struct shared_ptr<ggl::RenderState> _shadowsRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem>>> _stroke3DRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem>>> _buildingRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem>>> _shadowRenderItemPool;
    _Bool _supportsStrokes;
    _Bool _supports3DStrokes;
    _Bool _supportsBuildingShadows;
    _Bool _supports3DBuildings;
    VKMercatorTerrainHeightCache *_heightCache;
}

@property(retain, nonatomic) VK3DObjectSubMapModel *landmarksModel; // @synthesize landmarksModel=_landmarksModel;
@property(nonatomic) id <VKBuildingFootprintMapModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VKSkyModel *skyModel; // @synthesize skyModel=_skyModel;
@property(nonatomic) int buildingMode; // @synthesize buildingMode=_buildingMode;
@property(readonly, nonatomic) VKMercatorTerrainHeightCache *heightCache; // @synthesize heightCache=_heightCache;
@property(nonatomic) _Bool fadeTiles; // @synthesize fadeTiles=_fadeTiles;
@property(nonatomic) long long vectorType; // @synthesize vectorType=_vectorType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)featureMarkerInTile:(id)arg1 atPoint:(struct VKPoint *)arg2;
- (void)setBuildingMode:(int)arg1 animated:(_Bool)arg2;
- (void)generateRenderItemsForBuildingShadowsInScene:(id)arg1 withContext:(id)arg2 commandBuffer:(struct CommandBuffer *)arg3;
- (void)generate3DBuildingRenderItemsForScene:(id)arg1 withContext:(id)arg2 commandBuffer:(struct CommandBuffer *)arg3;
- (void)generate3DBuildingRenderItemsIfNecessaryForScene:(id)arg1 withContext:(id)arg2 commandBuffer:(struct CommandBuffer *)arg3;
- (void)generate2DBuildingRenderItemsForScene:(id)arg1 withContext:(id)arg2 commandBuffer:(struct CommandBuffer *)arg3;
- (void)generate2DBuildingRenderItemsIfNecessaryForScene:(id)arg1 withContext:(id)arg2 commandBuffer:(struct CommandBuffer *)arg3;
- (void)_updateBuildingModeForContext:(id)arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)resetPools;
- (void)flushPools;
- (void)didReceiveMemoryWarning:(_Bool)arg1;
- (void)reset;
- (_Bool)wantsCategorizedSourceTiles;
- (double)heightAtPoint:(struct VKPoint)arg1;
- (void)removePersistingExitingTiles:(id)arg1;
- (void)animateTiles:(id)arg1 fromAlpha:(float)arg2 toAlpha:(float)arg3 fromScale:(float)arg4 toScale:(float)arg5;
- (void)willStopDrawingTiles:(id)arg1;
- (void)willStartDrawingTiles:(id)arg1;
- (double)maxTileHeightAtPoint:(struct VKPoint)arg1;
- (void)stylesheetDidChange;
- (void)_updateStyles;
- (void)vectorTypeDidChange;
- (void)setActive:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (unsigned long long)mapLayerPosition;
- (void)_clearOccluders;
@property(nonatomic) shared_ptr_f06afc6c styleManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

