//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/_SBIconProgressTransition.h>

@interface _SBIconProgressFractionTransition : _SBIconProgressTransition
{
    double _targetFraction;
}

+ (id)newTransitionToFraction:(double)arg1;
- (_Bool)isCompleteWithView:(id)arg1;
- (void)_updateView:(id)arg1 forDisplayedFraction:(double)arg2;
- (void)completeTransitionAndUpdateView:(id)arg1;
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;
- (void)updateToFraction:(double)arg1;

@end

