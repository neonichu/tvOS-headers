//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FMCoreUI/FMTitleView.h>

@class FMFLocation, UILabel;

__attribute__((visibility("hidden")))
@interface FMFTitleView : FMTitleView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    FMFLocation *_location;
}

@property(retain, nonatomic) FMFLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)_updateLabels:(id)arg1;
- (void)updateLocation:(id)arg1;
- (id)initFromNib;

@end

