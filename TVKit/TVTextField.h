//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class UIResponder, UITapGestureRecognizer;

@interface TVTextField : UITextField
{
    UIResponder *_previousResponder;
    UITapGestureRecognizer *_menuRecognizer;
}

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_handleMenuAction:(id)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1;

@end

