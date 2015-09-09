//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <EventKitUI/CalendarLabelTextMetrics-Protocol.h>

@class NSString, UIColor, UIFont;

@interface EKTextViewWithLabelTextMetrics : UITextView <CalendarLabelTextMetrics>
{
    long long lineBreakMode;
}

@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
@property(nonatomic) long long numberOfLines;
- (void)setURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) UIFont *font; // @dynamic font;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;

@end

