//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQuantity, HKQuantityType, NSArray, NSDate, NSDictionary;

@interface HKStatistics : NSObject <NSSecureCoding, NSCopying>
{
    HKQuantityType *_quantityType;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_sources;
    unsigned long long _dataCount;
    HKQuantity *_averageQuantity;
    HKQuantity *_minimumQuantity;
    HKQuantity *_maximumQuantity;
    NSDictionary *_averageQuantityBySource;
    NSDictionary *_minimumQuantityBySource;
    NSDictionary *_maximumQuantityBySource;
    NSDictionary *_dataCountBySource;
    HKQuantity *_sumQuantity;
    NSDictionary *_sumQuantityBySource;
}

+ (_Bool)supportsSecureCoding;
+ (void)_validateOptions:(unsigned long long)arg1 forDataType:(id)arg2;
@property(retain, nonatomic) NSDictionary *sumQuantityBySource; // @synthesize sumQuantityBySource=_sumQuantityBySource;
@property(retain, nonatomic) HKQuantity *sumQuantity; // @synthesize sumQuantity=_sumQuantity;
@property(retain, nonatomic) NSDictionary *dataCountBySource; // @synthesize dataCountBySource=_dataCountBySource;
@property(retain, nonatomic) NSDictionary *maximumQuantityBySource; // @synthesize maximumQuantityBySource=_maximumQuantityBySource;
@property(retain, nonatomic) NSDictionary *minimumQuantityBySource; // @synthesize minimumQuantityBySource=_minimumQuantityBySource;
@property(retain, nonatomic) NSDictionary *averageQuantityBySource; // @synthesize averageQuantityBySource=_averageQuantityBySource;
@property(retain, nonatomic) HKQuantity *maximumQuantity; // @synthesize maximumQuantity=_maximumQuantity;
@property(retain, nonatomic) HKQuantity *minimumQuantity; // @synthesize minimumQuantity=_minimumQuantity;
@property(retain, nonatomic) HKQuantity *averageQuantity; // @synthesize averageQuantity=_averageQuantity;
@property(nonatomic) unsigned long long dataCount; // @synthesize dataCount=_dataCount;
- (void).cxx_destruct;
- (void)_setSources:(id)arg1;
@property(readonly) NSArray *sources;
- (void)_setEndDate:(id)arg1;
@property(readonly) NSDate *endDate;
- (void)_setStartDate:(id)arg1;
@property(readonly) NSDate *startDate;
@property(readonly) HKQuantityType *quantityType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initAsCopyOf:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sumQuantityForSource:(id)arg1;
- (id)maximumQuantityForSource:(id)arg1;
- (id)minimumQuantityForSource:(id)arg1;
- (id)averageQuantityForSource:(id)arg1;
- (id)_initWithDataType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)init;

@end

