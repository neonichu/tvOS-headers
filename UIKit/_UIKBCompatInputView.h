//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface _UIKBCompatInputView : UIView
{
}

+ (_Bool)_retroactivelyRequiresConstraintBasedLayout;
- (_Bool)_hasAutolayoutHeightConstraint;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGRect)_compatibleBounds;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIView *touchableView;
- (void)addSubview:(id)arg1;

@end

