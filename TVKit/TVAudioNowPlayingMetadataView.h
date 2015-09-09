//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TVAudioNowPlayingItemConfigurationObject, TVAudioPlaybackProgressBarView, TVImageView, UILabel;

@interface TVAudioNowPlayingMetadataView : UIView
{
    UILabel *_trackTitleLabel;
    UILabel *_albumTitleLabel;
    UILabel *_artistNameLabel;
    UILabel *_trackXofXLabel;
    TVImageView *_artworkImageView;
    NSString *_artworkIdentifier;
    _Bool _streaming;
    UILabel *_elapsedTimeLabel;
    UILabel *_durationLabel;
    TVAudioPlaybackProgressBarView *_transportBar;
    double _elapsed;
    double _duration;
    TVImageView *_shuffleGlyphView;
    TVImageView *_playlistRepeatGlyphView;
    _Bool _flip;
    TVAudioNowPlayingItemConfigurationObject *_configurationObject;
}

@property(copy, nonatomic) TVAudioNowPlayingItemConfigurationObject *configurationObject; // @synthesize configurationObject=_configurationObject;
@property(nonatomic) _Bool flip; // @synthesize flip=_flip;
- (void).cxx_destruct;
- (id)_timeAttributes;
- (id)_tertiaryAttributes;
- (id)_subtitleAttributes;
- (id)_titleAttributes;
- (void)_setDuration:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (id)_createLabel;
- (void)_flipFrame:(struct CGRect *)arg1 parentFrame:(struct CGRect)arg2;
- (void)layoutSubviews;
- (id)_timeStringForSeconds:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

