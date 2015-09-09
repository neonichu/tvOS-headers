//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSCalendar, NSMutableArray, NSMutableDictionary, NSSet, NSString, PLFetchingAlbum, PLGenericAlbum, PLInFlightAssetsAlbum, PLManagedAlbum, PLManagedAlbumList, PLManagedFolder, PLManagedObjectContext, PLThumbnailManager;
@protocol PLAlbumProtocol;

@interface PLPhotoLibrary : NSObject
{
    _Bool _listeningForITunesSyncing;
    _Bool _isTransient;
    unsigned long long _pendingTransactions;
    struct __CFDictionary *_allPhotos;
    int _databaseMigrationKind;
    NSMutableArray *_transactionCompletionHandlers;
    PLThumbnailManager *_thumbnailManager;
    PLGenericAlbum *_allImportedPhotosAlbum;
    PLGenericAlbum *_lastImportedPhotosAlbum;
    NSCalendar *_exifConversionCalendar;
    NSMutableDictionary *_photoStreamAlbumsByStreamID;
    NSMutableArray *_photoStreamAlbums;
    NSSet *_imageFileExtensions;
    NSSet *_rawImageFileExtensions;
    NSSet *_audioFileExtensions;
    NSSet *_extraVideoExtensions;
    unsigned long long _lastFetchedGPSCount;
    unsigned long long _insertedCountSinceLastFetchedGPSCount;
    unsigned long long _deletedCountSinceLastFetchedGPSCount;
    unsigned long long _newlyCompleteWithGPS;
    PLManagedAlbum *_cameraRollAlbum;
    PLFetchingAlbum *_userLibraryAlbum;
    PLFetchingAlbum *_cameraSessionAlbum;
    PLInFlightAssetsAlbum *_inFlightAssetsAlbum;
    PLManagedAlbumList *_rootAlbumList;
    PLManagedFolder *_rootFolder;
    NSString *_cachedName;
    PLManagedObjectContext *managedObjectContext;
}

+ (unsigned long long)CloudPhotoLibrarySize;
+ (_Bool)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+ (void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+ (unsigned long long)sharedStreamsSize;
+ (void)updateAlbumKeyAssetsInContext:(id)arg1 withPredicate:(id)arg2;
+ (void)refreshCachedCountsOnAssetsContainerClass:(Class)arg1 inContext:(id)arg2 withPredicate:(id)arg3;
+ (void)delayedRefreshCachedCountsInAlbumIDs:(id)arg1;
+ (_Bool)isAlbumSynced:(id)arg1;
+ (id)syncedAlbumSubtitleStringFormat;
+ (id)syncInfoPath;
+ (_Bool)canSaveVideoToCameraRoll:(id)arg1;
+ (void)resetSyncedAssetsDCIMDirectory;
+ (void)initializeGraphicsServices;
+ (void)setSqliteErrorAndExitIfNecessary;
+ (_Bool)createSqliteErrorIndicatorFile;
+ (_Bool)processWithID:(int)arg1 canWriteSandboxForPath:(id)arg2;
+ (_Bool)processCanWriteSandboxForPath:(id)arg1;
+ (_Bool)processWithID:(int)arg1 canReadSandboxForPath:(id)arg2;
+ (_Bool)processCanReadSandboxForPath:(id)arg1;
+ (id)persistedAlbumDataDirectoryURL;
+ (id)iTunesSyncedFaceDataDirectory;
+ (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
+ (id)iTunesSyncedAssetSmallThumbnailsDirectory;
+ (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
+ (id)iTunesSyncedAssetsDirectory;
+ (id)simpleDCIMDirectory;
+ (id)dcimDirectory;
+ (id)cplAssetsDirectoryURL;
+ (id)dcimDirectoryURL;
+ (id)iTunesPhotosDirectory;
+ (id)photoDataCachesDirectory;
+ (id)photoDataCPLResourceDestinationDirectoryWithIdentifier:(id)arg1;
+ (id)photoDataCPLLibraryIdentifier;
+ (id)photoDataCPLDerivativeDirectory;
+ (id)photoDataCPLDirectory;
+ (id)photoDataMiscDirectory;
+ (id)videosPath;
+ (id)photoOutboundSharingTmpDirectoryURL;
+ (id)photoMetadataDirectoryURL;
+ (id)photoMutationsDirectory;
+ (id)photoDataDirectory;
+ (id)photoDataDirectoryURL;
+ (id)mediaFilesDirectoryURL;
+ (_Bool)isDataProtectionComplete;
+ (void)setDataProtectionComplete:(_Bool)arg1;
+ (_Bool)isStreamsLibraryUpdatingExpired;
+ (void)setStreamsLibraryUpdatingExpired:(_Bool)arg1;
+ (_Bool)libraryAvailableIndicatorState;
+ (void)setLibraryAvailableIndicatorState:(_Bool)arg1;
+ (_Bool)isDupeAnalysisNeeded;
+ (void)setDupeAnalysisNeeded:(_Bool)arg1;
+ (_Bool)isDisableICloudPhotos;
+ (_Bool)isEnableICloudPhotos;
+ (_Bool)isForceSoftResetSync;
+ (_Bool)isICloudPhotosPaused;
+ (id)pauseTime;
+ (void)setPauseMarker:(_Bool)arg1;
+ (void)clearICloudPhotosMarker;
+ (void)setCameraRollCountedInQuota:(_Bool)arg1;
+ (void)setICloudPhotosEnabled:(_Bool)arg1;
+ (void)setEnableICloudPhotos:(_Bool)arg1;
+ (void)setDisableICloudPhotos:(_Bool)arg1;
+ (void)forceSoftResetSync;
+ (_Bool)isMomentAnalysisNeeded;
+ (void)setMomentAnalysisNeeded:(_Bool)arg1;
+ (id)fileReservationForFileAtPath:(id)arg1 exclusive:(_Bool)arg2;
+ (void)setTakingPhotoIsBusy:(_Bool)arg1;
+ (void)setVideoCaptureIsBusy:(_Bool)arg1;
+ (void)setImageWriterIsBusy:(_Bool)arg1;
+ (void)setMigratorIsBusy:(_Bool)arg1;
+ (void)repairSingletonObjects;
+ (void)postGlobalPhotoLibraryAvailableNotification;
+ (_Bool)isRunningInStoreDemoMode;
+ (id)pathToAssetsToAlbumsMapping;
+ (_Bool)photoLibraryIsObtainable;
+ (id)crashRecoveryIndicatorFilePaths:(_Bool)arg1;
+ (id)streamsLibraryUpdatingExpiredIndicatorFilePath;
+ (id)libraryAvailableIndicatorFilePath;
+ (id)_dataProtectionIndicatorFilePath;
+ (id)migrationIndicatorFilePath;
+ (id)sqliteErrorIndicatorFilePath;
+ (id)imageWriterIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;
+ (id)takingPhotoIndicatorFilePath;
+ (id)pauseICloudPhotosFilePath;
+ (id)enableICloudPhotosFilePath;
+ (id)disableICloudPhotosFilePath;
+ (id)forceSoftResetSyncPath;
+ (id)momentAnalysisNeededFilePath;
+ (id)dupeAnalysisNeededFilePath;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 inLibrary:(id)arg2;
+ (void)_inq_createPhotoStreamAlbumStreamID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetsDataDirectory;
+ (id)lightweightReimportPhotoCloudSharingAssetFileNameWithCloudAssetGUID:(id)arg1 type:(id)arg2;
+ (id)lightweightReimportPhotoCloudSharingAssetDirectoryForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2;
+ (id)lightweightReimportPhotoCloudSharingDataDirectory;
+ (id)photoCloudSharingCacheDataDirectory;
+ (id)photoCloudSharingMetadataDirectory;
+ (id)photoCloudSharingDataDirectory;
+ (id)photoStreamsDataDirectory;
+ (void)setCloudAlbumSharingEnabled:(_Bool)arg1;
+ (void)setPhotoStreamEnabled:(_Bool)arg1;
+ (struct NSObject *)savedPhotosAlbum;
+ (void)_doFilesystemImportIfNeededWithMOC:(id)arg1;
+ (_Bool)isSafeToRecoverAfterCrash;
+ (id)queueStatusDescription;
+ (id)_statusDescriptionForQueue:(id)arg1;
+ (void)_enqueueOperationWithName:(id)arg1 priority:(long long)arg2 block:(CDUnknownBlockType)arg3;
+ (id)_operationQueue;
+ (_Bool)_assetsdQueueingMode;
+ (_Bool)areOpportunisticTasksDisabled;
+ (void)disableOpportunisticTasks:(_Bool)arg1;
+ (id)opportunisticTaskIsolationQueue;
+ (void)recoverFromCrashIfNeeded;
+ (void)_enqeueRecoveryJob:(id)arg1;
+ (void)handlePossibleCoreDataError:(id)arg1;
+ (_Bool)isApplicationWildcat;
+ (void)setApplicationIsWildcat:(_Bool)arg1;
+ (id)sharedPhotoLibrary;
@property(retain, nonatomic) PLManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext;
- (void)deleteExpiredTrashBinObjects;
- (_Bool)_checkMomentAnalysisCompletion;
- (_Bool)hasCompletedMomentAnalysis;
- (id)incompleteRestoreProcesses;
- (_Bool)isReadyForCloudPhotoLibrary;
- (_Bool)hasCompletedRestorePostProcessing;
- (_Bool)_hasPendingAssetsIgnoreiTunes:(_Bool)arg1;
- (id)syncProgressAlbumsIgnoreiTunes:(_Bool)arg1;
- (id)librarySizes;
- (_Bool)getPhotoCount:(unsigned long long *)arg1 videoCount:(unsigned long long *)arg2;
- (_Bool)getPhotoCount:(unsigned long long *)arg1 videoCount:(unsigned long long *)arg2 excludeTrashed:(_Bool)arg3 excludeInvisible:(_Bool)arg4 excludeCloudShared:(_Bool)arg5;
- (id)albumListForContentMode:(int)arg1;
- (id)albumsForContentMode:(int)arg1;
- (void)cleanupFilesAfteriTunesSyncBeforeDate:(id)arg1;
- (_Bool)isPhotoInSavedPhotosAlbum:(id)arg1;
- (void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2;
- (_Bool)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3;
- (int)priorityForFileExtension:(id)arg1;
- (_Bool)isAudioFileExtension:(id)arg1;
- (_Bool)isVideoFileExtension:(id)arg1;
- (_Bool)isNonRawImageFileExtension:(id)arg1;
- (_Bool)isRawImageFileExtension:(id)arg1;
- (_Bool)isImageFileExtension:(id)arg1;
- (void)_loadFileExtensionInformation;
- (id)masterFilenameFromSidecarFileInfo:(id)arg1;
- (id)masterURLFromSidecarURLs:(id)arg1;
- (void)_processPhotoIrisSidecarIfNecessary:(id)arg1 forAsset:(id)arg2;
- (void)addSidecarFileInfo:(id)arg1 toAsset:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject *)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(_Bool)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 thumbnailsData:(struct __CFDictionary *)arg13 withUUID:(id)arg14 ignoreEmbeddedMetadata:(_Bool)arg15 isPlaceholder:(_Bool)arg16;
- (void)modifyDCIMEntryForPhoto:(id)arg1;
- (id)newImageForPhoto:(id)arg1 format:(int)arg2;
- (id)newImageForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(_Bool)arg3 outImageProperties:(const struct __CFDictionary **)arg4 outDeliveredPlaceholder:(_Bool *)arg5;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (id)imageForFormat:(int)arg1 forAsset:(id)arg2;
- (struct NSObject *)filesystemImportProgressAlbum;
- (struct NSObject *)otaRestoreProgressAlbum;
- (struct NSObject *)syncProgressAlbum;
- (struct NSObject *)iPadAllPhotosAlbumIfExists;
- (struct NSObject *)iPadAllPhotosAlbum;
- (struct NSObject *)allPhotosAlbumIfExists;
- (struct NSObject *)allPhotosAlbum;
- (unsigned long long)editableAlbumCount;
- (id)syncedAlbums;
- (void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3;
- (void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3;
- (_Bool)hasAtLeastOnePhotoWithGPS;
- (void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1;
- (id)lastImportedPhotosAlbumCreateIfNeeded:(_Bool)arg1;
- (id)lastImportedPhotosAlbum;
- (id)allImportedPhotosAlbumCreateIfNeeded:(_Bool)arg1;
- (id)allImportedPhotosAlbum;
- (void)recreateAlbumsFromMetadata;
- (_Bool)needsMigration;
- (id)managedObjectContextStoreUUID;
- (id)managedObjectWithObjectID:(id)arg1;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (id)globalValueForKey:(id)arg1;
- (unsigned long long)concurrencyType;
- (_Bool)isTransient;
- (void)loadDatabase:(const char *)arg1;
- (void)_linkAsideAlbumMetadataForOTARestore;
- (void)cleanupForStoreDemoMode;
- (void)cleanupModelForDataMigrationPurgeMissingSharedAndSynced;
- (void)prepareDatabaseForOTAAssetsPhase;
- (id)_allAssetsForDeletion:(id)arg1;
- (id)_fetchCompleteAssetIDsWithSavedAssetType:(short)arg1 context:(id)arg2;
- (void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2 withReason:(id)arg3;
- (void)_safeSave:(id)arg1;
- (void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1;
- (void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1;
- (_Bool)_hasAtLeastOneItem:(_Bool)arg1;
- (void)cleanupAfterImportAllDCIMAssets;
- (void)_deleteObsoleteMetadataFiles;
- (_Bool)deleteAllDiagnosticFiles:(id *)arg1;
- (id)_init;
- (struct NSObject *)albumFromGroupURL:(id)arg1;
- (id)photoFromAssetURL:(id)arg1;
- (id)assetURLForManagedPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (void)setLastImportSessionUUID:(id)arg1;
- (id)lastImportSessionUUID;
- (id)duplicatePhotoStreamPhotosForPhotos:(id)arg1;
- (void)removeFromKnownPhotoStreamAlbums:(id)arg1;
- (void)addToKnownPhotoStreamAlbums:(id)arg1;
- (struct NSObject *)allPhotoStreamPhotosAlbum;
- (void)userExpungeAssets:(id)arg1;
- (void)userUntrashAssets:(id)arg1;
- (void)userTrashAssets:(id)arg1;
- (void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2;
- (void)_filterAssets:(id)arg1 toTrashableAssets:(id *)arg2 deletableAssets:(id *)arg3 otherAssets:(id *)arg4;
- (void)_userDeleteAssets:(id)arg1 withReason:(id)arg2;
- (id)assetWithUUID:(id)arg1 inContainer:(id)arg2;
- (id)assetWithUUID:(id)arg1;
- (id)existingObjectWithID:(id)arg1 error:(id *)arg2;
- (id)objectWithObjectID:(id)arg1;
- (unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long *)arg2;
- (struct NSObject *)eventAlbumContainingPhoto:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *photoStreamAlbumsForPreferences;
@property(readonly, copy, nonatomic) NSObject<PLAlbumProtocol> *favoritesAlbum;
@property(readonly, copy, nonatomic) NSArray *photoStreamAlbums;
- (id)albumListForAlbumOfKind:(int)arg1;
- (void)userExpungeAlbums:(id)arg1;
- (void)userUntrashAlbums:(id)arg1;
- (void)userTrashAlbums:(id)arg1;
- (void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2;
- (void)_filterAlbums:(id)arg1 toTrashableAlbums:(id *)arg2 deletableAlbums:(id *)arg3 otherAlbums:(id *)arg4;
- (void)_userDeleteAlbums:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *placeAlbums;
@property(readonly, copy, nonatomic) NSArray *faceAlbums;
@property(readonly, copy, nonatomic) NSArray *eventAlbums;
@property(readonly, copy, nonatomic) NSArray *importAlbums;
@property(readonly, copy, nonatomic) NSArray *wallpaperAlbums;
@property(readonly, copy, nonatomic) NSArray *imagePickerAlbums;
@property(readonly, copy, nonatomic) NSArray *userAlbums;
@property(readonly, copy, nonatomic) NSArray *albums;
@property(readonly, retain, nonatomic) PLManagedFolder *rootFolder;
@property(readonly, retain, nonatomic) PLManagedAlbumList *rootAlbumList;
- (struct NSObject *)albumWithUuid:(id)arg1;
- (struct NSObject *)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2;
- (void)removeInflightAssets:(id)arg1;
- (void)addInflightAsset:(id)arg1;
- (struct NSObject *)inFlightAssetsAlbumIfAvailable;
@property(readonly, retain, nonatomic) NSObject<PLAlbumProtocol> *inFlightAssetsAlbum;
@property(readonly, retain, nonatomic) NSObject<PLAlbumProtocol> *userLibraryAlbum;
@property(readonly, retain, nonatomic) NSObject<PLAlbumProtocol> *savedPhotosAlbum;
- (void)_withDispatchGroup:(id)arg1 synchronously:(_Bool)arg2 priority:(long long)arg3 name:(id)arg4 performBlock:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)withDispatchGroup:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
- (void)_withDispatchGroup:(id)arg1 synchronously:(_Bool)arg2 priority:(long long)arg3 name:(id)arg4 performTransaction:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)addCompletionHandlerToCurrentTransaction:(CDUnknownBlockType)arg1;
- (void)withDispatchGroup:(id)arg1 performTransaction:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)withDispatchGroup:(id)arg1 performTransaction:(CDUnknownBlockType)arg2;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 withPriority:(long long)arg3;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 withPriority:(long long)arg3;
- (void)performBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performTransactionAndWait:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performTransactionAndWait:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 withPriority:(long long)arg3;
- (void)performTransaction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performTransaction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 withPriority:(long long)arg3;
- (void)performTransactionAndWait:(CDUnknownBlockType)arg1;
- (void)performTransactionAndWait:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (void)performTransaction:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
- (void)deleteITunesSyncedContentWithReason:(id)arg1;
- (id)iTunesSyncedContentInfo;
- (_Bool)hasITunesSyncedContent;
- (_Bool)_hasIncompleteAsset;
- (void)deleteAllImages;
- (void)deleteFailedInMemoryCameraAsset:(id)arg1;
- (_Bool)hasAtLeastOnePhoto;
- (_Bool)hasAtLeastOneItem;
- (void)photoLibraryCorruptNotification;
- (void)copyAssetToCameraRoll:(id)arg1;
- (void)clientApplicationWillEnterForeground;
- (void)flushAlbums;
- (void)flushPhotoStreamAlbums;
- (void)flushDCIMAlbums;
- (void)_releaseThumbnailManager;
- (id)existingThumbnailManager;
@property(readonly, retain, nonatomic) PLThumbnailManager *thumbnailManager;
- (id)name;
- (void)dealloc;
- (id)initWithTransientContext:(_Bool)arg1 name:(const char *)arg2;
- (id)initWithName:(const char *)arg1;
- (id)init;
- (void)testForRecoveryInBackground;

@end

