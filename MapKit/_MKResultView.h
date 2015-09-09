//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/MKLocationManagerObserver-Protocol.h>

@class CLLocation, MKLocationManager, MKMapItem, NSArray, NSMutableArray, NSString, NSTimer, UIColor, UIImageView, UILabel;
@protocol _MKResultViewDelegate;

@interface _MKResultView : UIView <MKLocationManagerObserver>
{
    NSArray *_mapItems;
    CLLocation *_referenceLocation;
    _Bool _alwaysUsesBusinessLayout;
    int _layoutType;
    id <_MKResultViewDelegate> delegate;
    _Bool _selected;
    _Bool _showsDistance;
    NSMutableArray *_resultConstraints;
    MKLocationManager *_locManager;
    NSString *_primaryLabelText;
    NSString *_secondaryLabelText;
    NSTimer *_refLocationTimer;
    _Bool _useSpotlightVibrancy;
    int _iconFormat;
    UILabel *_nameLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    id <_MKResultViewDelegate> _delegate;
    double _fallbackDistance;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
    UIImageView *_imageView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) int iconFormat; // @synthesize iconFormat=_iconFormat;
@property(nonatomic) _Bool useSpotlightVibrancy; // @synthesize useSpotlightVibrancy=_useSpotlightVibrancy;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(nonatomic) double fallbackDistance; // @synthesize fallbackDistance=_fallbackDistance;
@property(nonatomic) __weak id <_MKResultViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool alwaysUsesBusinessLayout; // @synthesize alwaysUsesBusinessLayout=_alwaysUsesBusinessLayout;
@property(retain, nonatomic) UILabel *tertiaryLabel; // @synthesize tertiaryLabel=_tertiaryLabel;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)_locationApprovalDidChange;
- (void)handleTap:(id)arg1;
@property(retain, nonatomic) CLLocation *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
- (void)_cancelReferenceLocationTimer;
- (void)_fireReferenceLocationTimer;
@property(retain, nonatomic) NSString *secondaryLabelText;
@property(retain, nonatomic) NSString *primaryLabelText;
@property(retain, nonatomic) NSArray *mapItems;
@property(retain, nonatomic) MKMapItem *mapItem;
- (void)updateLayout;
- (void)updateSubviews;
- (double)_expectedHeightForLabels;
- (id)_defaultSecondaryCategoryLabel;
- (unsigned long long)_maxNameLengthForEndingString:(id)arg1;
- (unsigned long long)_maxSecondaryStringLengthForEndingString:(id)arg1;
- (id)_defaultPrimaryLabel;
- (void)_updateLayoutForAddress;
- (void)_updateLayoutForBusinessOrCategory;
- (void)addLabelIfNecessary:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) double preferredHeight;
- (struct CGSize)_imageSize;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setNeedsUpdateConstraints;
- (void)updateImageView;
- (void)_contentSizeCategoryDidChange;
- (void)_updateFontSizing;
- (void)dealloc;
- (void)_updateSecondaryColors;
- (void)_updatePrimaryColors;
- (void)_updateColors;
@property(nonatomic) _Bool showsDistance;
@property(nonatomic) _Bool selected;
- (id)_labelWithFontSize:(double)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 highlightsOnTouch:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithMapItems:(id)arg1 primaryLabelText:(id)arg2;
- (id)initWithMapItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

