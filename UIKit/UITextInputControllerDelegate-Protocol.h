//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSMutableAttributedString, NSString, UITextInputController;

@protocol UITextInputControllerDelegate <NSObject>

@optional
- (void)textInputDidChangeSelection:(UITextInputController *)arg1;
- (struct _NSRange)textInput:(UITextInputController *)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (void)textInputDidChange:(UITextInputController *)arg1;
- (void)textInput:(UITextInputController *)arg1 prepareAttributedTextForInsertion:(NSMutableAttributedString *)arg2;
- (_Bool)textInput:(UITextInputController *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (_Bool)textInputShouldBeginEditing:(UITextInputController *)arg1;
@end

