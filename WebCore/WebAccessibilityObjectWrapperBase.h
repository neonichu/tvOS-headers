//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAccessibilityObjectWrapperBase : NSObject
{
    struct AccessibilityObject *m_object;
}

+ (void)accessibilitySetShouldRepostNotifications:(_Bool)arg1;
- (void)accessibilityPostedNotification:(id)arg1 userInfo:(id)arg2;
- (void)accessibilityPostedNotification:(id)arg1;
- (id)accessibilityMathPrescriptPairs;
- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityPlatformMathSuperscriptKey;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)ariaLandmarkRoleDescription;
- (struct CGPoint)convertPointToScreenSpace:(struct FloatPoint *)arg1;
- (struct CGPath *)convertPathToScreenSpace:(struct Path *)arg1;
- (id)baseAccessibilityHelpText;
- (id)baseAccessibilityDescription;
- (id)baseAccessibilityTitle;
- (_Bool)fileUploadButtonReturnsValueInTitle;
- (_Bool)titleTagShouldBeUsedInDescriptionField;
- (struct AccessibilityObject *)accessibilityObject;
- (id)attachmentView;
- (_Bool)updateObjectBackingStore;
- (void)detach;
- (id)initWithAccessibilityObject:(struct AccessibilityObject *)arg1;

@end

