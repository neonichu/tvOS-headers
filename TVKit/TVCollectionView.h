//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import <TVKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSIndexPath, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol TVCollectionViewDelegate;

@interface TVCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_playButtonRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    struct {
        unsigned int _respondsToDidPlayItem:1;
        unsigned int _respondsToDidLongPressItem:1;
    } _delegateFlags;
    NSIndexPath *_indexPathForLastFocusedItem;
}

@property(readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
- (void).cxx_destruct;
- (void)_performBlockWithFocusedCellIndexPath:(CDUnknownBlockType)arg1;
- (void)_longPressAction:(id)arg1;
- (void)_playButtonAction:(id)arg1;
@property(nonatomic) __weak id <TVCollectionViewDelegate> delegate; // @dynamic delegate;
- (void)_notifyDidScroll;
- (void)reloadData;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)focusItemAtIndexPath:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
