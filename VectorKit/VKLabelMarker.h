//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKFeatureMarker.h>

@class NSArray;

@interface VKLabelMarker : VKFeatureMarker
{
    shared_ptr_dd1f7020 _manager;
    shared_ptr_0c41964b _label;
    float _contentScale;
    unsigned long long _featureID;
    unsigned char _labelFeatureType;
    int _featureType;
    struct _retain_ptr<GEOVectorTile *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _featureTile;
    NSArray *_shields;
    struct vector<unsigned long long, std::__1::allocator<unsigned long long>> _featureIDs;
    NSArray *_relatedTexts;
    NSArray *_iconImageKeys;
    NSArray *_imageKeys;
    int _sortKey;
}

@property(readonly, nonatomic) NSArray *relatedTexts; // @synthesize relatedTexts=_relatedTexts;
@property(readonly, nonatomic) NSArray *imageKeys; // @synthesize imageKeys=_imageKeys;
@property(readonly, nonatomic) NSArray *shields; // @synthesize shields=_shields;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)styleAttributes;
- (_Bool)shouldActivateFeatureSelectionMode;
- (id)debugAnchorPointString;
- (int)sortKey;
- (unsigned long long)animationID;
- (int)selectionType;
- (_Bool)isLabelHitAtScreenPoint:(struct CGPoint)arg1 selectableLabelsOnly:(_Bool)arg2;
- (struct CGRect)screenCollisionBounds;
- (struct CGPoint)screenPointToScrollRelativeToWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2;
- (struct CGPoint)calloutAnchorPointWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(_Bool)arg3;
- (void)setLabelPressed:(_Bool)arg1;
- (void)setLabelSelected:(_Bool)arg1;
- (id)featureHandles;
- (id)incident;
- (id)featureTile;
- (int)featureType;
- (unsigned long long)countFeatureIDs;
- (const unsigned long long *)featureIDs;
- (unsigned long long)featureID;
- (unsigned long long)businessID;
- (_Bool)hasBusinessID;
- (_Bool)isTransitLine;
- (_Bool)isTransit;
- (_Bool)isFlyoverTour;
- (_Bool)isTrafficIncident;
- (_Bool)isOneWayArrow;
- (_Bool)isTextVisible;
- (_Bool)isOnRoute;
- (_Bool)isSelectable;
- (struct CGRect)calloutAnchorRect;
- (id)mapRegion;
- (CDStruct_d2b197d1)_bounds;
- (CDStruct_c3b9c2ee)coordinate;
@property(readonly, nonatomic) NSArray *transitSystems;
- (const basic_string_a1f69cfb *)iconName;
- (id)iconNameAsNSString;
- (id)subtext;
- (id)text;
- (shared_ptr_0c41964b)infoLabel;
- (id)name;
@property(readonly, nonatomic) NSArray *iconImageKeys; // @synthesize iconImageKeys=_iconImageKeys;
- (void)_populateIconImageKeysFromTransitAccessPointFeature:(CDStruct_8b158606 *)arg1;
- (void)_populateImageKeysFromTransitAccessPointFeature:(CDStruct_8b158606 *)arg1;
- (void)_populateRelatedTextForTransitAccessPointFeature:(CDStruct_8b158606 *)arg1;
- (id)_iconImageKeysForLabel;
- (void)_populateImageKeysFromRouteTransitNodeFeature:(const struct LabelExternalPointFeature *)arg1;
- (void)_populateImageKeysFromTransitNodeFeature:(struct GEOTransitNodeFeature *)arg1;
- (void)_populateImageKeysFromTransitLinkFeature:(const struct TransitLinksLabelFeature *)arg1;
- (void)_populateImageKeysFromTransitLineFeature:(CDStruct_5be08681 *)arg1;
- (void)_populateRelatedTextFromTransitlines;
- (void)dealloc;
- (id)initWithManager:(const shared_ptr_dd1f7020 *)arg1 infoLabel:(const shared_ptr_0c41964b *)arg2 contentScale:(float)arg3 featureInfo:(const struct LabelFeatureInfo *)arg4;

@end

