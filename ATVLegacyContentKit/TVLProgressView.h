//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>

@class TVLProgressBarElement, UIImage, UIImageView;

@interface TVLProgressView : UIView <ATVUpdatable>
{
    UIImage *_leftOnImage;
    UIImage *_leftOffImage;
    UIImage *_centerOnImage;
    UIImage *_centerOffImage;
    UIImage *_rightOnImage;
    UIImage *_rightOffImage;
    UIImageView *_leftEndImageView;
    UIImageView *_leftCenterImageView;
    UIImageView *_rightCenterImageView;
    UIImageView *_rightEndImageView;
    TVLProgressBarElement *_feedElement;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateWithFeedElement:(id)arg1;
- (id)currentFeedElement;
- (id)initWithProgressBarElement:(id)arg1;

@end

