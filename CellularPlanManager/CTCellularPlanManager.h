//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/CTCellularPlanClientDelegate-Protocol.h>

@class NSData, NSMutableArray, NSString, NSXPCConnection;

@interface CTCellularPlanManager : NSObject <CTCellularPlanClientDelegate>
{
    NSMutableArray *_subscriptionCompletions;
    struct dispatch_queue_s *_queue;
    NSString *_lastSessionId;
    NSData *_cookieData;
    NSXPCConnection *_connection;
}

+ (id)sharedManager;
- (void)dealloc;
- (void)subscriptionDetailsForCompletion:(id)arg1;
- (void)planInfoDidUpdate;
- (void)updatePlansDatabase;
- (void)expirePlan;
- (void)launchSequoia;
- (void)getCurrentPlanType:(CDUnknownBlockType)arg1;
- (void)openInternalUrlId:(long long)arg1;
- (void)getDeviceInfo:(CDUnknownBlockType)arg1;
- (void)carrierHandoffToken:(CDUnknownBlockType)arg1;
- (void)setUserInPurchaseFlow:(_Bool)arg1;
- (void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(_Bool)arg2;
- (void)setActivePlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didSelectPlanItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)willDisplayPlanItems;
- (void)planItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)isAddButtonEnabled:(CDUnknownBlockType)arg1;
- (void)shouldShowPlanList:(CDUnknownBlockType)arg1;
- (void)subscriptionDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (void)plansForRenewalWithCompletion:(CDUnknownBlockType)arg1;
- (void)plansWithCompletion:(CDUnknownBlockType)arg1 latitude:(id)arg2 longitude:(id)arg3;
- (void)plansWithCompletion:(CDUnknownBlockType)arg1;
- (void)plansForRenewalWithProgress:(CDUnknownBlockType)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)plansWithProgress:(CDUnknownBlockType)arg1 andCompletion:(CDUnknownBlockType)arg2 additionalParameters:(id)arg3;
- (void)plansWithProgress:(CDUnknownBlockType)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)_plansForRenewal:(_Bool)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 latitude:(id)arg4 longitude:(id)arg5 additionalParameters:(id)arg6;
- (void)setLatitude:(id)arg1 andLongitude:(id)arg2;
- (void)latitudeLongitudeOverride:(CDUnknownBlockType)arg1;
- (void)setMcc:(long long)arg1 andMnc:(long long)arg2;
- (void)mccMncOverride:(CDUnknownBlockType)arg1;
- (void)setSelectedProxy:(long long)arg1;
- (void)getSelectedProxy:(CDUnknownBlockType)arg1;
- (void)setSelectedEnv:(long long)arg1;
- (void)getSelectedEnv:(CDUnknownBlockType)arg1;
- (void)setIMEIPrefix:(id)arg1;
- (void)getIMEIPrefix:(CDUnknownBlockType)arg1;
- (void)connectionSettings:(CDUnknownBlockType)arg1;
- (void)triggerAddNewDataPlan:(CDUnknownBlockType)arg1;
- (void)isRoamingPlanSupportAvailable:(CDUnknownBlockType)arg1;
- (void)isMultipleDataPlanSupportAvailable:(CDUnknownBlockType)arg1;
- (void)isNewDataPlanCapable:(CDUnknownBlockType)arg1;
- (id)init;
- (void)_connect_sync;
- (void)_ensureConnected_sync;
- (void)_reconnect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

