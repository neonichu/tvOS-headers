//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/WebAccessibilityObjectWrapperBase.h>

__attribute__((visibility("hidden")))
@interface WebAccessibilityObjectWrapper : WebAccessibilityObjectWrapperBase
{
    int m_isAccessibilityElement;
    unsigned long long m_accessibilityTraitsFromAncestor;
}

- (struct CGPoint)accessibilityClickPoint;
- (id)accessibilityMathType;
- (long long)accessibilityMathLineThickness;
- (_Bool)accessibilityIsMathTopObject;
- (id)accessibilityMathFencedCloseString;
- (id)accessibilityMathFencedOpenString;
- (id)accessibilityMathPrescripts;
- (id)accessibilityMathPostscripts;
- (id)accessibilityPlatformMathSuperscriptKey;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityMathOverObject;
- (id)accessibilityMathUnderObject;
- (id)accessibilityMathSuperscriptObject;
- (id)accessibilityMathSubscriptObject;
- (id)accessibilityMathBaseObject;
- (id)accessibilityMathDenominatorObject;
- (id)accessibilityMathNumeratorObject;
- (id)accessibilityMathRadicandObject;
- (id)accessibilityMathRootIndexObject;
- (id)accessibilityInvalidStatus;
- (_Bool)accessibilityIsExpanded;
- (_Bool)accessibilitySupportsARIAExpanded;
- (_Bool)accessibilityIsPressed;
- (_Bool)accessibilitySupportsARIAPressed;
- (_Bool)accessibilityARIALiveRegionIsAtomic;
- (id)accessibilityARIARelevantStatus;
- (id)accessibilityARIALiveRegionStatus;
- (_Bool)accessibilityARIAIsBusy;
- (id)accessibilitySpeechHint;
- (id)accessibilityIdentifier;
- (id)textMarkerForPoint:(struct CGPoint)arg1;
- (struct CGRect)frameForTextMarkers:(id)arg1;
- (id)previousMarkerForMarker:(id)arg1;
- (id)nextMarkerForMarker:(id)arg1;
- (id)lineStartMarkerForMarker:(id)arg1;
- (id)lineEndMarkerForMarker:(id)arg1;
- (id)selectedTextMarker;
- (id)selectionRangeString;
- (id)elementsForRange:(struct _NSRange)arg1;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (id)attributedStringForRange:(struct _NSRange)arg1;
- (id)stringForRange:(struct _NSRange)arg1;
- (id)_stringForRange:(struct _NSRange)arg1 attributed:(_Bool)arg2;
- (id)textMarkerForPosition:(long long)arg1;
- (id)textMarkerRangeForSelection;
- (struct WebAccessibilityObjectWrapper *)accessibilityObjectForTextMarker:(id)arg1;
- (struct _NSRange)elementTextRange;
- (id)textMarkerRange;
- (long long)positionForTextMarker:(id)arg1;
- (PassRefPtr_d7fc6f43)_convertToDOMRange:(struct _NSRange)arg1;
- (struct _NSRange)_convertToNSRange:(struct Range *)arg1;
- (id)arrayOfTextForTextMarkers:(id)arg1 attributed:(_Bool)arg2;
- (id)stringForTextMarkers:(id)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (_Bool)_addAccessibilityObject:(struct AccessibilityObject *)arg1 toTextMarkerArray:(id)arg2;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)accessibilityMoveSelectionToMarker:(id)arg1;
- (void)accessibilityDecreaseSelection:(int)arg1;
- (void)accessibilityIncreaseSelection:(int)arg1;
- (void)accessibilityModifySelection:(int)arg1 increase:(_Bool)arg2;
- (void)accessibilityElementDidBecomeFocused;
- (struct CGRect)_accessibilityScrollVisibleRect;
- (struct CGSize)_accessibilityScrollSize;
- (struct CGPoint)_accessibilityScrollPosition;
- (void)postScrollStatusChangeNotification;
- (void)postExpandedChangedNotification;
- (void)postValueChangedNotification;
- (void)postInvalidStatusChangedNotification;
- (void)postChildrenChangedNotification;
- (void)postLoadCompleteNotification;
- (void)postLiveRegionCreatedNotification;
- (void)postLiveRegionChangeNotification;
- (void)postLayoutChangeNotification;
- (void)postSelectedTextChangeNotification;
- (void)postFocusChangeNotification;
- (id)_accessibilityParentForSubview:(id)arg1;
- (id)attachmentView;
- (void)_accessibilityActivate;
- (_Bool)isAttachment;
- (id)accessibilityLinkedElement;
- (id)accessibilityFlowToElements;
- (_Bool)accessibilityRequired;
- (_Bool)accessibilityCanSetValue;
- (id)_accessibilityPreviousElementsWithCount:(unsigned int)arg1;
- (id)_accessibilityNextElementsWithCount:(unsigned int)arg1;
- (id)_accessibilityWebDocumentView;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityContainer;
- (_Bool)containsUnnaturallySegmentedChildren;
- (struct CGRect)accessibilityFrame;
- (struct CGPoint)accessibilityActivationPoint;
- (struct CGRect)accessibilityElementRect;
- (struct CGRect)convertRectToScreenSpace:(struct IntRect *)arg1;
- (struct CGPoint)convertPointToScreenSpace:(struct FloatPoint *)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)_accessibilityScrollToVisible;
- (struct CGPoint)_accessibilityConvertPointToViewSpace:(struct CGPoint)arg1;
- (id)accessibilityURL;
- (id)accessibilityHint;
- (_Bool)accessibilityIsComboBox;
- (id)accessibilityValue;
- (id)accessibilityPlaceholderValue;
- (struct _NSRange)accessibilityColumnRange;
- (struct _NSRange)accessibilityRowRange;
- (id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2;
- (id)accessibilityHeaderElements;
- (id)accessibilityTitleElement;
- (struct AccessibilityTable *)tableParent;
- (struct AccessibilityTableCell *)tableCellParent;
- (id)accessibilityLabel;
- (id)accessibilityRoleDescription;
- (double)_accessibilityMaxValue;
- (double)_accessibilityMinValue;
- (_Bool)_accessibilityValueIsAutofilled;
- (_Bool)fileUploadButtonReturnsValueInTitle;
- (_Bool)stringValueShouldBeUsedInLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)determineIsAccessibilityElement;
- (_Bool)isSVGGroupElement;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityTraitsFromAncestors;
- (struct WebAccessibilityObjectWrapper *)_accessibilityTableAncestor;
- (struct WebAccessibilityObjectWrapper *)_accessibilityLandmarkAncestor;
- (struct WebAccessibilityObjectWrapper *)_accessibilityListAncestor;
- (_Bool)_accessibilityIsLandmarkRole:(int)arg1;
- (id)accessibilityLanguage;
- (_Bool)accessibilityHasPopup;
- (struct CGPath *)_accessibilityPath;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)disableAttributeCaching;
- (void)enableAttributeCaching;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (struct WebAccessibilityObjectWrapper *)accessibilityPostProcessHitTest:(struct CGPoint)arg1;
- (_Bool)accessibilityCanFuzzyHitTest;
- (unsigned long long)_axRadioButtonTrait;
- (unsigned long long)_axNotEnabledTrait;
- (unsigned long long)_axSelectedTrait;
- (unsigned long long)_axMenuItemTrait;
- (unsigned long long)_axAdjustableTrait;
- (unsigned long long)_axStaticTextTrait;
- (unsigned long long)_axPopupButtonTrait;
- (unsigned long long)_axToggleTrait;
- (unsigned long long)_axButtonTrait;
- (unsigned long long)_axTabButtonTrait;
- (unsigned long long)_axImageTrait;
- (unsigned long long)_axTextOperationsAvailableTrait;
- (unsigned long long)_axHasTextCursorTrait;
- (unsigned long long)_axTextEntryTrait;
- (unsigned long long)_axSecureTextFieldTrait;
- (unsigned long long)_axWebContentTrait;
- (unsigned long long)_axContainedByLandmarkTrait;
- (unsigned long long)_axContainedByTableTrait;
- (unsigned long long)_axContainedByListTrait;
- (unsigned long long)_axHeaderTrait;
- (unsigned long long)_axVisitedTrait;
- (unsigned long long)_axLinkTrait;
- (_Bool)_prepareAccessibilityCall;
- (void)dealloc;
- (void)detach;
- (id)initWithAccessibilityObject:(struct AccessibilityObject *)arg1;

@end

