//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVKit/TVCollectionViewDelegate-Protocol.h>
#import <TVKit/UICollectionViewDataSource-Protocol.h>
#import <TVKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSIndexPath, NSString, TVCollectionView, UIColor;
@protocol _TVRatingViewControllerDelegate;

@interface _TVRatingViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, TVCollectionViewDelegate>
{
    _Bool _performedInitialHighlight;
    NSIndexPath *_currentFocuedIndexPath;
    _Bool _initialRatingIsSuggestion;
    id <_TVRatingViewControllerDelegate> _delegate;
    TVCollectionView *_collectionView;
    unsigned long long _initialRating;
    UIColor *_starFillColor;
    UIColor *_starOutlineColor;
    UIColor *_starSuggestionFillColor;
}

@property(retain, nonatomic) UIColor *starSuggestionFillColor; // @synthesize starSuggestionFillColor=_starSuggestionFillColor;
@property(retain, nonatomic) UIColor *starOutlineColor; // @synthesize starOutlineColor=_starOutlineColor;
@property(retain, nonatomic) UIColor *starFillColor; // @synthesize starFillColor=_starFillColor;
@property(nonatomic) _Bool initialRatingIsSuggestion; // @synthesize initialRatingIsSuggestion=_initialRatingIsSuggestion;
@property(nonatomic) unsigned long long initialRating; // @synthesize initialRating=_initialRating;
@property(retain, nonatomic) TVCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <_TVRatingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_needsInitialSuggestionState;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
- (void)_updateRatingForSelection:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)preferredContentSize;
- (id)preferredFocusedItem;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

