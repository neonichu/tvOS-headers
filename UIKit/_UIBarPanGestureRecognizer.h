//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UIBarPanGestureRecognizer : UIPanGestureRecognizer
{
    long long _barAction;
    double _bias;
}

@property(readonly, nonatomic) double bias; // @synthesize bias=_bias;
@property(readonly, nonatomic) long long barAction; // @synthesize barAction=_barAction;
- (id)description;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

