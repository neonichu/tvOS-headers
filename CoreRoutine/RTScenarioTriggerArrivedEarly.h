//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRoutine/RTScenarioTrigger.h>

@interface RTScenarioTriggerArrivedEarly : RTScenarioTrigger
{
    double _secondsEarly;
}

@property(readonly, nonatomic) double secondsEarly; // @synthesize secondsEarly=_secondsEarly;
- (id)description;
- (id)initWithSecondsEarly:(double)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

