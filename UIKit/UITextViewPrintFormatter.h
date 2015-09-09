//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewPrintFormatter.h>

@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter
{
    struct {
        unsigned int initializedUsedRects:1;
    } _textViewPrintFormatterFlags;
    NSArray *_pageData;
}

- (void).cxx_destruct;
- (long long)textAlignment;
- (void)setTextAlignment:(long long)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)_textView;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;
- (long long)_recalcPageCount;
- (id)_pageData;

@end

