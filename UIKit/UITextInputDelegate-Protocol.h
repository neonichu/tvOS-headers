//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@protocol UITextInput;

@protocol UITextInputDelegate <NSObject>
- (void)textDidChange:(id <UITextInput>)arg1;
- (void)textWillChange:(id <UITextInput>)arg1;
- (void)selectionDidChange:(id <UITextInput>)arg1;
- (void)selectionWillChange:(id <UITextInput>)arg1;
@end

