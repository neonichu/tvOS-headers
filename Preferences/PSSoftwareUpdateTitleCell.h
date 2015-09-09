//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class PSSoftwareUpdateAnimatedIcon, PSWebContainerView, UIImage, UILabel, UIProgressView;

@interface PSSoftwareUpdateTitleCell : PSTableCell
{
    int _progressStyle;
    PSSoftwareUpdateAnimatedIcon *_animatedGearView;
    _Bool _animatingGearView;
    UIProgressView *_progressBar;
    UILabel *_updateStatusLabel;
    PSWebContainerView *_releaseNotesSummaryView;
}

+ (long long)cellStyle;
@property(retain, nonatomic) PSWebContainerView *releaseNotesSummaryView; // @synthesize releaseNotesSummaryView=_releaseNotesSummaryView;
@property(retain, nonatomic) UILabel *updateStatusLabel; // @synthesize updateStatusLabel=_updateStatusLabel;
@property(retain, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
- (void).cxx_destruct;
- (void)setAnimatingGearView:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)didMoveToSuperview;
- (void)setProgress:(float)arg1;
@property(nonatomic) int progressDisplayStyle;
- (double)preferredHeightWithTable:(id)arg1;
- (void)setReleaseNotesSummary:(id)arg1;
- (void)setStatusMessage:(id)arg1;
- (void)layoutSubviews;
- (void)sizeToFitWithTable:(id)arg1;
- (id)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect)arg1;
@property(readonly, retain, nonatomic) UIImage *gearBackgroundImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

