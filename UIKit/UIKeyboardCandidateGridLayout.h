//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridLayout : UICollectionViewLayout
{
    struct CGSize _contentSize;
    _Bool _expanded;
    _Bool _needsPaddingForIndexScrubber;
    _Bool _supportsNumberKeySelection;
    _Bool _hasSecondaryCandidates;
    _Bool _needsLayout;
    int _candidatesVisualStyle;
    NSArray *_candidateGroups;
    unsigned long long _columnsCount;
    CDStruct_961fb75c _visualStyling;
    double _headerViewHeight;
    NSSet *_emphasizedCandidates;
    NSMutableArray *_cellAttributes;
    NSMutableDictionary *_supplementaryAttributes;
}

+ (void)deemphasizeLastItemIfNeeded:(id)arg1;
+ (Class)layoutAttributesClass;
+ (id)layout;
@property(retain, nonatomic) NSMutableDictionary *supplementaryAttributes; // @synthesize supplementaryAttributes=_supplementaryAttributes;
@property(retain, nonatomic) NSMutableArray *cellAttributes; // @synthesize cellAttributes=_cellAttributes;
@property(nonatomic) _Bool needsLayout; // @synthesize needsLayout=_needsLayout;
@property(retain, nonatomic) NSSet *emphasizedCandidates; // @synthesize emphasizedCandidates=_emphasizedCandidates;
@property(nonatomic) _Bool hasSecondaryCandidates; // @synthesize hasSecondaryCandidates=_hasSecondaryCandidates;
@property(nonatomic) _Bool supportsNumberKeySelection; // @synthesize supportsNumberKeySelection=_supportsNumberKeySelection;
@property(nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
@property(nonatomic) _Bool needsPaddingForIndexScrubber; // @synthesize needsPaddingForIndexScrubber=_needsPaddingForIndexScrubber;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) int candidatesVisualStyle; // @synthesize candidatesVisualStyle=_candidatesVisualStyle;
@property(nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;
@property(nonatomic) unsigned long long columnsCount; // @synthesize columnsCount=_columnsCount;
@property(retain, nonatomic) NSArray *candidateGroups; // @synthesize candidateGroups=_candidateGroups;
- (id)previousCandidateIndexPathFromIndexPath:(id)arg1;
- (id)nextCandidateIndexPathFromIndexPath:(id)arg1;
@property(readonly, nonatomic) struct CGSize rowSize;
- (id)layoutAttributesForCandidateIndexPath:(id)arg1;
- (void)finishLayoutForRowWithAttributes:(id)arg1 minimumCellWidth:(double)arg2 remainingWidth:(double)arg3 rowOrigin:(struct CGPoint)arg4 isFirstRow:(_Bool)arg5 isLastRow:(_Bool)arg6 zIndex:(long long)arg7;
- (void)prepareLayout;
- (void)getGroupBarWidth:(double *)arg1 headerAttributes:(id *)arg2;
@property(readonly, nonatomic) double groupBarWidth;
- (id)attributesWithFrame:(struct CGRect)arg1;
- (unsigned long long)numberOfItemsInSection:(long long)arg1;
- (unsigned long long)numberOfCandidateSections;
- (unsigned long long)numberOfSections;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)invalidateLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end

