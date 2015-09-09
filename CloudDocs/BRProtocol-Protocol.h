//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/CKXPCSharingClient-Protocol.h>

@class CKShare, NSArray, NSDictionary, NSFileHandle, NSObject, NSSet, NSString, NSURL;
@protocol BRItemNotificationReceiving, BRNonLocalVersionReceiving, BROperationClient;

@protocol BRProtocol <CKXPCSharingClient>
- (void)removeItemFromDisk:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)presentAcceptDialogsForShareURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyShareURLForShare:(CKShare *)arg2 appName:(NSString *)arg3 reply:(void (^)(NSURL *, NSError *))arg4;
- (void)copyBulkShareIDsAtURLs:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toDestroySharingInfo:(CKShare *)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toSaveSharingInfo:(CKShare *)arg2 reply:(void (^)(CKShare *, NSError *))arg3;
- (void)createSharingInfoForURL:(NSURL *)arg1 reply:(void (^)(CKShare *, NSError *))arg2;
- (void)copyCurrentUserIdentifierWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopySharingAccessToken:(NSURL *)arg2 reply:(void (^)(NSData *, NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopySharingWebAuthTokenForContainerID:(NSString *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopySharingInfoAtURL:(NSURL *)arg2 reply:(void (^)(CKShare *, NSError *))arg3;
- (void)getiWorkNeedsShareMigrateAtURL:(NSURL *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)getiWorkPublishingBadgingStatusAtURL:(NSURL *)arg1 reply:(void (^)(int, NSError *))arg2;
- (void)getiWorkPublishingInfoAtURL:(NSURL *)arg1 reply:(void (^)(_Bool, _Bool, NSString *, NSError *))arg2;
- (void)setiWorkPublishingInfoAtURL:(NSURL *)arg1 publish:(_Bool)arg2 readonly:(_Bool)arg3 reply:(void (^)(NSError *))arg4;
- (void)getIsContainerWithIDOverQuota:(NSString *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)getContainerLastServerUpdateWithID:(NSString *)arg1 reply:(void (^)(NSDate *, NSError *))arg2;
- (void)getContainerStatusWithID:(NSString *)arg1 reply:(void (^)(unsigned int, NSError *))arg2;
- (void)getLastSyncDateWithReply:(void (^)(NSDate *, NSError *))arg1;
- (void)getApplicationStatusWithAuditToken:(CDStruct_6ad76789)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)getApplicationStatusWithPID:(int)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)getApplicationStatus:(void (^)(BOOL, NSError *))arg1;
- (void)forceConflictForURL:(NSURL *)arg1 bookmarkData:(NSString *)arg2 forcedEtag:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)getPublishedURLForItemAtURL:(NSURL *)arg1 forStreaming:(_Bool)arg2 requestedTTL:(unsigned long long)arg3 reply:(void (^)(NSURL *, NSDate *, NSError *))arg4;
- (void)getBackReferencingURLForURL:(NSURL *)arg1 reply:(void (^)(NSURL *, BRContainer *, NSError *))arg2;
- (void)getBackReferencingContainerIDsForURLs:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)resolveBookmarkDataToURL:(NSString *)arg1 reply:(void (^)(NSURL *, NSData *, NSURL *, NSData *, NSError *))arg2;
- (void)getBookmarkDataForURL:(NSURL *)arg1 andAllowAccessByBundleID:(NSString *)arg2 reply:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)getBookmarkDataForURL:(NSURL *)arg1 reply:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)jetsamCloudDocsAppsWithReply:(void (^)(NSError *))arg1;
- (void)getMigrationStatusForPrimaryiCloudAccount:(void (^)(BOOL, NSError *))arg1;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(NSString *)arg2 shouldUpdateAccount:(_Bool)arg3 reply:(void (^)(NSError *))arg4;
- (void)getContainersNeedingUpload:(void (^)(NSSet *, NSError *))arg1;
- (void)currentAccountLogoutWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)currentAccountCreateWithID:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)resolveConflictWithName:(NSString *)arg1 atURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (oneway void)bundleDidAccessExternalDocument:(NSFileHandle *)arg1;
- (void)addExternalDocumentReferenceTo:(NSURL *)arg1 forPid:(int)arg2 inContainer:(NSString *)arg3 underParent:(NSURL *)arg4 reply:(void (^)(NSURL *, NSURL *, NSData *, NSURL *, NSData *, NSError *))arg5;
- (void)copyLoggedInUserFirstAndLastNameWithReply:(void (^)(NSString *, NSString *, NSError *))arg1;
- (void)didReceiveHandoffRequestForBundleID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)getApplicationDocumentUsageInfoForBundleID:(NSString *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getTotalApplicationDocumentUsageWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getNonLocalVersionSenderWithReceiver:(id <BRNonLocalVersionReceiving>)arg1 documentURL:(NSURL *)arg2 includeCachedVersions:(_Bool)arg3 reply:(void (^)(id <BRNonLocalVersionSending>, NSURL *, NSError *))arg4;
- (void)getItemUpdateSenderWithReceiver:(id <BRItemNotificationReceiving>)arg1 reply:(void (^)(id <BRItemNotificationSending>, NSDictionary *, NSError *))arg2;
- (void)getAttributeValues:(NSArray *)arg1 forItemAtURL:(NSURL *)arg2 reply:(void (^)(NSMutableDictionary *, NSError *))arg3;
- (void)getNotificationInfoAtURL:(NSURL *)arg1 reply:(void (^)(BRQueryItem *, NSError *))arg2;
- (void)thumbnailChangedForItemAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)evictItemAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)startDownloadItemsAtURLs:(NSArray *)arg1 options:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)registerInitialSyncBarrierForID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)deleteAllContentsOfContainerID:(NSString *)arg1 onClient:(_Bool)arg2 onServer:(_Bool)arg3 reply:(void (^)(NSError *))arg4;
- (oneway void)updateContainerMetadataForID:(NSString *)arg1;
- (void)getContainerURLForID:(NSString *)arg1 forPid:(int)arg2 reply:(void (^)(NSURL *, NSData *, NSString *, NSError *))arg3;
- (void)getContainerURLForID:(NSString *)arg1 reply:(void (^)(NSURL *, NSData *, NSString *, NSError *))arg2;
- (void)presyncContainerWithID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)checkinAskClientIfUsingUbiquity:(_Bool)arg1;
- (void)getContainerForURLFast:(NSURL *)arg1 reply:(void (^)(BRContainer *, NSError *))arg2;
- (void)getContainerForURL:(NSURL *)arg1 reply:(void (^)(BRContainer *, NSError *))arg2;
- (void)getContainersByID:(void (^)(NSDictionary *, NSError *))arg1;
- (void)createContainerWithID:(NSString *)arg1 ownerName:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)waitForFileSystemChangeProcessingWithReply:(void (^)(void))arg1;
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(void (^)(long long))arg3;
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(void (^)(long long))arg3;
- (void)computePurgableSpaceWithUrgency:(int)arg1 reply:(void (^)(long long))arg2;
- (void)iWorkForceSyncContainerID:(NSString *)arg1 ownedByMe:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)forceSyncContainerID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)log:(const char *)arg1 function:(const char *)arg2 source:(const char *)arg3 line:(int)arg4 message:(NSString *)arg5;
- (void)gatherInformationForPath:(NSString *)arg1 reply:(void (^)(BRCURLToItemLookup *, NSError *))arg2;
- (void)printStatus:(NSFileHandle *)arg1 containerID:(NSString *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)performSelfCheck:(NSFileHandle *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)dumpDatabaseTo:(NSFileHandle *)arg1 containerID:(NSString *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)resetBudgets:(NSSet *)arg1 reply:(void (^)(NSError *))arg2;
- (void)setupInstanceWithDict:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
@end

