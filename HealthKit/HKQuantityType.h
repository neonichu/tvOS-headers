//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKSampleType.h>

@class HKUnit, NSString, _HKDimension;

@interface HKQuantityType : HKSampleType
{
    long long _aggregationStyle;
    NSString *_unitString;
    HKUnit *_canonicalUnit;
    long long _canonicalUnitToken;
}

+ (id)_quantityTypeWithCode:(long long)arg1;
+ (void)_insertCode:(long long)arg1 forIdentifier:(id)arg2;
- (void).cxx_destruct;
- (void)validateUnitFromString:(id)arg1;
- (void)validateUnit:(id)arg1;
@property(readonly, nonatomic) _HKDimension *dimension;
@property(readonly, nonatomic) HKUnit *canonicalUnit;
@property(readonly) long long aggregationStyle;
- (_Bool)isCompatibleWithUnit:(id)arg1;
- (id)_initWithDefinition:(CDStruct_6b208136 *)arg1;

@end

