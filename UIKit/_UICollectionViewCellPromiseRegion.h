//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIFocusRegion-Protocol.h>

@class NSString, UICollectionView, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface _UICollectionViewCellPromiseRegion : NSObject <_UIFocusRegion>
{
    UICollectionView *_collectionView;
    UICollectionViewLayoutAttributes *_layoutAttributes;
}

@property(retain, nonatomic) UICollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)_focusDebugOverlayParentView;
- (id)_focusRegionGuides;
- (id)_focusRegionView;
- (_Bool)_isTransparentFocusRegion;
- (id)_fulfillPromisedFocusRegion;
- (_Bool)_isPromiseFocusRegion;
- (id)_childFocusRegionsInRect:(struct CGRect)arg1;
- (id)_childFocusRegions;
- (id)_focusRegionItem;
- (_Bool)_focusRegionCanBecomeFocused;
- (_Bool)_focusRegionIsEligibleForFocus;
- (struct CGRect)_focusRegionFrame;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

