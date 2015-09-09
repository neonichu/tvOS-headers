//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, SKUIClientContext, SKUIColorScheme, UILabel;

@interface SKUIProductPageFeaturesView : UIView
{
    UIView *_bottomBorderView;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    long long _features;
    NSMutableArray *_featureViews;
    unsigned long long _gameCenterFeatures;
    UILabel *_titleLabel;
    UIView *_topBorderView;
}

@property(nonatomic) unsigned long long gameCenterFeatures; // @synthesize gameCenterFeatures=_gameCenterFeatures;
@property(nonatomic) long long features; // @synthesize features=_features;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
- (id)_gameCenterStringWithFeatures:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)setFeatures:(long long)arg1 gameCenterFeatures:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

