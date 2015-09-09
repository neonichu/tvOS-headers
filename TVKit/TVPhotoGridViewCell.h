//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TVImageStackView, TVImageView, TVSImageProxy, UIImage, UILabel, UIMotionEffectGroup;

@interface TVPhotoGridViewCell : UICollectionViewCell
{
    _Bool _isVideo;
    TVSImageProxy *_imageProxy;
    UIImage *_placeholderImage;
    TVImageStackView *_imageStackView;
    TVSImageProxy *_cellImageProxy;
    TVImageView *_bubbleImageView;
    TVImageView *_videoView;
    UILabel *_commentsLabel;
    unsigned long long _totalComments;
    UIMotionEffectGroup *_motionEffectGroup;
}

@property(retain, nonatomic) UIMotionEffectGroup *motionEffectGroup; // @synthesize motionEffectGroup=_motionEffectGroup;
@property(nonatomic) unsigned long long totalComments; // @synthesize totalComments=_totalComments;
@property(retain, nonatomic) UILabel *commentsLabel; // @synthesize commentsLabel=_commentsLabel;
@property(retain, nonatomic) TVImageView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) TVImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(retain, nonatomic) TVSImageProxy *cellImageProxy; // @synthesize cellImageProxy=_cellImageProxy;
@property(retain, nonatomic) TVImageStackView *imageStackView; // @synthesize imageStackView=_imageStackView;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) TVSImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
- (void).cxx_destruct;
- (void)_detachMotionEffects;
- (void)_attachMotionEffects;
- (_Bool)_unapplyMotionEffect:(id)arg1;
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (void)focusedViewDidChange;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (void)setTotalComments:(unsigned long long)arg1 commentBadge:(id)arg2;

@end

