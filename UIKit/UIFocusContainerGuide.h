//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIFocusGuide.h>

@class NSMapTable;

@interface UIFocusContainerGuide : UIFocusGuide
{
    _Bool _shouldPreferNearestSubview;
    _Bool _automaticallyDisableWhenContainingFocus;
    NSMapTable *_preferredFocusedViewMapTable;
}

@property(retain, nonatomic) NSMapTable *preferredFocusedViewMapTable; // @synthesize preferredFocusedViewMapTable=_preferredFocusedViewMapTable;
@property(nonatomic) _Bool automaticallyDisableWhenContainingFocus; // @synthesize automaticallyDisableWhenContainingFocus=_automaticallyDisableWhenContainingFocus;
@property(nonatomic) _Bool shouldPreferNearestSubview; // @synthesize shouldPreferNearestSubview=_shouldPreferNearestSubview;
- (void).cxx_destruct;
- (_Bool)_focusRegionIsEligibleForFocus;
- (void)_didUpdateFocusToPreferredFocusedViewForHeading:(unsigned long long)arg1;
- (id)preferredFocusedViewForHeading:(unsigned long long)arg1;
- (void)setPreferredFocusedView:(id)arg1 forHeading:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

