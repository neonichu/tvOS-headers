//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, _UIFlowLayoutInfo;

@interface UICollectionViewFlowLayout : UICollectionViewLayout
{
    struct {
        unsigned int delegateSizeForItem:1;
        unsigned int delegateReferenceSizeForHeader:1;
        unsigned int delegateReferenceSizeForFooter:1;
        unsigned int delegateInsetForSection:1;
        unsigned int delegateInteritemSpacingForSection:1;
        unsigned int delegateLineSpacingForSection:1;
        unsigned int delegateAlignmentOptions:1;
        unsigned int layoutDataIsValid:1;
        unsigned int delegateInfoIsValid:1;
        unsigned int roundsToScreenScale:1;
        unsigned int delegateSizesForSection:1;
        unsigned int sectionHeadersFloat:1;
        unsigned int sectionFootersFloat:1;
    } _gridLayoutFlags;
    double _interitemSpacing;
    double _lineSpacing;
    struct CGSize _itemSize;
    struct CGSize _estimatedItemSize;
    struct CGSize _headerReferenceSize;
    struct CGSize _footerReferenceSize;
    struct UIEdgeInsets _sectionInset;
    _UIFlowLayoutInfo *_data;
    struct CGSize _currentLayoutSize;
    NSMutableDictionary *_insertedItemsAttributesDict;
    NSMutableDictionary *_insertedSectionHeadersAttributesDict;
    NSMutableDictionary *_insertedSectionFootersAttributesDict;
    NSMutableDictionary *_deletedItemsAttributesDict;
    NSMutableDictionary *_deletedSectionHeadersAttributesDict;
    NSMutableDictionary *_deletedSectionFootersAttributesDict;
    long long _scrollDirection;
    NSDictionary *_rowAlignmentsOptionsDictionary;
    struct CGPoint _contentOffsetAdjustment;
    struct CGSize _contentSizeAdjustment;
    NSMutableArray *_indexPathsToValidate;
    NSMutableDictionary *_cachedItemAttributes;
    NSMutableDictionary *_cachedItemFrames;
}

+ (Class)invalidationContextClass;
@property(nonatomic) struct CGSize estimatedItemSize; // @synthesize estimatedItemSize=_estimatedItemSize;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) struct CGSize footerReferenceSize; // @synthesize footerReferenceSize=_footerReferenceSize;
@property(nonatomic) struct CGSize headerReferenceSize; // @synthesize headerReferenceSize=_headerReferenceSize;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_interitemSpacing;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_lineSpacing;
- (void).cxx_destruct;
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;
@property(nonatomic) _Bool sectionFootersPinToVisibleBounds;
@property(nonatomic) _Bool sectionHeadersPinToVisibleBounds;
- (_Bool)_roundsToScreenScale;
- (void)_setRoundsToScreenScale:(_Bool)arg1;
- (long long)_sectionArrayIndexForIndexPath:(id)arg1;
- (void)_updateContentSizeScrollingDimensionWithDelta:(double)arg1;
- (id)_rowAlignmentOptions;
- (void)_setRowAlignmentsOptions:(id)arg1;
- (void)_invalidateButKeepAllInfo;
- (void)_invalidateButKeepDelegateInfo;
- (struct CGSize)synchronizeLayout;
- (id)finalLayoutAttributesForFooterInDeletedSection:(long long)arg1;
- (id)finalLayoutAttributesForHeaderInDeletedSection:(long long)arg1;
- (id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForFooterInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForHeaderInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)_setNeedsLayoutComputationWithoutInvalidation;
- (struct CGRect)_frameForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect)_frameForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect)_frameForItem:(long long)arg1 inSection:(long long)arg2 usingData:(id)arg3;
- (void)_fetchItemsInfoForRect:(struct CGRect)arg1;
- (void)_updateItemsLayoutForRect:(struct CGRect)arg1;
- (void)_getSizingInfos;
- (void)_updateDelegateFlags;
@property(nonatomic) long long scrollDirection;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)_layoutAttributesForItemsInRect:(struct CGRect)arg1;
- (id)_existingLayoutAttributesForItemAtIndexPath:(id)arg1;
- (id)_fetchAndCacheNewLayoutAttributesForCellWithIndexPath:(id)arg1 frame:(struct CGRect)arg2;
@property(readonly, nonatomic, getter=_estimatesSizes) _Bool estimatesSizes;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (_Bool)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)_calculateAttributesForRect:(struct CGRect)arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1;
- (id)layoutAttributesForHeaderInSection:(long long)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2;
- (id)layoutAttributesForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (id)layoutAttributesForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect)arg1;
- (id)indexesForSectionHeadersInRect:(struct CGRect)arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect)arg1 usingData:(id)arg2;
- (id)indexesForSectionHeadersInRect:(struct CGRect)arg1 usingData:(id)arg2;
- (struct CGSize)collectionViewContentSize;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (struct CGSize)_estimatedItemSize;
- (void)_setEstimatedItemSize:(struct CGSize)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

