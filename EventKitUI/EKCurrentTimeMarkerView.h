//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface EKCurrentTimeMarkerView : UIView
{
    _Bool _showsThumb;
    _Bool _showsLine;
    UILabel *_currentTimeLabel;
}

+ (double)_spacingAdjustmentFontSize;
+ (id)timeMarkerFont;
@property(retain, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(nonatomic) _Bool showsLine; // @synthesize showsLine=_showsLine;
@property(nonatomic) _Bool showsThumb; // @synthesize showsThumb=_showsThumb;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)_lineFrame;
@property(readonly, nonatomic) struct CGRect currentTimeFrame;
- (void)_updateTimeLabelColor;
- (void)invalidateFonts;
- (void)_updateTimeWithForce:(_Bool)arg1;
- (void)updateTime;
@property(readonly, nonatomic) double markerMidHeight;
@property(readonly, nonatomic) double markerWidth;
- (id)initWithFrame:(struct CGRect)arg1;

@end

