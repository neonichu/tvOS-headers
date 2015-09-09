//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

#import <AXRuntime/NSCopying-Protocol.h>

@interface AXAttributedString : NSString <NSCopying>
{
    struct __CFAttributedString *_string;
}

+ (id)string;
+ (id)axAttributedStringWithString:(id)arg1;
- (id)description;
- (id)axAttributedStringDescription;
- (id)substringFromIndex:(unsigned long long)arg1;
- (_Bool)hasAttribute:(id)arg1;
- (id)coalescedFontAttributes;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (id)uppercaseString;
- (id)lowercaseString;
- (id)string;
- (_Bool)isAXAttributedString;
- (void)enumerateAttributesUsingBlock:(CDUnknownBlockType)arg1;
- (id)attributeValueForKey:(id)arg1;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)appendStringOrAXAttributedString:(id)arg1;
- (void)appendAXAttributedString:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (void)setAttributes:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)removeAttributes:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(struct _NSRange)arg3;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setAttributes:(id)arg1;
- (struct __CFAttributedString *)cfAttributedString;
- (void)replaceString:(struct __CFString *)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)convertAttachmentsWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCFAttributedString:(struct __CFAttributedString *)arg1;
- (id)initWithString:(id)arg1;

@end

