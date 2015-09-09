//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSLocale, NSNumberFormatter, NSString;

@interface AVTimeFormatter : NSFormatter
{
    long long _style;
    unsigned int _fullWidth:1;
    double _formatTemplate;
    NSLocale *_locale;
    unsigned int _isRightToLeft:1;
    NSString *_cachedDateFormatterFormat;
    NSString *_cachedDateFormatterTemplate;
    NSNumberFormatter *_numberFormatterWithOneMinimumIntegerDigits;
    NSNumberFormatter *_numberFormatterWithTwoMinimumIntegerDigits;
}

- (void).cxx_destruct;
@property(getter=isFullWidth) _Bool fullWidth;
@property double formatTemplate;
@property long long style;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

