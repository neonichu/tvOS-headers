//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FMF/NSObject-Protocol.h>

@class FMFDevice, FMFFriendshipRequest, FMFHandle, NSDate, NSNumber, NSSet, NSString;

@protocol FMFXPCServerProtocol <NSObject>
- (oneway void)showAirDropImportErrorAlert;
- (oneway void)showAirDropImportAlertForId:(NSString *)arg1;
- (oneway void)showGenericErrorAlert;
- (oneway void)show5XXDuringStopOfferAlert;
- (oneway void)show5XXDuringStartOfferAlert;
- (oneway void)showNetworkOfflineDuringStopOfferAlert;
- (oneway void)showNetworkOfflineDuringOfferAlert;
- (oneway void)upselliCloudAlert;
- (oneway void)notLoggedIntoiCloudAlert;
- (oneway void)showForbiddenRegionAlert;
- (oneway void)showShareMyLocationiCloudSettingsOffAlert;
- (oneway void)showShareMyLocationSystemServiceOffAlert;
- (oneway void)showLocationServicesSwitchOffAlert;
- (oneway void)showMaxFollowersLimitReachedAlert;
- (oneway void)showRestrictedAlert;
- (oneway void)showActiveDeviceChangedAlert;
- (oneway void)showSwitchMeDeviceAlertUsingCurrentMeDeviceName:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (oneway void)nearbyLocationsWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)favoritesForMaxCount:(NSNumber *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getMaxLocatingInterval:(void (^)(double, NSError *))arg1;
- (oneway void)setExpiredInitTimestamp;
- (oneway void)sessionWasCreatedRefresh;
- (oneway void)forceRefresh;
- (oneway void)getAllLocations:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)invalidateMappingPackets:(NSSet *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)importMappingPacket:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getHandlesWithPendingOffers:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)getOfferExpirationForHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(NSDate *, NSError *))arg4;
- (oneway void)getPendingFriendshipRequestsWithCompletion:(void (^)(NSSet *, NSSet *, NSError *))arg1;
- (oneway void)stopSharingMyLocationWithHandles:(NSSet *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (oneway void)stopSharingMyLocationWithHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (oneway void)declineFriendshipRequest:(FMFFriendshipRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)approveFriendshipRequest:(FMFFriendshipRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)sendFriendshipInviteToHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 endDate:(NSDate *)arg4 completion:(void (^)(NSString *, NSError *))arg5;
- (oneway void)extendFriendshipOfferToHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 endDate:(NSDate *)arg4 completion:(void (^)(NSString *, NSError *))arg5;
- (oneway void)sendFriendshipOfferToHandles:(NSSet *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 endDate:(NSDate *)arg4 completion:(void (^)(NSDictionary *, NSError *))arg5;
- (oneway void)removeDevice:(FMFDevice *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)getAbRecordIdForHandle:(FMFHandle *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (oneway void)getPrettyNameForHandle:(FMFHandle *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)canOfferToHandles:(NSSet *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (oneway void)isNetworkReachable:(void (^)(_Bool, NSError *))arg1;
- (oneway void)allDevices:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)deviceSharingLocation:(void (^)(FMFDevice *, NSError *))arg1;
- (oneway void)getPendingMappingPacketsForHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 completion:(void (^)(NSArray *, NSArray *, NSError *))arg3;
- (oneway void)canShareLocationWithHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(_Bool, NSString *, NSError *))arg4;
- (oneway void)setActiveDevice:(FMFDevice *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)isMyLocationEnabled:(void (^)(_Bool, NSError *))arg1;
- (oneway void)setHideMyLocationEnabled:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)canGetLocationForHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(_Bool, NSString *, NSError *))arg4;
- (oneway void)getHandlesSharingMyLocationWithGroupId:(NSString *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (oneway void)getHandlesSharingMyLocation:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)getHandlesSharingLocationsWithMeWithGroupId:(NSString *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (oneway void)getHandlesSharingLocationsWithMe:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)locationForHandle:(FMFHandle *)arg1 completion:(void (^)(FMFLocation *, NSString *, NSError *))arg2;
- (oneway void)getCurrentTrackedHandles:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)removeFriendHandles:(NSSet *)arg1;
- (oneway void)addFriendHandles:(NSSet *)arg1;
- (oneway void)fetchLocationForHandles:(NSSet *)arg1 callerId:(FMFHandle *)arg2 priority:(long long)arg3 completion:(void (^)(NSError *, NSString *))arg4;
- (oneway void)fetchLocationForHandle:(FMFHandle *)arg1 callerId:(FMFHandle *)arg2 priority:(long long)arg3 completion:(void (^)(NSError *, NSString *))arg4;
@end

