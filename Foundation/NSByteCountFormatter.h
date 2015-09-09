//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

#import <Foundation/NSObservable-Protocol.h>
#import <Foundation/NSObserver-Protocol.h>

@class NSString;

@interface NSByteCountFormatter : NSFormatter <NSObservable, NSObserver>
{
    unsigned int _allowedUnits;
    BOOL _countStyle;
    _Bool _allowsNonnumericFormatting;
    _Bool _includesUnit;
    _Bool _includesCount;
    _Bool _includesActualByteCount;
    _Bool _adaptive;
    _Bool _zeroPadsFractionDigits;
    int _formattingContext;
    int _reserved[5];
}

+ (id)stringFromByteCount:(long long)arg1 countStyle:(long long)arg2;
@property _Bool zeroPadsFractionDigits; // @synthesize zeroPadsFractionDigits=_zeroPadsFractionDigits;
@property(getter=isAdaptive) _Bool adaptive; // @synthesize adaptive=_adaptive;
@property _Bool includesActualByteCount; // @synthesize includesActualByteCount=_includesActualByteCount;
@property _Bool includesCount; // @synthesize includesCount=_includesCount;
@property _Bool includesUnit; // @synthesize includesUnit=_includesUnit;
@property _Bool allowsNonnumericFormatting; // @synthesize allowsNonnumericFormatting=_allowsNonnumericFormatting;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property long long formattingContext;
- (id)init;
- (_Bool)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (id)stringFromByteCount:(long long)arg1;
- (unsigned long long)_options;
@property long long countStyle;
@property unsigned long long allowedUnits;
- (void)receiveObservedValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

