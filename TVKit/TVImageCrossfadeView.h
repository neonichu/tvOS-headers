//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSTimer, UIImageView, _TVImageLoaderQueue;

@interface TVImageCrossfadeView : UIView
{
    NSTimer *_crossfadeTimer;
    UIImageView *_imageView;
    _TVImageLoaderQueue *_loaderQueue;
    NSArray *_imageProxies;
    double _crossfadePeriod;
    double _crossfadeDuration;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) double crossfadePeriod; // @synthesize crossfadePeriod=_crossfadePeriod;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (void).cxx_destruct;
- (void)_crossfadeToImage:(id)arg1;
- (void)_loadNextImage:(id)arg1;
- (void)_startTimer;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

