//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (UIStorage)
- (id)_accessibilityElementsWithSemanticContext;
- (_Bool)_isAccessibilityExplorerElement;
- (id)_accessibilityFrameDelegate;
- (id)_accessibilityNativeFocusableElements;
- (id)_accessibilityExplorerElements;
- (id)_accessibilityNativeFocusElement;
- (id)_accessibilityAggregatedHeaderElements;
- (id)_accessibilityNativeFocusAncestor;
- (_Bool)_accessibilityShouldIgnoreSoundForFailedMoveAttempt;
- (_Bool)_accessibilityNativeFocusPreferredElementIsValid;
- (id)_accessibilityNativeFocusPreferredElement;
- (_Bool)_accessibilityIgnoresChildrenForNativeFocus;
- (_Bool)_accessibilityCanBecomeNativeFocused;
- (_Bool)_accessibilitySetNativeFocus;
- (_Bool)_accessibilityHasNativeFocus;
- (_Bool)_accessibilitySpeakThisCanBeHighlighted;
- (_Bool)_accessibilitySpeakThisShouldOnlyIncludeVisibleElements;
- (_Bool)_accessibilitySpeakThisShouldScrollTextRects;
- (id)_accessibilityTextRectsForRange:(id)arg1 singleTextRect:(struct CGRect *)arg2;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange)arg1;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (unsigned long long)_accessibilitySpeakThisMaximumNumberOfElements;
- (void)_accessibilitySetIgnoreDelegate:(_Bool)arg1;
- (_Bool)_accessibilityIgnoreDelegate;
- (_Bool)_accessibilityMimicsTextInputResponder;
- (_Bool)accessibilityPerformAction:(int)arg1 withValue:(id)arg2;
- (struct CGRect)_accessibilityScreenRectForSceneReferenceRect:(struct CGRect)arg1;
- (struct CGPoint)_accessibilityScreenPointForSceneReferencePoint:(struct CGPoint)arg1;
- (_Bool)_accessibilityHandleMagicTap;
- (void)_accessibilityRemoveActionBlockForKey:(unsigned int)arg1;
- (void)_accessibilityRemoveAllActionBlocks;
- (void)_accessibilityActionBlock:(CDUnknownBlockType *)arg1 andValue:(id *)arg2 forKey:(unsigned int)arg3;
- (_Bool)_accessibilityHasActionBlockForKey:(unsigned int)arg1;
- (_Bool)_accessibilityInternalHandleStartStopToggle;
- (void)_accessibilitySetActionBlock:(CDUnknownBlockType)arg1 withValue:(id)arg2 forKey:(unsigned int)arg3;
@end

