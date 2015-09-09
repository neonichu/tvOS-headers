//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, PKGlyphView, PKPaymentAuthorizationLayout, UIButton, UILabel;

@interface PKPaymentAuthorizationFooterView : UIView
{
    NSString *_title;
    UILabel *_labelView;
    PKGlyphView *_glyphView;
    UILabel *_passbookPaymentDetailsView;
    UIView *_separatorView;
    NSLayoutConstraint *_separatorLeftConstraint;
    NSLayoutConstraint *_payWithPasscodeCenterYConstraint;
    NSLayoutConstraint *_overallHeightConstraint;
    long long _state;
    UIButton *_payWithPasscodeButton;
    PKPaymentAuthorizationLayout *_layout;
}

@property(nonatomic) PKPaymentAuthorizationLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) UIButton *payWithPasscodeButton; // @synthesize payWithPasscodeButton=_payWithPasscodeButton;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)_titleAttributedStringForState:(long long)arg1;
- (id)_titleLabelAttributedString:(id)arg1;
- (void)_prepareConstraints;
- (void)updateConstraints;
- (void)_createSubviews;
- (void)setState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

