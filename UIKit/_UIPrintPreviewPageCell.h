//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol PageRangeDelegate;

__attribute__((visibility("hidden")))
@interface _UIPrintPreviewPageCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    id <PageRangeDelegate> _delegate;
    _Bool _inRange;
    _Bool _menuPresented;
    _Bool _thisCellIsPresentingMenu;
    _Bool _menuHiddenByTapInThisCell;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    UIImageView *_imageView;
    UIView *_dimmingView;
    long long _pageIndex;
}

@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (_Bool)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (void)menuDidHide:(id)arg1;
- (void)showMenu;
- (void)handleTap:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canModifyPageRange;
- (void)addAllPages:(id)arg1;
- (void)removePage:(id)arg1;
- (void)addPage:(id)arg1;
- (void)setEndPage:(id)arg1;
- (void)setStartPage:(id)arg1;
- (void)setInRange:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak id <PageRangeDelegate> delegate;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

