//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/SSDownloadManagerObserver-Protocol.h>
#import <MediaPlayer/SSPurchaseManagerDelegate-Protocol.h>
#import <MediaPlayer/UIAlertViewDelegate-Protocol.h>

@class NSArray, NSHashTable, NSMapTable, NSMutableArray, NSString, SSDownloadManager, SSPurchaseManager, UIAlertView;
@protocol OS_dispatch_queue;

@interface MPStoreDownloadManager : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, UIAlertViewDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_blockObservers;
    UIAlertView *_cellularDownloadAlertView;
    NSMutableArray *_cellularDownloadRequestCompletionHandlers;
    SSDownloadManager *_downloadManager;
    NSMutableArray *_downloads;
    NSMapTable *_downloadIdentifiersToDownloads;
    NSMapTable *_downloadsToObservers;
    NSMapTable *_libraryIdentifiersToDownloads;
    NSHashTable *_observersForAllDownloads;
    SSPurchaseManager *_purchaseManager;
    NSMapTable *_storeIdentifiersToDownloads;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_updateMediaItemPropertiesForFinishedStoreDownload:(id)arg1 SSDownload:(id)arg2;
- (void)_updateDownloadsWithAdditions:(id)arg1 removals:(id)arg2;
- (void)_unregisterBlockObserver:(id)arg1;
- (void)_sendDownloadsDidProgressToObserversForDownloads:(id)arg1;
- (void)_sendDownloadsDidFinishToObserversForDownloads:(id)arg1 notifyDownloadManager:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendDownloadsDidFinishPurchasesToObserversForDownloads:(id)arg1;
- (void)_sendDownloadsDidChangeToObserversWithAddedDownloads:(id)arg1 removedDownloads:(id)arg2;
- (void)_registerBlockObserver:(id)arg1;
- (void)_onQueue_removeDownloadFromMapTables:(id)arg1;
- (_Bool)_onQueue_hasExistingDownloadForStoreDownload:(id)arg1;
- (id)_onQueue_findStoreDownloadWithSSDownload:(id)arg1 SSPurchase:(id)arg2;
- (void)_onQueue_addDownloadToMapTables:(id)arg1;
- (id)_observersForDownload:(id)arg1;
- (id)_observersForAllDownloads;
- (id)_existingDownloadForSSDownload:(id)arg1;
- (void)_dismissAndCleanupCellularDownloadAlertViewWithResult:(long long)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_musicCellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (void)_matchCellularRestrictedDidChangeNotification:(id)arg1;
- (void)_addPurchaseFinishedHandler:(CDUnknownBlockType)arg1 forDownloads:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (void)requestPermissionToDownloadWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1 forDownloads:(id)arg2;
- (void)prioritizeDownloads:(id)arg1;
- (id)downloadForStoreID:(long long)arg1;
- (id)downloadForMediaItemPersistentID:(unsigned long long)arg1;
- (id)downloadForMediaItem:(id)arg1;
- (id)downloadForDownloadPersistentIdentifier:(long long)arg1;
- (void)resumeDownloads:(id)arg1;
- (void)pauseDownloads:(id)arg1;
- (void)cancelDownloads:(id)arg1;
- (void)addObserver:(id)arg1 forDownloads:(id)arg2;
- (void)addFinishHandler:(CDUnknownBlockType)arg1 forDownloads:(id)arg2;
- (id)addDownloads:(id)arg1;
@property(readonly, nonatomic, getter=isUsingNetwork) _Bool usingNetwork;
@property(readonly, nonatomic) NSArray *downloads;
- (void)dealloc;
- (id)_init;
- (id)init;
- (id)downloadForMediaPlaybackItemMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

