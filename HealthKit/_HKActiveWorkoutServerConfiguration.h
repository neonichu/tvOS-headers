//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSUUID;

@interface _HKActiveWorkoutServerConfiguration : NSObject <NSSecureCoding>
{
    _Bool _shouldUseDeviceData;
    _Bool _indoor;
    NSDictionary *_resumeDataByType;
    long long _workoutState;
    NSArray *_workoutEvents;
    unsigned long long _workoutActivityType;
    NSDate *_startDate;
    NSUUID *_UUID;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic, getter=isIndoor) _Bool indoor; // @synthesize indoor=_indoor;
@property(nonatomic) _Bool shouldUseDeviceData; // @synthesize shouldUseDeviceData=_shouldUseDeviceData;
@property(nonatomic) unsigned long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
@property(retain, nonatomic) NSArray *workoutEvents; // @synthesize workoutEvents=_workoutEvents;
@property(nonatomic) long long workoutState; // @synthesize workoutState=_workoutState;
@property(retain, nonatomic) NSDictionary *resumeDataByType; // @synthesize resumeDataByType=_resumeDataByType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

