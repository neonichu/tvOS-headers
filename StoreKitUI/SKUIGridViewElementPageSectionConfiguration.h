//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SKUIStorePageSectionContext, SKUIViewElementLayoutContext, UIColor;
@protocol SKUIGridViewElementPageSectionConfigurationDataSource;

@interface SKUIGridViewElementPageSectionConfiguration : NSObject
{
    long long _cardVerticalSpacingStyle;
    double _cellContentWidth;
    _Bool _cellPaddingNeedsReloading;
    double _cellPaddingInteriorHorizontal;
    double _cellPaddingLeftEdgeHorizontal;
    double _cellPaddingRightEdgeHorizontal;
    struct UIEdgeInsets _gridViewElementStyleElementPadding;
    double _gridViewElementStyleItemWidth;
    _Bool _gridViewElementStyleItemWidthIsPercentage;
    _Bool _gridIsEdgeToEdge;
    _Bool _hasGridViewElementStyle;
    _Bool _hasHeader;
    struct UIEdgeInsets _separatorMargins;
    long long _lockupType;
    double _minimumCellHeight;
    unsigned long long _numberOfGridItems;
    NSArray *_positions;
    UIColor *_separatorColor;
    long long _separatorStyle;
    struct UIEdgeInsets _separatorWidths;
    _Bool _showsEditMode;
    NSArray *_viewElements;
    struct {
        unsigned int configurePositionForItemAtIndexPath:1;
    } _dataSourceRespondsToSelectorFlags;
    _Bool _rendersWithPerspective;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    long long _numberOfColumns;
    SKUIStorePageSectionContext *_pageSectionContext;
    id <SKUIGridViewElementPageSectionConfigurationDataSource> _dataSource;
}

@property(nonatomic) __weak id <SKUIGridViewElementPageSectionConfigurationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) _Bool showsEditMode; // @synthesize showsEditMode=_showsEditMode;
@property(nonatomic) _Bool rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property(retain, nonatomic) SKUIStorePageSectionContext *pageSectionContext; // @synthesize pageSectionContext=_pageSectionContext;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(retain, nonatomic) SKUIViewElementLayoutContext *cellLayoutContext; // @synthesize cellLayoutContext=_cellLayoutContext;
- (void).cxx_destruct;
- (_Bool)_useOrdinalPadding;
- (void)_reloadCellPaddingIfNeeded;
- (long long)_numberOfColumnsForWidth:(double)arg1 style:(id)arg2;
- (struct UIEdgeInsets)_normalizedContentInsetForViewElement:(id)arg1 indexPath:(id)arg2;
- (long long)_lockupTypeForLockup:(id)arg1;
- (id)_lockupCellReuseIdentifierWithLockup:(id)arg1;
- (_Bool)_isContainedWithinExploreTemplateWithGridViewElement:(id)arg1;
- (void)_enumerateViewElementsForRowOfIndexPath:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (double)_columnContentWidthPaddingForWidth:(double)arg1;
- (double)_cellPaddingRightEdgeHorizontal;
- (double)_cellPaddingLeftEdgeHorizontal;
- (double)_cellPaddingInteriorHorizontal;
- (struct UIEdgeInsets)_cellInsetsForViewElement:(id)arg1 indexPath:(id)arg2;
- (double)_cellHeightForViewElement:(id)arg1 width:(double)arg2;
- (double)_cellContentWidth;
- (Class)_cardCellClassForCard:(id)arg1;
- (id)_cardArtworkBoundingSizeForIndexPath:(id)arg1;
- (_Bool)viewElementIsStandardCard:(id)arg1;
- (void)updateStylePropertiesForGridViewElement:(id)arg1 gridItemViewElements:(id)arg2 numberOfGridItems:(unsigned long long)arg3;
- (void)updateLayoutPropertiesForGridViewElement:(id)arg1;
- (struct UIEdgeInsets)sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets)arg1 forGridViewElement:(id)arg2;
- (void)requestCellLayoutForViewElement:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 forViewElement:(id)arg2 reason:(long long)arg3;
- (void)registerReusableClassesForCollectionView:(id)arg1;
- (long long)positionForIndexPath:(id)arg1;
- (Class)lockupCellClassWithLockup:(id)arg1;
- (void)configureCell:(id)arg1 forViewElement:(id)arg2 indexPath:(id)arg3;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (struct CGSize)cellSizeForViewElement:(id)arg1 indexPath:(id)arg2;
- (id)cellForViewElement:(id)arg1 indexPath:(id)arg2;
- (Class)cellClassForViewElement:(id)arg1;
- (id)backgroundColorForViewElement:(id)arg1;
@property(readonly, nonatomic) double columnWidth;
@property(readonly, nonatomic) double columnContentWidth;

@end

