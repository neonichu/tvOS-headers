//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HAPMetadataCharacteristicValue : NSObject
{
    NSNumber *_minValue;
    NSNumber *_maxValue;
    NSNumber *_stepValue;
    NSNumber *_minLength;
    NSNumber *_maxLength;
}

+ (id)initWithDictionary:(id)arg1;
@property(retain, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) NSNumber *minLength; // @synthesize minLength=_minLength;
@property(retain, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(retain, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(retain, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
- (void).cxx_destruct;
- (void)dump;
- (id)description;
- (id)generateDictionary;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2 stepValue:(id)arg3;
- (id)initWithMinLength:(id)arg1 maxLength:(id)arg2;

@end

