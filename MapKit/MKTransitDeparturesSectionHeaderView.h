//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class MKButtonWithTargetArgument, NSLayoutConstraint, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MKTransitDeparturesSectionHeaderView : MKCustomSeparatorTableViewCell
{
    unsigned long long _type;
    UILabel *_label;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    MKButtonWithTargetArgument *_button;
}

+ (double)defaultHeight;
+ (id)_buttonFont:(unsigned long long)arg1;
+ (id)_font:(unsigned long long)arg1;
@property(readonly, nonatomic) MKButtonWithTargetArgument *button; // @synthesize button=_button;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text;
- (void)_updateConstraintValues;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (void)tintColorDidChange;
- (id)initWithType:(unsigned long long)arg1;

@end

