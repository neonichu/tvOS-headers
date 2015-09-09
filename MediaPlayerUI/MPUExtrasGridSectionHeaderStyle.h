//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIColor;

@interface MPUExtrasGridSectionHeaderStyle : NSObject
{
    NSString *_textStyle;
    NSDictionary *_defaultFontAttributes;
    UIColor *_textColor;
    double _textBaselineHeight;
    double _textBaselineDescender;
    struct UIEdgeInsets _insets;
}

@property(nonatomic) double textBaselineDescender; // @synthesize textBaselineDescender=_textBaselineDescender;
@property(nonatomic) double textBaselineHeight; // @synthesize textBaselineHeight=_textBaselineHeight;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSDictionary *defaultFontAttributes; // @synthesize defaultFontAttributes=_defaultFontAttributes;
@property(retain, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
- (void).cxx_destruct;

@end

