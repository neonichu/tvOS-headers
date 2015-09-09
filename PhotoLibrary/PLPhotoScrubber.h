//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableArray, NSTimer, UIImageView, UIView;
@protocol PLPhotoScrubberDataSource, PLPhotoScrubberSpeedDelegate;

@interface PLPhotoScrubber : UIControl
{
    id <PLPhotoScrubberDataSource> _dataSource;
    unsigned long long _displayedImageIndex;
    long long _prospectiveImageIndex;
    double _timeOfLastTouch;
    double _lastUpdate;
    UIView *_thumbnailTrackView;
    struct CGRect _thumbnailBounds;
    double _imagesPerViewRatio;
    NSMutableArray *_thumbnailViews;
    UIImageView *_loupeView;
    long long _loupeIndex;
    unsigned long long _imageCount;
    _Bool _scrubbing;
    _Bool _deferImageLoading;
    _Bool _loadImagesSynchronously;
    id <PLPhotoScrubberSpeedDelegate> _speedDelegate;
    double __scrubbingSpeed;
    long long __lastSpeedRegime;
    double __lastTime;
    NSTimer *__timeoutTimer;
}

@property(retain, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer; // @synthesize _timeoutTimer=__timeoutTimer;
@property(nonatomic, setter=_setLastTime:) double _lastTime; // @synthesize _lastTime=__lastTime;
@property(nonatomic, setter=_setLastSpeedRegime:) long long _lastSpeedRegime; // @synthesize _lastSpeedRegime=__lastSpeedRegime;
@property(nonatomic, setter=_setScrubbingSpeed:) double _scrubbingSpeed; // @synthesize _scrubbingSpeed=__scrubbingSpeed;
@property(nonatomic) id <PLPhotoScrubberSpeedDelegate> speedDelegate; // @synthesize speedDelegate=_speedDelegate;
- (void)ppt_scrubToAbsoluteIndex:(long long)arg1 immediately:(_Bool)arg2;
- (void)ppt_setIsScrubbing:(_Bool)arg1;
- (long long)displayedImageIndex;
- (void)setDisplayedImageIndex:(long long)arg1;
- (void)_setDisplayedImageIndex:(id)arg1;
- (void)_setDisplayedImageIndex:(long long)arg1 immediately:(_Bool)arg2;
- (void)_setSpeedRegime:(long long)arg1;
- (void)_handleTimeoutTimer:(id)arg1;
- (void)_rescheduleTimer;
- (void)_performSpeedUpdate;
- (void)setLoupeImage:(id)arg1;
- (void)reloadData;
- (void)reloadDataWithNewDisplayedIndex:(unsigned long long)arg1;
- (void)setDataSource:(id)arg1 reloadData:(_Bool)arg2;
@property(nonatomic) id <PLPhotoScrubberDataSource> dataSource; // @dynamic dataSource;
- (void)_updateLoupe:(_Bool)arg1 force:(_Bool)arg2;
- (void)reloadImageAtIndex:(long long)arg1;
- (void)setImage:(id)arg1 atIndex:(long long)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)isFastScrubbing;
- (_Bool)isScrubbing;
- (void)_setIsScrubbing:(_Bool)arg1;
- (void)_updateLoupeWithTouch:(id)arg1 forceUpdate:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGPoint)_centerForImageAtIndex:(long long)arg1;
- (unsigned long long)_imageIndexFromLocation:(struct CGPoint)arg1;
- (unsigned long long)_thumbnailIndexFromLocation:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)setDeferImageLoading:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didRotate;
- (void)willRotate;
- (void)dealloc;
- (id)init;

@end

