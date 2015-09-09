//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import <StoreKitUI/SKUIStorePageCollectionViewLayout-Protocol.h>

@class NSArray, NSIndexSet, NSMapTable, NSString, UIColor;

@interface SKUIStorePageCollectionViewLayout : UICollectionViewFlowLayout <SKUIStorePageCollectionViewLayout>
{
    NSString *_backdropGroupName;
    UIColor *_collectionViewBackgroundColor;
    _Bool _hasValidGradientIndexPaths;
    _Bool _hasValidIndexPathsForPinningItems;
    _Bool _hasValidPinnedBackdropViewStyle;
    _Bool _hasValidPinningLayoutInformation;
    long long _inLayoutAttributesForElementsCount;
    NSMapTable *_indexPathToItemPinningConfiguration;
    NSMapTable *_indexPathToPinningLayoutInformation;
    NSArray *_indexPathsForGradientItems;
    NSArray *_indexPathsForPinningItems;
    double _overrideContentWidth;
    long long _pinnedBackdropViewStyle;
    _Bool _rendersWithParallax;
    _Bool _rendersWithPerspective;
    struct {
        unsigned int respondsToIndexPathsForPinningItems:1;
        unsigned int respondsToPinningContentInsetForItemAtIndexPath:1;
        unsigned int respondsToPinningStyleForItemAtIndexPath:1;
        unsigned int respondsToPinningTransitionStyleForItemAtIndexPath:1;
        unsigned int respondsToWillApplyLayoutAttributes:1;
    } _collectionViewDelegateFlags;
    NSArray *_updateItems;
    _Bool _allowsPinningTransitions;
    NSIndexSet *_expandChildPageSectionsIndexSet;
}

+ (Class)layoutAttributesClass;
+ (Class)invalidationContextClass;
@property(copy, nonatomic) NSIndexSet *expandChildPageSectionsIndexSet; // @synthesize expandChildPageSectionsIndexSet=_expandChildPageSectionsIndexSet;
@property(nonatomic) _Bool allowsPinningTransitions; // @synthesize allowsPinningTransitions=_allowsPinningTransitions;
@property(nonatomic) _Bool rendersWithParallax; // @synthesize rendersWithParallax=_rendersWithParallax;
@property(nonatomic) _Bool rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property(nonatomic) double overrideContentWidth; // @synthesize overrideContentWidth=_overrideContentWidth;
@property(copy, nonatomic) NSArray *indexPathsForGradientItems; // @synthesize indexPathsForGradientItems=_indexPathsForGradientItems;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
- (void).cxx_destruct;
- (struct CGRect)_targetFrameForStartingFrame:(struct CGRect)arg1 itemPinningConfiguration:(id)arg2 layoutInformation:(id)arg3 atIndexPath:(id)arg4 returningIsPinning:(out _Bool *)arg5;
- (long long)_pinningTransitionStyleForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (long long)_pinningStyleForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect)_pinningFrameForStartingFrame:(struct CGRect)arg1 itemPinningConfiguration:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets)_pinningContentInsetForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (long long)_pinnedBackdropViewStyle;
- (id)_layoutAttributesForGradientDecorationViewAtIndexPath:(id)arg1 currentAttributes:(id)arg2;
- (id)_layoutAttributesForPinnedBackdropDecorationViewAtIndexPath:(id)arg1 pinningConfiguration:(id)arg2 layoutInformation:(id)arg3;
- (id)_itemPinningLayoutInformationForItemAtIndexPath:(id)arg1;
- (id)_itemPinningConfigurationForItemAtIndexPath:(id)arg1;
- (void)_invalidatePinningLayoutInformation;
- (id)_indexPathsForPinningItems;
- (id)_indexPathsForBackgroundGradients;
- (id)_getCollectionViewUpdateItemForItemFromIndex:(long long)arg1 initalLayout:(_Bool)arg2;
- (void)_configureCellLayoutAttributes:(id)arg1 forItemWithPinningConfiguration:(id)arg2 layoutInformation:(id)arg3 atIndexPath:(id)arg4 allowPinning:(_Bool)arg5 returningIsPinning:(out _Bool *)arg6;
- (void)_calculatePinningLayoutInformation;
- (void)_appendAdditionalLayoutAttributesForPinningItemsInRect:(struct CGRect)arg1 toArray:(id)arg2;
- (_Bool)_allowsBackdropDecorationForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (id)pinnedLayoutAttributesForItemsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1;
- (void)_updateItemsLayoutForRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)_alginCellsToTop:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
@property(readonly, nonatomic) NSArray *indexPathsForPinningItems;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

