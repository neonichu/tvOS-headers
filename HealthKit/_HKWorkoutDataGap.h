//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface _HKWorkoutDataGap : NSObject <NSSecureCoding>
{
    NSUUID *_start;
    NSUUID *_end;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *end; // @synthesize end=_end;
@property(retain, nonatomic) NSUUID *start; // @synthesize start=_start;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

