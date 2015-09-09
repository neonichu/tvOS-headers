//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIKBFocusGuideDelegate-Protocol.h>
#import <UIKit/UIKeyboardImplGeometryDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UITextInputTraits;

@interface UIKeyboard : UIView <UIKBFocusGuideDelegate, UIKeyboardImplGeometryDelegate>
{
    UIView *m_snapshot;
    UITextInputTraits *m_defaultTraits;
    _Bool m_typingDisabled;
    _Bool m_minimized;
    _Bool m_respondingToImplGeometryChange;
    long long m_orientation;
    long long m_idiom;
    _Bool m_hasExplicitOrientation;
    NSMutableDictionary *m_focusGuides;
    struct UIEdgeInsets m_unfocusedFocusGuideOutsets;
    _Bool _hasImpendingCursorLocation;
    unsigned long long _impendingCursorLocation;
}

+ (_Bool)splitKeyboardEnabled;
+ (_Bool)isInHardwareKeyboardMode;
+ (struct CGSize)keyboardSizeForInterfaceOrientation:(long long)arg1;
+ (struct CGSize)sizeForInterfaceOrientation:(long long)arg1;
+ (_Bool)shouldMinimizeForHardwareKeyboard;
+ (_Bool)respondsToProxGesture;
+ (_Bool)isOnScreen;
+ (struct CGRect)defaultFrameForInterfaceOrientation:(long long)arg1;
+ (struct CGSize)defaultSizeForInterfaceOrientation:(long long)arg1;
+ (struct CGSize)defaultSize;
+ (void)removeAllDynamicDictionaries;
+ (void)initImplementationNow;
+ (void)clearActiveForScreen:(id)arg1;
+ (void)makeKeyboardActive:(id)arg1 forScreen:(id)arg2;
+ (id)activeKeyboardForScreen:(id)arg1;
+ (void)_clearActiveKeyboard;
+ (id)activeKeyboard;
@property(nonatomic) unsigned long long impendingCursorLocation; // @synthesize impendingCursorLocation=_impendingCursorLocation;
@property(nonatomic) _Bool hasImpendingCursorLocation; // @synthesize hasImpendingCursorLocation=_hasImpendingCursorLocation;
@property(nonatomic) long long keyboardIdiom; // @synthesize keyboardIdiom=m_idiom;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
@property(nonatomic) _Bool showsCandidatesInline;
- (_Bool)canDismiss;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(_Bool)arg2;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(_Bool)arg2;
- (struct UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(double)arg1;
- (void)keyboardMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3;
@property(nonatomic, getter=isMinimized) _Bool minimized;
- (void)maximize;
- (void)minimize;
- (void)_setDisableTouchInput:(_Bool)arg1;
- (void)_setPasscodeOutlineAlpha:(double)arg1;
- (void)_setRenderConfig:(id)arg1;
- (id)targetWindow;
- (void)responseContextDidChange;
- (void)setCorrectionLearningAllowed:(_Bool)arg1;
- (struct UIPeripheralAnimationGeometry)geometryForMinimize:(_Bool)arg1;
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;
- (_Bool)shouldSaveMinimizationState;
- (void)setShowPredictionBar:(_Bool)arg1;
- (_Bool)showPredictionBar;
- (void)_setPreferredHeight:(double)arg1;
- (void)setDisableInteraction:(_Bool)arg1;
- (_Bool)disableInteraction;
- (void)updateFocusMarginsUpToView:(id)arg1;
- (void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets)arg1 fromView:(id)arg2;
- (void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)unfocusedFocusGuideOutsets;
- (void)didFocusGuideWithHeading:(unsigned long long)arg1;
- (void)updateKeyFocusGuides;
- (void)setupKeyFocusGuides;
- (void)setCursorLocation:(unsigned long long)arg1;
- (unsigned long long)cursorLocation;
- (_Bool)shouldChangeFocusedItem:(id)arg1 heading:(unsigned long long)arg2;
- (_Bool)allowExternalChangeForFocusHeading:(unsigned long long)arg1 cursorLocation:(unsigned long long)arg2;
- (void)focusedViewDidChange;
- (long long)_focusedSound;
- (struct CGSize)_sensitivitySize;
- (_Bool)_mayRemainFocused;
- (_Bool)canBecomeFocused;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canHandleEvent:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (int)textEffectsVisibilityLevel;
- (void)displayLayer:(id)arg1;
- (void)setNeedsDisplay;
- (void)_deactivateForBackgrounding;
- (void)deactivate;
- (_Bool)isAutomatic;
- (_Bool)isActive;
- (void)activate;
@property(nonatomic) _Bool typingEnabled;
- (void)takeSnapshot;
- (void)clearSnapshot;
- (id)delegate;
- (void)setDefaultTextInputTraits:(id)arg1;
- (id)defaultTextInputTraits;
- (void)setReturnKeyEnabled:(_Bool)arg1;
- (_Bool)returnKeyEnabled;
@property(nonatomic) _Bool caretVisible;
@property(nonatomic) _Bool caretBlinks;
- (_Bool)hasAutocorrectPrompt;
- (void)acceptAutocorrection;
- (void)removeAutocorrectPrompt;
- (void)geometryChangeDone:(_Bool)arg1;
- (void)prepareForGeometryChange;
- (_Bool)_touchesInsideShouldHideCalloutBar;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setOrientation:(long long)arg1;
- (long long)interfaceOrientation;
- (void)updateLayout;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)clearActivePerScreenIfNeeded;
- (_Bool)isActivePerScreen;
- (void)dealloc;
- (id)initLazily;
- (id)initWithDefaultSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 lazily:(_Bool)arg2;
- (void)autoAdjustOrientation;
- (void)manualKeyboardWasOrderedOut;
- (void)manualKeyboardWillBeOrderedOut;
- (void)manualKeyboardWasOrderedIn;
- (void)manualKeyboardWillBeOrderedIn;
- (long long)_positionInCandidateList:(id)arg1;
- (_Bool)_hasCandidates;
- (void)_acceptCurrentCandidate;
- (id)_getAutocorrection;
- (void)_setAutocorrects:(_Bool)arg1;
- (void)_setInputMode:(id)arg1;
- (id)_typeCharacter:(id)arg1 withError:(struct CGPoint)arg2 shouldTypeVariants:(_Bool)arg3 baseKeyForVariants:(_Bool)arg4;
- (id)_touchPoint:(struct CGPoint)arg1;
- (void)_setSplit:(_Bool)arg1;
- (void)_setUndocked:(_Bool)arg1;
- (void)_changeToKeyplane:(id)arg1;
- (id)_keyplaneNamed:(id)arg1;
- (id)_keyplaneForKey:(id)arg1;
- (id)_baseKeyForRepresentedString:(id)arg1;
- (id)_getLocalizedInputMode;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
- (_Bool)_isAutomaticKeyboard;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

