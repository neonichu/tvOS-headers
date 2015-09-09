//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTNetworkSupport : NSObject
{
    _Bool _enableCriticalReliability;
    _Bool _criticalReliabilityEnabledState;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enableCriticalReliability;
- (void)_tryToEnableReliability;
- (void)_reallySetCriticalReliability:(_Bool)arg1;
- (void)_setReliabilityTimeoutInterval;
- (void)_clearReliabilityTimeoutInterval;
@property(readonly, nonatomic) _Bool networkReachable;
@property(readonly, nonatomic) _Bool networkActive;
@property(readonly, nonatomic) _Bool networkEnabled;
@property(readonly, nonatomic) _Bool dataActiveAndReachable;
@property(readonly, nonatomic) _Bool willSearchForNetwork;
@property(readonly, nonatomic) _Bool wiFiActiveAndReachable;
@property(readonly, nonatomic) _Bool validNetworkReachable;
@property(readonly, nonatomic) _Bool validNetworkActive;
@property(readonly, nonatomic) _Bool validNetworkEnabled;
@property(readonly, nonatomic) _Bool allowAnyNetwork;

@end

