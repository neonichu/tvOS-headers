//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, PKCheckGlyphView, PKFingerprintGlyphView, PKPhoneGlyphView, UIColor, UIImage, UIImageView;
@protocol PKGlyphViewDelegate;

@interface PKGlyphView : UIView
{
    unsigned long long _transitionIndex;
    _Bool _transitioning;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    double _lastAnimationWillFinish;
    _Bool _phoneWiggling;
    NSString *_phoneWiggleAnimationKey;
    struct {
        unsigned int showingPhone:1;
        unsigned int phoneRotated:1;
    } _layoutFlags;
    PKFingerprintGlyphView *_fingerprintView;
    PKPhoneGlyphView *_phoneView;
    PKCheckGlyphView *_checkView;
    double _phoneAspectRatio;
    UIImageView *_customImageView;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIImage *_customImage;
    long long _state;
    id <PKGlyphViewDelegate> _delegate;
}

+ (_Bool)automaticallyNotifiesObserversOfState;
@property(nonatomic) id <PKGlyphViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIImage *customImage; // @synthesize customImage=_customImage;
@property(copy, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
- (struct CGPoint)_phonePositionDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2;
- (struct CGPoint)_phonePositionWhileShownWithRotationPercentage:(double)arg1;
- (struct CATransform3D)_phoneTransformDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2;
@property(nonatomic) _Bool fadeOnRecognized;
- (void)setSecondaryColor:(id)arg1 animated:(_Bool)arg2;
- (void)setPrimaryColor:(id)arg1 animated:(_Bool)arg2;
- (void)_updateCheckViewStateAnimated:(_Bool)arg1;
- (void)_updateCustomImageViewOpacityAnimated:(_Bool)arg1;
- (void)_endPhoneWiggle;
- (void)_startPhoneWiggle;
- (void)_updatePhoneWiggleIfNecessary;
- (void)_updatePhoneLayoutWithTransitionIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_finishTransitionForIndex:(unsigned long long)arg1;
- (void)_executeTransitionCompletionHandlers:(_Bool)arg1;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setState:(long long)arg1;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(CDUnknownBlockType)arg1;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

