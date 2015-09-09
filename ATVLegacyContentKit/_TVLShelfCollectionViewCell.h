//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIMotionEffectGroup, UIView;

@interface _TVLShelfCollectionViewCell : UICollectionViewCell
{
    UIMotionEffectGroup *_motionEffectGroup;
    _Bool _acceptsFocus;
    UIView *_hostedView;
}

@property(retain, nonatomic) UIView *hostedView; // @synthesize hostedView=_hostedView;
@property(nonatomic) _Bool acceptsFocus; // @synthesize acceptsFocus=_acceptsFocus;
- (void).cxx_destruct;
- (void)_detachMotionEffects;
- (void)_attachMotionEffects;
- (_Bool)_unapplyMotionEffect:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

