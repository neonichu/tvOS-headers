//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _TVRatingBadgeView : UIView
{
    NSString *_ratingStyle;
    UIColor *_tintColor;
    UIColor *_fillColor;
    double _ratingValue;
}

@property(nonatomic) double ratingValue; // @synthesize ratingValue=_ratingValue;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) NSString *ratingStyle; // @synthesize ratingStyle=_ratingStyle;
- (void).cxx_destruct;
- (double)_circleRadius;
- (id)_halfStarImage;
- (id)_starImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1;

@end

