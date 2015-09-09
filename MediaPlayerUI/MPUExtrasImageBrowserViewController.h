//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayerUI/MPUExtrasZoomingImageInteractiveTransitionSource-Protocol.h>
#import <MediaPlayerUI/MPUExtrasZoomingImageTransitionParticipant-Protocol.h>
#import <MediaPlayerUI/UIPageViewControllerDataSource-Protocol.h>
#import <MediaPlayerUI/UIPageViewControllerDelegate-Protocol.h>

@class NSString, UIPageViewController;
@protocol MPUExtrasImageBrowserViewControllerDataSource, MPUExtrasImageBrowserViewControllerDelegate, MPUExtrasZoomingImageInteractiveTransitionSource;

@interface MPUExtrasImageBrowserViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, MPUExtrasZoomingImageInteractiveTransitionSource, MPUExtrasZoomingImageTransitionParticipant>
{
    _Bool _allowsPinchingImageForInteractiveZoomingImageTransition;
    id <MPUExtrasImageBrowserViewControllerDataSource> _dataSource;
    id <MPUExtrasImageBrowserViewControllerDelegate> _delegate;
    id <MPUExtrasZoomingImageInteractiveTransitionSource> _zoomingImageInteractiveTransitionSource;
    unsigned long long _visibleImageIndex;
    UIPageViewController *_pageViewController;
}

@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(nonatomic) unsigned long long visibleImageIndex; // @synthesize visibleImageIndex=_visibleImageIndex;
@property(nonatomic) _Bool allowsPinchingImageForInteractiveZoomingImageTransition; // @synthesize allowsPinchingImageForInteractiveZoomingImageTransition=_allowsPinchingImageForInteractiveZoomingImageTransition;
@property(nonatomic) __weak id <MPUExtrasZoomingImageInteractiveTransitionSource> zoomingImageInteractiveTransitionSource; // @synthesize zoomingImageInteractiveTransitionSource=_zoomingImageInteractiveTransitionSource;
@property(nonatomic) __weak id <MPUExtrasImageBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MPUExtrasImageBrowserViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)_visibleImageViewController;
- (void)_updateTitle;
- (void)_updatePageViewController;
- (void)_removePageViewController;
- (unsigned long long)_numberOfImages;
- (id)_imageViewControllerAtIndex:(unsigned long long)arg1;
- (void)_addPageViewForController:(id)arg1 toView:(id)arg2;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

