//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookUI/ABContactCell.h>

@class NSArray, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface MKPlaceInfoViewInlineMapCell : ABContactCell
{
    UIImage *_inlineMap;
    UIImageView *_inlineMapView;
    NSArray *_marginConstraints;
}

+ (id)reuseIdentifier;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *marginConstraints; // @synthesize marginConstraints=_marginConstraints;
@property(retain, nonatomic) UIImageView *inlineMapView; // @synthesize inlineMapView=_inlineMapView;
@property(retain, nonatomic) UIImage *inlineMap; // @synthesize inlineMap=_inlineMap;
- (void).cxx_destruct;
- (void)refreshMarginConstraints;
- (void)layoutMarginsDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

