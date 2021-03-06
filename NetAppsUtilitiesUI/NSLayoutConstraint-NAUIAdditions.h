//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLayoutConstraint.h>

@interface NSLayoutConstraint (NAUIAdditions)
+ (id)naui_constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 label:(id)arg5;
+ (id)naui_viewsInConstraints:(id)arg1;
+ (id)naui_constraintsBySizingView:(id)arg1 toSize:(struct CGSize)arg2;
+ (id)naui_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 insets:(struct UIEdgeInsets)arg4;
+ (id)naui_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 relatedBy:(long long)arg4 insets:(struct UIEdgeInsets)arg5;
+ (id)naui_constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(unsigned long long)arg3 offset:(struct UIOffset)arg4;
+ (_Bool)naui_areConstraints:(id)arg1 equalToConstraints:(id)arg2;
- (void)naui_setIdentifierWithLabel:(id)arg1;
- (id)naui_debugIdentifierWithBaseLabel:(id)arg1;
- (_Bool)naui_isEqualToConstraint:(id)arg1;
@end

