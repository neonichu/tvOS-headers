//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKit/UITextViewDelegate-Protocol.h>

@class NSString, UIColor, UITextView;
@protocol PKPaymentSetupPrivacyFooterViewDelegate;

@interface PKPaymentSetupPrivacyFooterView : UIView <UITextViewDelegate>
{
    long long _context;
    UITextView *_messageView;
    id <PKPaymentSetupPrivacyFooterViewDelegate> _delegate;
    UIColor *_messageColor;
    UIColor *_linkColor;
}

@property(copy, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(copy, nonatomic) UIColor *messageColor; // @synthesize messageColor=_messageColor;
@property(nonatomic) id <PKPaymentSetupPrivacyFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_defaultLinkColor;
- (id)_defaultMessageColor;
- (id)_linkTextAttributes;
- (id)_textAttributes;
- (void)_loadMessageView;
- (void)_loadMessageViewIfNecessary;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 context:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)pk_applyAppearance:(struct _PKAppearanceSpecifier *)arg1;
- (id)pk_childrenForAppearance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

