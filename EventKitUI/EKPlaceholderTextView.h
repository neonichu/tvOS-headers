//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class UILabel;

@interface EKPlaceholderTextView : UITextView
{
    UILabel *_placeholder;
    _Bool _showingPlaceholder;
}

- (void).cxx_destruct;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (void)layoutSubviews;
- (void)_updatePlaceholder;
- (id)_placeholderLabel;
- (void)textChanged:(id)arg1;
- (void)setText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

