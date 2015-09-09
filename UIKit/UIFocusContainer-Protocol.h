//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIView;
@protocol UIFocusContainer;

@protocol UIFocusContainer <NSObject>
@property(readonly, nonatomic) UIView *focusedView;
@property(readonly, nonatomic) id <UIFocusContainer> preferredFocusedItem;
- (void)focusedViewDidChange;
- (void)focusedViewWillChange;
- (void)updatePreferredFocusedItemIfNeeded;
- (void)setNeedsPreferredFocusedItemUpdate;
- (_Bool)isAncestorOfItem:(id <UIFocusContainer>)arg1;
- (_Bool)shouldChangeFocusedItem:(id <UIFocusContainer>)arg1;
- (_Bool)shouldChangeFocusedItem:(id <UIFocusContainer>)arg1 heading:(unsigned long long)arg2;
@end

