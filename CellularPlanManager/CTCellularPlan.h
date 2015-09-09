//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/NSCopying-Protocol.h>
#import <CellularPlanManager/NSSecureCoding-Protocol.h>

@class CTCellularPlanProfile, CTCellularPlanSubscription, NSArray, NSData, NSNumber, NSString;

@interface CTCellularPlan : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isHomePlan;
    _Bool _isSelectable;
    NSString *_phoneNumber;
    CTCellularPlanProfile *_profile;
    CTCellularPlanSubscription *_subscription;
    NSNumber *_subscriptionStatusOverride;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *subscriptionStatusOverride; // @synthesize subscriptionStatusOverride=_subscriptionStatusOverride;
@property(retain, nonatomic) CTCellularPlanSubscription *subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) CTCellularPlanProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(nonatomic) _Bool isHomePlan; // @synthesize isHomePlan=_isHomePlan;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSArray *dataUsage;
@property(readonly, nonatomic) NSString *accountURL;
@property(readonly, nonatomic) int accountStatus;
@property(readonly, nonatomic) int planStatus;
@property(readonly, nonatomic) NSString *planDescription;
@property(readonly, nonatomic) int planType;
@property(readonly, nonatomic) NSString *carrierName;
@property(readonly, nonatomic) double billingEndDate;
@property(readonly, nonatomic) double billingStartDate;
@property(readonly, nonatomic) double timestamp;
@property(readonly, nonatomic) _Bool autoRenew;
@property(readonly, nonatomic) NSString *iccid;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) _Bool isSelected;
@property(readonly, nonatomic) NSData *profileId;
- (long long)planDescriptionCompare:(id)arg1;
- (id)initWithProfile:(id)arg1 subscription:(id)arg2;
- (id)init;

@end

