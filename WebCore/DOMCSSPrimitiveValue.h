//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMCSSValue.h>

@interface DOMCSSPrimitiveValue : DOMCSSValue
{
}

- (id)getRGBColorValue;
- (id)getRectValue;
- (id)getCounterValue;
- (id)getStringValue;
- (void)setStringValue:(unsigned short)arg1:(id)arg2;
- (void)setStringValue:(unsigned short)arg1 stringValue:(id)arg2;
- (float)getFloatValue:(unsigned short)arg1;
- (void)setFloatValue:(unsigned short)arg1:(float)arg2;
- (void)setFloatValue:(unsigned short)arg1 floatValue:(float)arg2;
@property(readonly) unsigned short primitiveType;

@end

