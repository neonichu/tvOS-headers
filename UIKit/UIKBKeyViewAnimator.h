//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBKeyViewAnimator : NSObject
{
}

+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3;
+ (id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (void)reset;
- (void)endTransitionForKeyView:(id)arg1;
- (void)updateTransitionForKeyView:(id)arg1 normalizedDragSize:(struct CGSize)arg2;
- (void)transitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2;
- (void)transitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 toLeft:(_Bool)arg3;
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;
- (_Bool)shouldAssertCurrentKeyState:(id)arg1;
- (id)keycapRightSelectRightTransform;
- (id)keycapRightSelectLeftTransform;
- (id)keycapRightSelectPrimaryTransform;
- (id)keycapLeftSelectRightTransform;
- (id)keycapLeftSelectLeftTransform;
- (id)keycapLeftSelectPrimaryTransform;
- (id)keycapPrimaryExitTransform;
- (id)keycapRightStandardTransform;
- (id)keycapLeftStandardTransform;
- (id)keycapAlternateStandardTransform;
- (id)keycapPrimaryStandardTransform;
- (id)keycapNullTransform;
- (id)keycapMeshTransformFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
- (void)_fadeInKeyView:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fadeOutKeyView:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (Class)keyViewClassForKey:(id)arg1 traits:(id)arg2;
- (Class)_keyViewClassForSpecialtyKey:(id)arg1;

@end

