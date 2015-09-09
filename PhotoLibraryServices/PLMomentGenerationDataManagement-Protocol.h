//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSObject, NSSet, NSString;
@protocol NSCopying, PLMomentAnalysisTransaction, PLMomentAssetData, PLMomentData, PLMomentListData;

@protocol PLMomentGenerationDataManagement <NSObject>
- (NSArray *)allAssetIDsNeedingLocationShiftWithError:(id *)arg1;
- (void)invalidateShiftedLocationForAllAssetsInMoments;
- (NSDictionary *)locationCoordinatesForAssetIDs:(NSArray *)arg1;
- (NSDictionary *)homeAddressDictionary;
- (_Bool)isNetworkReachable;
- (void)stopObservingNetworkReachabilityChanges;
- (void)beginObservingNetworkReachabilityChangesWithBlock:(void (^)(_Bool))arg1;
- (NSArray *)allAssetIDsToBeIncludedInMomentsWithError:(id *)arg1;
- (NSArray *)allAssetsToBeIncludedInMomentsWithError:(id *)arg1;
- (NSArray *)allMomentListsWithInvalidReverseLocationDataForLevel:(short)arg1;
- (NSArray *)allMomentListsForLevel:(short)arg1;
- (NSArray *)allMomentsWithInvalidReverseLocationData;
- (NSArray *)allMomentsWithError:(id *)arg1;
- (void)resetOnFailure;
- (_Bool)save:(id *)arg1;
- (_Bool)hasChanges;
- (id <PLMomentData>)insertNewMoment;
- (id <PLMomentListData>)insertNewMomentListForGranularityLevel:(short)arg1;
- (Class)momentAssetDataClass;
- (Class)momentDataClass;
- (Class)momentListDataClassForGranularityLevel:(short)arg1;
- (id <PLMomentListData>)findOrCreateYearMomentListForYear:(long long)arg1;
- (id <PLMomentListData>)yearMomentListForYear:(long long)arg1 wantsEarliest:(_Bool)arg2;
- (id <PLMomentListData>)momentListContainingDate:(NSDate *)arg1 forLevel:(short)arg2 wantsEarliest:(_Bool)arg3;
- (NSArray *)momentsBetweenDateRanges:(NSArray *)arg1;
- (NSArray *)momentsBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 sorted:(_Bool)arg3;
- (NSArray *)momentsSinceDate:(NSDate *)arg1;
- (id <PLMomentListData>)momentListWithUniqueID:(NSObject<NSCopying> *)arg1 forLevel:(short)arg2 error:(id *)arg3;
- (id <PLMomentData>)momentWithUniqueID:(NSObject<NSCopying> *)arg1 error:(id *)arg2;
- (NSArray *)assetsWithUniqueIDs:(NSArray *)arg1 error:(id *)arg2;
- (id <PLMomentAssetData>)assetWithUniqueID:(NSObject<NSCopying> *)arg1 error:(id *)arg2;
- (_Bool)saveAnalysisMetadata:(NSDictionary *)arg1;
- (NSDictionary *)analysisMetadata;
- (_Bool)saveServerVersionInfo:(NSDictionary *)arg1;
- (NSDictionary *)serverVersionInfo;
- (void)setMomentAnalysisNeeded:(_Bool)arg1;
- (_Bool)isMomentAnalysisNeeded;
- (void)enumerateAssetsWithIDs:(NSArray *)arg1 usingBlock:(void (^)(id <PLMomentAssetData>, unsigned long long, _Bool *))arg2;
- (void)performDataTransaction:(void (^)(void))arg1 synchronously:(_Bool)arg2 completionHandler:(void (^)(void))arg3;
- (void)performBlock:(void (^)(void))arg1 synchronously:(_Bool)arg2 completionHandler:(void (^)(void))arg3;
- (_Bool)isMomentsSupportedOnPlatform;

@optional
- (NSString *)replayLogPath;
- (_Bool)wantsMomentReplayLogging;
- (NSSet *)deletedObjects;
- (NSSet *)updatedObjects;
- (NSSet *)insertedObjects;
- (unsigned long long)hardGenerationBatchSizeLimit;
- (id <PLMomentAnalysisTransaction>)momentAnalysisTransactionWithName:(const char *)arg1;
- (void)analysisCompletedWithSuccess:(_Bool)arg1;
- (void)pendingChangesUpdated:(unsigned long long)arg1;
@end

