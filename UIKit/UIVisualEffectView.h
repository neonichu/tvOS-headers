//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/NSSecureCoding-Protocol.h>
#import <UIKit/UIInteractionProgressObserver-Protocol.h>

@class NSArray, NSString, NSUUID, UIVisualEffect, _UIVisualEffectBackdropView, _UIVisualEffectContentView, _UIVisualEffectFilterView;

@interface UIVisualEffectView : UIView <UIInteractionProgressObserver, NSSecureCoding>
{
    struct {
        unsigned int hasHadAlphaAnimated:1;
        unsigned int suppressReportingEmptyContentView:1;
        unsigned int interactiveAnimationInFlight:1;
        unsigned int interactiveAnimationCompleted:1;
    } _effectViewFlags;
    UIView *_maskView;
    _UIVisualEffectContentView *_contentView;
    _UIVisualEffectBackdropView *_backdropSubview;
    _UIVisualEffectFilterView *_grayscaleSubview;
    _UIVisualEffectFilterView *_colorSubview;
    _UIVisualEffectFilterView *_colorBurnSubview;
    _UIVisualEffectFilterView *_darkeningSubview;
    NSArray *_effectConfigViews;
    double _pausedTime;
    NSUUID *_animationUUID;
    UIVisualEffect *_initialEffect;
    UIVisualEffect *_finalEffect;
    _Bool __adaptsToInterfaceStyle;
    NSString *_groupName;
    double _cornerRadius;
    UIVisualEffect *_effect;
    UIVisualEffect *_overrideEffect;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) UIVisualEffect *overrideEffect; // @synthesize overrideEffect=_overrideEffect;
@property(nonatomic, setter=_setAdaptsToInterfaceStyle:) _Bool _adaptsToInterfaceStyle; // @synthesize _adaptsToInterfaceStyle=__adaptsToInterfaceStyle;
@property(copy, nonatomic) UIVisualEffect *effect; // @synthesize effect=_effect;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, setter=_setCornerRadius:) double _cornerRadius; // @synthesize _cornerRadius;
@property(copy, nonatomic, setter=_setGroupName:) NSString *_groupName; // @synthesize _groupName;
- (void).cxx_destruct;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)setEffect:(id)arg1 withInteractionProgress:(id)arg2;
- (void)_setTintOpacity:(double)arg1;
- (id)_whatsWrongWithThisEffect;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)viewDidMoveToSuperview;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (void)_applyCornerRadiusToSubviews;
- (void)_applyGroupNameToSubviews;
- (void)_configureForEffectConfig:(id)arg1;
- (void)_setupEffectsViewsForSettings:(id)arg1;
- (void)_configureForEffectSettings:(id)arg1;
- (void)_configureForCurrentEffect;
- (void)_setEffect:(id)arg1;
- (void)_rebuildEffectViewForCurrentEffect;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) UIVisualEffect *_trueEffect;
- (void)_createContentViewIfNecessary;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)_commonInit;
- (void)_updateEffectForAccessibilityChanges:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

