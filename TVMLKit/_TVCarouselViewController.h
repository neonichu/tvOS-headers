//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/TVCarouselViewDataSource-Protocol.h>
#import <TVMLKit/TVCarouselViewDelegate-Protocol.h>
#import <TVMLKit/TVFocusDirectionCollectionViewCellDelegate-Protocol.h>

@class IKCollectionElement, NSString, TVCarouselView;

__attribute__((visibility("hidden")))
@interface _TVCarouselViewController : UIViewController <TVCarouselViewDataSource, TVCarouselViewDelegate, TVFocusDirectionCollectionViewCellDelegate>
{
    struct TVCellMetrics _cellMetrics;
    IKCollectionElement *_collectionElement;
    TVCarouselView *_carouselView;
}

@property(readonly, nonatomic) struct TVCellMetrics cellMetrics; // @synthesize cellMetrics=_cellMetrics;
- (void).cxx_destruct;
- (void)_updateLayout;
- (void)_updateAutoScrollInterval;
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics)arg2;
- (void)_dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(unsigned long long)arg2;
- (void)_selectButtonAction:(id)arg1;
- (void)_playButtonAction:(id)arg1;
- (id)imageStackViewWithinCollectionViewCell:(id)arg1;
- (void)collectionViewCellDidUnfocus:(id)arg1;
- (void)collectionViewCellDidChangeFocusDirection:(id)arg1;
- (id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;
- (id)preferredFocusedView;
- (struct CGSize)viewSizeThatFits:(struct CGSize)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

