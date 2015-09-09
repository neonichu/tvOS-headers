//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, VKLabelNavRoadGraph, VKPolylineOverlayPainter;

__attribute__((visibility("hidden")))
@interface VKLabelNavSupport : NSObject
{
    _Bool _needsLayout;
    _Bool _drawRoadSigns;
    VKPolylineOverlayPainter *_route;
    NSString *_currentLocationText;
    _Bool _isOnRoute;
    struct PolylineCoordinate _routeUserOffset;
    unsigned long long _stepIndex;
    _Bool _checkOnRouteLabelsAlignment;
    _Bool _disableTileParseForOneLayout;
    NSMutableSet *_tiles;
    NSMutableSet *_pendingTiles;
    NSMutableArray *_junctions;
    VKLabelNavRoadGraph *_roadGraph;
    vector_4ea116aa _activeSigns;
    NSMutableArray *_fadingLabels;
    NSMutableDictionary *_visibleLabelsByName;
    NSMutableArray *_visibleLabels;
    unsigned long long _countVisibleRoadSigns;
    unsigned long long _countVisibleOnRouteRoadSigns;
    unsigned long long _maxVisibleRoadSigns;
    unsigned long long _minVisibleOnRouteRoadSigns;
    unsigned long long _maxOnRoadGraphRoadSigns;
    unsigned long long _minVisibleRoadSigns;
    unsigned long long _minVisibleProceedToRouteRoadSigns;
    _Bool _preferRightSideLabelPlacement;
    float _minSignOffsetDistance;
    NSMutableSet *_roadNamesInGuidance;
    NSMutableArray *_guidanceStepInfos;
    NSMutableArray *_routeRoadInfos;
    NSString *_currentRoadName;
    long long _currentRoadNameIndex;
    NSString *_currentShieldGroup;
    _Bool _checkIfRouteSubrangeChanged;
    _Bool _useRouteSubrange;
    struct PolylineCoordinate _routeSubrangeStart;
    struct PolylineCoordinate _routeSubrangeEnd;
}

@property(retain, nonatomic) NSString *currentShieldGroup; // @synthesize currentShieldGroup=_currentShieldGroup;
@property(retain, nonatomic) NSString *currentRoadName; // @synthesize currentRoadName=_currentRoadName;
@property(readonly, nonatomic) const vector_4ea116aa *activeSigns; // @synthesize activeSigns=_activeSigns;
@property(retain, nonatomic) NSString *currentLocationText; // @synthesize currentLocationText=_currentLocationText;
@property(nonatomic) struct PolylineCoordinate routeUserOffset; // @synthesize routeUserOffset=_routeUserOffset;
@property(nonatomic) _Bool drawRoadSigns; // @synthesize drawRoadSigns=_drawRoadSigns;
@property(retain, nonatomic) VKPolylineOverlayPainter *route; // @synthesize route=_route;
@property(readonly, nonatomic) _Bool needsLayout; // @synthesize needsLayout=_needsLayout;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned char)computeRoutePositionForPOIAtPixel:(const Matrix_8746f91e *)arg1 currentPosition:(unsigned char)arg2 context:(struct NavContext *)arg3;
- (_Bool)_updateActiveRouteRange;
- (_Bool)_findRouteOverlappingJunctionFrom:(long long)arg1 routeJunctions:(vector_682a2c99 *)arg2 lookBackward:(_Bool)arg3 firstOverlap:(long long *)arg4 secondOverlap:(long long *)arg5;
- (void)_updateCurrentRoadInfo;
- (void)_initalizeCurrentRoadInfo;
- (void)_updatePreferredLabelPlacements;
- (void)_updateRoadsInGuidance;
- (void)_updateRoadStarts;
- (void)_updateUniqueOffRouteRoads;
- (_Bool)_addJunctionsForTile:(id)arg1;
- (void)_addLabelsForJunctions:(id)arg1 withContext:(struct NavContext *)arg2 maxVisibleLabels:(unsigned long long)arg3 minOnRouteVisibleLabels:(unsigned long long)arg4 useAllJunctions:(_Bool)arg5 placeShieldsFrontToBack:(_Bool)arg6;
- (void)_addLabelsAtJunctions:(id)arg1 withContext:(struct NavContext *)arg2 maxVisibleLabels:(unsigned long long)arg3 minOnRouteVisibleLabels:(unsigned long long)arg4;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (_Bool)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3;
- (void)_tryAddLabel:(id)arg1 navContext:(struct NavContext *)arg2 labelCollisionEnabled:(_Bool)arg3;
- (void)_tryAddRoadSignForRoad:(id)arg1 isShield:(_Bool)arg2 navContext:(struct NavContext *)arg3 labelCollisionEnabled:(_Bool)arg4;
- (void)_createOrUpdateLabelForRoad:(id)arg1 isShield:(_Bool)arg2 navContext:(struct NavContext *)arg3;
- (void)_tryAddRoadSignForJunction:(id)arg1 navContext:(struct NavContext *)arg2 labelCollisionEnabled:(_Bool)arg3;
- (void)grabTilesFromScene:(id)arg1;
- (void)_refreshGuidanceRoadNames;
- (void)_reloadRouteJunctions;
- (void)clearSceneIsMemoryWarning:(_Bool)arg1;
- (_Bool)isNavMode;
- (void)dealloc;
- (void)setStyleManager:(shared_ptr_f06afc6c)arg1;
- (id)init;

@end

