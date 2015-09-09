//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKPass, PKPassSnapshotter, UIImageView, UILabel;

@interface PKPassValueAddedServiceInfoView : UIView
{
    long long _style;
    PKPass *_pass;
    PKPassSnapshotter *_snapshotter;
    UILabel *_labelView;
    UIImageView *_snapshotView;
    UILabel *_statusView;
}

@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(nonatomic) long long style; // @synthesize style=_style;
- (double)_baselineDistance;
- (id)_statusFont;
- (id)_labelFont;
- (id)_statusAttributedStringForStyle:(long long)arg1;
- (id)_labelAttributedStringForString:(id)arg1;
- (struct CGSize)_snapshotSize;
- (void)setPass:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_calculateViewMetricsForWidth:(double)arg1 labelSize:(struct CGSize *)arg2 statusSize:(struct CGSize *)arg3 baselineAdjustment:(double *)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

@end

