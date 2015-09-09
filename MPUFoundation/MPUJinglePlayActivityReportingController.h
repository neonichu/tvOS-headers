//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUReportingController.h>

@class NSObject, NSString, SSVPlayActivityController;
@protocol OS_dispatch_queue;

@interface MPUJinglePlayActivityReportingController : MPUReportingController
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    double _nonCatalogAggregatePlayDuration;
    double _nonCatalogAggregateStartTime;
    NSString *_nonCatalogDeviceName;
    _Bool _nonCatalogOffline;
    _Bool _nonCatalogSBEnabled;
    unsigned long long _nonCatalogSourceType;
    unsigned long long _nonCatalogStoreAccountID;
    _Bool _shouldReportAggregateTimePlayActivityEvents;
    _Bool _shouldReportPlayActivityEvents;
    SSVPlayActivityController *_playActivityController;
}

@property(nonatomic) _Bool shouldReportPlayActivityEvents; // @synthesize shouldReportPlayActivityEvents=_shouldReportPlayActivityEvents;
@property(nonatomic) _Bool shouldReportAggregateTimePlayActivityEvents; // @synthesize shouldReportAggregateTimePlayActivityEvents=_shouldReportAggregateTimePlayActivityEvents;
@property(readonly, nonatomic) SSVPlayActivityController *playActivityController; // @synthesize playActivityController=_playActivityController;
- (void).cxx_destruct;
- (void)_clearNonCatalogAggregatePlayActivityEventData;
- (id)_captureNonCatalogAggregatePlayActivityEvent;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)acquirePendingPlayActivityEventsForStoreAccountID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_recordReportingEvents:(id)arg1;
- (void)dealloc;
- (id)initWithWritingStyle:(unsigned long long)arg1;
- (id)init;

@end

