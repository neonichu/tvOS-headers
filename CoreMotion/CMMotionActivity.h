//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@class NSDate;

@interface CMMotionActivity : CMLogItem
{
    struct CLMotionActivity fState;
}

+ (_Bool)supportsSecureCoding;
- (id)description;
@property(readonly, nonatomic) _Bool cycling;
@property(readonly, nonatomic) _Bool automotive;
@property(readonly, nonatomic) _Bool running;
@property(readonly, nonatomic) _Bool walking;
@property(readonly, nonatomic) _Bool stationary;
@property(readonly, nonatomic) _Bool unknown;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic, getter=isVehicleConnected) _Bool vehicleConnected;
@property(readonly, nonatomic) long long confidence;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity)arg1;

@end

