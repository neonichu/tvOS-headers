//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class _UIButtonBarButtonVisualProvider;

__attribute__((visibility("hidden")))
@interface _UIButtonBarButton : UIControl
{
    _UIButtonBarButtonVisualProvider *_visualProvider;
    _Bool _backButton;
}

@property(readonly, nonatomic, getter=isBackButton) _Bool backButton; // @synthesize backButton=_backButton;
@property(readonly, copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // @synthesize visualProvider=_visualProvider;
- (void).cxx_destruct;
- (void)_accessibilitySettingsChanged:(id)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_configureFromBarItem:(id)arg1 isBackButton:(_Bool)arg2;
- (void)reset;
- (void)configureBackButtonFromBarItem:(id)arg1;
- (void)configureFromBarItem:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithVisualProvider:(id)arg1;
- (void)dealloc;

@end

