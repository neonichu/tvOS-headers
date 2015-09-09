//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLBBPendingBulletinsBatchDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLBBBulletinsManager : NSObject <PLBBPendingBulletinsBatchDelegate>
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_saveTimerSource;
    NSObject<OS_dispatch_source> *_pendingChangesTimerSource;
    NSMutableDictionary *_dirtyPlist;
    NSMutableArray *_pendingBulletins;
    NSMutableArray *_pendingBatches;
    NSMutableIndexSet *_pendingDeleteRecordIDs;
    _Bool _badgeCountIsInvalid;
    _Bool _enableTemporaryDebugMode;
    void *_addressBook;
    int _alertFiltrationEnabled;
}

+ (id)sharedManager;
- (void)_resetAlertFiltration;
- (_Bool)_alertFiltrationEnabled;
- (_Bool)_shouldAllowAlertsFromContactWithEmail:(id)arg1;
- (void *)addressBook;
- (void)_saveDirtyChanges;
- (void)_setNeedsSaving;
- (id)_currentPlistContents;
- (id)_editablePlistContents;
- (id)_plistFilePath;
- (void)discardAllBulletins;
- (void)forceWriteUnsavedChanges;
- (void)getThumbnailImageDataForBulletinWithRecordID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)calculateCurrentBadgeCountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)bulletinsBatch:(id)arg1 bulletinByMergingPersistedListWithBulletin:(id)arg2;
- (_Bool)bulletinsBatch:(id)arg1 shouldAllowAlertsFromContactWithEmail:(id)arg2;
- (void)bulletinsBatch:(id)arg1 didProcessReadyBulletins:(id)arg2 stillPending:(_Bool)arg3;
- (id)_currentPendingBatch;
- (unsigned long long)_generateUniqueRecordID;
- (void)_processPendingChanges;
- (void)_scheduleProcessPendingChanges;
- (void)_deleteBulletinsForAssetWithUUID:(id)arg1 shouldDeleteCommentsOrLikeBulletins:(_Bool)arg2 shouldDeletePhotosAddedToAlbumBulletins:(_Bool)arg3;
- (_Bool)_bulletinType:(long long)arg1 matchesCommentsOrLikeBulletins:(_Bool)arg2 andPhotosAddedToAlbumBulletins:(_Bool)arg3;
- (void)_deleteBulletinsForAlbumWithUUID:(id)arg1 bulletinTypes:(id)arg2;
- (void)_addPendingBulletins:(id)arg1;
- (void)clearAllBulletinsUpToRecordID:(unsigned long long)arg1;
- (_Bool)_invitationBulletinExistsForAlbum:(id)arg1;
- (void)noteUserDidLeavePhotosApplication;
- (void)noteUserDidDeleteSharedAssetsWithUUIDs:(id)arg1;
- (void)noteUserDidDeleteSharedAlbumWithUUID:(id)arg1;
- (void)noteUserDidReadCommentOnSharedAsset:(id)arg1;
- (void)noteUserDidNavigateAwayFromSharedAlbum:(id)arg1;
- (void)noteUserDidNavigateIntoSharedAlbum:(id)arg1;
- (void)noteUserDidViewCloudFeedContent:(long long)arg1;
- (void)noteSharedAssetCommentsUnreadStatusDidChange:(id)arg1;
- (void)noteSharedAlbumUnseenStatusDidChange:(id)arg1;
- (void)noteDidReceiveLike:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteDidReceiveComment:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteDidChangePlaceholderKindForAsset:(id)arg1 fromOldKind:(short)arg2 forSharedAlbum:(id)arg3 mstreamdInfo:(id)arg4;
- (void)noteDidReceiveAsset:(id)arg1 atIndex:(unsigned long long)arg2 forSharedAlbum:(id)arg3 mstreamdInfo:(id)arg4;
- (void)noteMultipleContributorStatusChangedForAlbum:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteInvitationRecordStatusChanged:(id)arg1 fromOldState:(long long)arg2 mstreamdInfo:(id)arg3;
- (void)noteDidDeleteSharedAssetsWithUUIDs:(id)arg1;
- (void)noteDidDeleteSharedAlbum:(id)arg1;
- (void)noteDidReceiveInvitationForSharedAlbum:(id)arg1;
@property(readonly) NSArray *currentBulletinDictionaries;
- (void)setEnableTemporaryDebugMode:(_Bool)arg1;
- (_Bool)enableTemporaryDebugMode;
- (void)dealloc;
- (id)_initSharedInstance;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

