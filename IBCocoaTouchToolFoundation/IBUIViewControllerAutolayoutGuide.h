//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAutolayoutGuide.h>

#import <IBCocoaTouchToolFoundation/IBAutolayoutItem-Protocol.h>
#import <IBCocoaTouchToolFoundation/IBCTTAutolayoutItem-Protocol.h>

@class NSArray, NSObject, NSSet, NSString;
@protocol IBAutolayoutItem, IBCollection, IBOrderedCollection, IBUIViewControllerAutolayoutGuideDelegate;

@interface IBUIViewControllerAutolayoutGuide : IBAutolayoutGuide <IBCTTAutolayoutItem, IBAutolayoutItem>
{
    struct CGRect _cachedLayoutFrame;
    long long _type;
    id <IBUIViewControllerAutolayoutGuideDelegate> _delegate;
    unsigned long long __spacerTag;
}

@property(nonatomic, setter=_setSpacerTag:) unsigned long long _spacerTag; // @synthesize _spacerTag=__spacerTag;
@property(nonatomic) __weak id <IBUIViewControllerAutolayoutGuideDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)ibAmbiguityStatusForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (void)ibDidCreateRuntimeConstraint:(id)arg1 referencingItem:(id)arg2 context:(id)arg3;
- (void)ibDidMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (void)ibMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (id)ibOverriddenDesignableContentItem;
@property(readonly, nonatomic) _Bool ibIgnoreNearestNeighborProximityThreshold;
@property(readonly, nonatomic) NSSet *ibFallbackViewsForCandidateConstraintGenerationForFailedArbitration;
@property(readonly, nonatomic) id ibWindowForArbitration;
- (_Bool)ibShouldIgnoreScrollableContentHeightAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (_Bool)ibShouldIgnoreScrollableContentWidthAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
@property(nonatomic) double ibShadowedVerticalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedHorizontalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedVerticalContentHuggingPriority;
@property(nonatomic) double ibShadowedHorizontalContentHuggingPriority;
@property(nonatomic) _Bool ibExternalTranslatesAutoresizingMaskIntoConstraints;
- (id)ibNextAncestorItemForFindingReferencingConstraintsInLayoutInfo:(id)arg1;
@property(readonly, nonatomic) id <IBCollection> ibTurnedOnButPossiblyUninstalledReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibCandidateReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibInstalledReferencingConstraints;
- (id)ibReferencingConstraintsWithScope:(long long)arg1;
@property(retain, nonatomic) id <IBOrderedCollection> ibTurnedOnButPossiblyUninstalledConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibInstalledConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibCandidateConstraints;
- (unsigned long long)ibAllowedSiblingEdgesForGuidesToSelectedItems:(id)arg1;
- (_Bool)ibAllowsSiblingGuidesToSelectedItems:(id)arg1 ofType:(long long)arg2;
- (_Bool)ibShouldConsiderGuidesToEdgeWithAttribute:(unsigned long long)arg1 fromEdgeWithAttribute:(unsigned long long)arg2 ofSelectedItems:(id)arg3;
- (id)ibViewForAncestorViewEdgeMovementQuestionsOfSubview:(id)arg1;
- (struct CGRect)ibBoundsForLayoutBounds:(struct CGRect)arg1;
- (struct CGRect)ibLayoutFrameForFrame:(struct CGRect)arg1;
- (struct CGRect)ibFrameForLayoutFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGRect ibLayoutFrame;
@property(readonly, nonatomic) struct CGRect ibLayoutFrameworkBounds;
@property(readonly, nonatomic) struct CGRect ibLayoutBounds;
- (void)ibInvalidateAutoresizingMaskConstraints;
- (void)setNeedsUpdateConstraints;
- (void)exerciseAmbiguityInLayout;
- (id)constraintsAffectingLayoutForOrientation:(unsigned long long)arg1;
- (_Bool)ib_hasAmbiguousLayout;
- (void)setContentCompressionResistancePriority:(float)arg1 forOrientation:(unsigned long long)arg2;
- (float)contentCompressionResistancePriorityForOrientation:(unsigned long long)arg1;
- (void)setContentHuggingPriority:(float)arg1 forOrientation:(unsigned long long)arg2;
- (float)contentHuggingPriorityForOrientation:(unsigned long long)arg1;
- (void)removeConstraints:(id)arg1;
- (void)removeConstraint:(id)arg1;
- (void)addConstraints:(id)arg1;
- (void)addConstraint:(id)arg1;
@property(readonly, nonatomic) NSArray *constraints;
- (CDUnion_42e99c75)convertKnobPosition:(CDUnion_42e99c75)arg1 fromView:(struct UIView *)arg2;
- (CDUnion_42e99c75)convertKnobPosition:(CDUnion_42e99c75)arg1 toView:(struct UIView *)arg2;
- (unsigned int)convertRectEdge:(unsigned int)arg1 fromView:(struct UIView *)arg2;
- (unsigned int)convertRectEdge:(unsigned int)arg1 toView:(struct UIView *)arg2;
- (CDStruct_c519178c)convertInset:(CDStruct_c519178c)arg1 fromView:(struct UIView *)arg2;
- (CDStruct_c519178c)convertInset:(CDStruct_c519178c)arg1 toView:(struct UIView *)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(struct UIView *)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(struct UIView *)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 toView:(struct UIView *)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 fromView:(struct UIView *)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(struct UIView *)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(struct UIView *)arg2;
- (CDUnion_42e99c75)ib_convertKnobPosition:(CDUnion_42e99c75)arg1 fromItem:(id)arg2;
- (CDUnion_42e99c75)ib_convertKnobPosition:(CDUnion_42e99c75)arg1 toItem:(id)arg2;
- (unsigned int)ib_convertRectEdge:(unsigned int)arg1 fromItem:(id)arg2;
- (unsigned int)ib_convertRectEdge:(unsigned int)arg1 toItem:(id)arg2;
- (CDStruct_c519178c)ib_convertInset:(CDStruct_c519178c)arg1 fromItem:(id)arg2;
- (CDStruct_c519178c)ib_convertInset:(CDStruct_c519178c)arg1 toItem:(id)arg2;
- (struct CGRect)ib_convertRect:(struct CGRect)arg1 toItem:(id)arg2;
- (struct CGRect)ib_convertRect:(struct CGRect)arg1 fromItem:(id)arg2;
- (struct CGSize)ib_convertSize:(struct CGSize)arg1 toItem:(id)arg2;
- (struct CGSize)ib_convertSize:(struct CGSize)arg1 fromItem:(id)arg2;
- (struct CGPoint)ib_convertPoint:(struct CGPoint)arg1 toItem:(id)arg2;
- (struct CGPoint)ib_convertPoint:(struct CGPoint)arg1 fromItem:(id)arg2;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1;
- (struct _IBEdgeInsets)ibLayoutMargins;
- (_Bool)ibSupportsLayoutMargins;
- (_Bool)ibSupportsFirstBaseline;
- (_Bool)ibIsBaselineAtIndex:(long long)arg1 inMotionWithKnob:(CDUnion_42e99c75)arg2;
- (double)ibBaselineAtIndex:(long long)arg1 inCoordinateSpaceOfItem:(id)arg2;
@property(readonly, nonatomic) long long ibBaselineCount;
@property(readonly, nonatomic) double ibShadowedFirstBaselineOffsetFromTop;
@property(readonly, nonatomic) double baselineOffsetFromBottom;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) CDStruct_c519178c ibLayoutInset;
@property(nonatomic) _Bool translatesAutoresizingMaskIntoConstraints;
- (void)setBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)setFrameSize:(struct CGSize)arg1;
@property(nonatomic) struct CGRect frame;
- (void)addSubview:(id)arg1;
- (void)removeFromSuperview;
@property(readonly, nonatomic) id window;
@property(readonly, nonatomic) NSArray *subviews;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *superview;
- (id)initAsEngineSpacerItemWithInitialLayoutFrame:(struct CGRect)arg1;
- (id)ibEffectiveRootCoordinateSystemForConversions;
- (id)ibEffectiveWindowForConversions;
@property(readonly, nonatomic, getter=isFlipped) _Bool flipped;
- (id)ibEffectiveItemForRuntimeConstraintAdjustingConstant:(double *)arg1 attribute:(unsigned long long *)arg2 orConstraintClassIfNeeded:(Class *)arg3 context:(id)arg4;
@property(readonly, nonatomic) NSArray *ibChildItemsEligibleForNearestNeighborConstraints;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *ibParentItem;
- (id)_containingView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

