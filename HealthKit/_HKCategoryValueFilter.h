//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class HKCategoryType, NSNumber;

@interface _HKCategoryValueFilter : _HKFilter
{
    NSNumber *_comparisonValue;
    HKCategoryType *_dataType;
    unsigned long long _operatorType;
}

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned long long)arg1 comparisonValue:(id)arg2 dataType:(id)arg3;
@property(readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property(readonly, nonatomic) HKCategoryType *dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) NSNumber *comparisonValue; // @synthesize comparisonValue=_comparisonValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end

