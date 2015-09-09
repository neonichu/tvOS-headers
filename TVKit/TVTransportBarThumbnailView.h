//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TVKit/TVTransportBarThumbnailScrubbing-Protocol.h>

@class NSString, TVSVideoView, UIImage, UIImageView;
@protocol TVTransportBarThumbnailViewDelegate;

@interface TVTransportBarThumbnailView : UIView <TVTransportBarThumbnailScrubbing>
{
    id <TVTransportBarThumbnailViewDelegate> _delegate;
    TVSVideoView *_mainContentCloneVideoView;
    TVSVideoView *_scrubVideoView;
    UIImageView *_scrubImageView;
    UIImage *_scrubImage;
    long long _scrubPreviewMode;
    struct CGSize _scrubImageSize;
}

@property(nonatomic) struct CGSize scrubImageSize; // @synthesize scrubImageSize=_scrubImageSize;
@property(nonatomic) long long scrubPreviewMode; // @synthesize scrubPreviewMode=_scrubPreviewMode;
@property(retain, nonatomic) UIImage *scrubImage; // @synthesize scrubImage=_scrubImage;
@property(retain, nonatomic) UIImageView *scrubImageView; // @synthesize scrubImageView=_scrubImageView;
@property(retain, nonatomic) TVSVideoView *scrubVideoView; // @synthesize scrubVideoView=_scrubVideoView;
@property(retain, nonatomic) TVSVideoView *mainContentCloneVideoView; // @synthesize mainContentCloneVideoView=_mainContentCloneVideoView;
@property(nonatomic) __weak id <TVTransportBarThumbnailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)setScrubVideoPlayer:(id)arg1;
- (void)setScrubPreviewMode:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)_updateScrubImageSizeWithSize:(struct CGSize)arg1;
- (void)_didHide;
- (void)_willHide;
- (void)_didShow;
- (void)_willShow;
- (id)initWithPlayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

