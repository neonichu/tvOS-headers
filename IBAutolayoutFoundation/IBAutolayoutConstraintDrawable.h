//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBLayoutConstraint, NSArray, NSColor, NSImage, NSNumber;

@interface IBAutolayoutConstraintDrawable : NSObject
{
    _Bool _pointingUpOrRight;
    _Bool _selected;
    _Bool _selectable;
    _Bool _dashed;
    _Bool _shouldAlwaysDrawGuideLinesIfNeeded;
    _Bool _insetToAvoidOtherDrawables;
    IBLayoutConstraint *_constraint;
    unsigned long long _type;
    NSColor *_color;
    double _movementPriority;
    double _lineThickness;
    NSImage *_badgeImage;
    NSNumber *_edgeBias;
    unsigned long long _representingSizeAttribute;
    NSArray *_guideLines;
    struct CGSize _badgeSize;
    CDStruct_f6143a38 _line;
    CDStruct_c519178c _badgeDrawingInset;
    CDStruct_f6143a38 _originalLineBeforeInsettingToAvoidOtherDrawables;
    CDStruct_8f194ad9 _leftOrBottomEdge;
    CDStruct_8f194ad9 _rightOrTopEdge;
}

+ (void)determineConstraintDrawablesAndGuideLinesForOrderedConstraintAbstractions:(id)arg1 withStatus:(id)arg2 concreteConstraintProvider:(id)arg3 constraintStatusProvider:(id)arg4 drawingDestination:(id)arg5 constraintsByAbstraction:(id)arg6 constantsByConstraint:(id)arg7 populatingConstraintDrawables:(id)arg8 populatingWrappedGuideLines:(id)arg9;
@property(copy, nonatomic) NSArray *guideLines; // @synthesize guideLines=_guideLines;
@property(nonatomic) unsigned long long representingSizeAttribute; // @synthesize representingSizeAttribute=_representingSizeAttribute;
@property(copy, nonatomic) NSNumber *edgeBias; // @synthesize edgeBias=_edgeBias;
@property(nonatomic) CDStruct_f6143a38 originalLineBeforeInsettingToAvoidOtherDrawables; // @synthesize originalLineBeforeInsettingToAvoidOtherDrawables=_originalLineBeforeInsettingToAvoidOtherDrawables;
@property(nonatomic, getter=isInsetToAvoidOtherDrawables) _Bool insetToAvoidOtherDrawables; // @synthesize insetToAvoidOtherDrawables=_insetToAvoidOtherDrawables;
@property(nonatomic) _Bool shouldAlwaysDrawGuideLinesIfNeeded; // @synthesize shouldAlwaysDrawGuideLinesIfNeeded=_shouldAlwaysDrawGuideLinesIfNeeded;
@property(nonatomic) CDStruct_c519178c badgeDrawingInset; // @synthesize badgeDrawingInset=_badgeDrawingInset;
@property(nonatomic) struct CGSize badgeSize; // @synthesize badgeSize=_badgeSize;
@property(retain, nonatomic) NSImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(nonatomic, getter=isDashed) _Bool dashed; // @synthesize dashed=_dashed;
@property(nonatomic) double lineThickness; // @synthesize lineThickness=_lineThickness;
@property(nonatomic, getter=isSelectable) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) CDStruct_8f194ad9 rightOrTopEdge; // @synthesize rightOrTopEdge=_rightOrTopEdge;
@property(readonly, nonatomic) CDStruct_8f194ad9 leftOrBottomEdge; // @synthesize leftOrBottomEdge=_leftOrBottomEdge;
@property(readonly, nonatomic) double movementPriority; // @synthesize movementPriority=_movementPriority;
@property(copy, nonatomic) NSColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) CDStruct_f6143a38 line; // @synthesize line=_line;
@property(retain, nonatomic) IBLayoutConstraint *constraint; // @synthesize constraint=_constraint;
- (void).cxx_destruct;
- (_Bool)isPointingUpOrRightInCoordinateSpaceOfView:(id)arg1;
@property(readonly, nonatomic) _Bool supportsInsettingToAvoidOtherDrawablesOrGuidelines;
@property(readonly) _Bool constraintIsVertical;
@property(readonly) _Bool isVertical;
- (id)description;
- (id)initWithConstraint:(id)arg1 line:(CDStruct_f6143a38)arg2 type:(unsigned long long)arg3 color:(id)arg4 movementPriority:(double)arg5;
- (id)initWithConstraint:(id)arg1 line:(CDStruct_f6143a38)arg2 type:(unsigned long long)arg3 color:(id)arg4 movementPriority:(double)arg5 leftOrBottomEdge:(CDStruct_8f194ad9)arg6 rightOrTopEdge:(CDStruct_8f194ad9)arg7;

@end

