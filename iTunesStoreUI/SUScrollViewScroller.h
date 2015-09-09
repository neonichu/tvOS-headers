//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSString, UIScrollView;
@protocol UIScrollViewDelegate;

@interface SUScrollViewScroller : NSObject <UIScrollViewDelegate>
{
    NSObject<UIScrollViewDelegate> *_originalDelegate;
    NSMutableArray *_scrollRequests;
    UIScrollView *_scrollView;
}

@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)_performScrollRectRequest:(id)arg1;
- (void)_performNextScrollRequest;
- (void)_performContentOffsetRequest:(id)arg1;
- (void)_finishActiveScrollRequest;
- (void)_addScrollRequest:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)scrollFrameToVisible:(struct CGRect)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)detachFromScrollView;
- (void)attachToScrollView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

