//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLRelationshipOrderKeyManager : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    PLPhotoLibrary *_locationsPhotoLibrary;
    NSMutableDictionary *_locationsCache;
    NSMutableDictionary *_enqueuedFolderAlbumsOrderValueUpdates;
    NSMutableDictionary *_enqueuedAlbumAssetsOrderValueUpdates;
    NSObject<OS_dispatch_queue> *_locationsCacheQueue;
    _Bool _hasStashedLocationValues;
    _Bool _conflictDetected;
}

+ (id)sharedManager;
@property(readonly, nonatomic) _Bool conflictDetected; // @synthesize conflictDetected=_conflictDetected;
@property(readonly, nonatomic) _Bool hasStashedLocationValues; // @synthesize hasStashedLocationValues=_hasStashedLocationValues;
- (id)parentFolderOrderValueForAlbum:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)albumsAndOrderValuesForAsset:(id)arg1 inManagedObjectContext:(id)arg2;
- (_Bool)writeStashedLocationValuesInLibrary:(id)arg1 error:(id *)arg2;
- (void)_getAndResetEnqueuedOrderValueUpdatesForFolders:(id *)arg1 albums:(id *)arg2 conflictDetected:(_Bool *)arg3;
- (void)setConflictDetected:(_Bool)arg1;
- (void)stashAlbumAssetsLocationValue:(long long)arg1 forAssetWithID:(id)arg2 inAlbumWithID:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)stashFolderAlbumsLocationValue:(long long)arg1 forAlbumWithID:(id)arg2 inFolderWithID:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)_inq_stashLocationValue:(long long)arg1 forOrderedObjectWithID:(id)arg2 inSourceObjectID:(id)arg3 relationship:(id)arg4 atIndex:(unsigned long long)arg5 usingStashDictionary:(id)arg6;
- (id)objectIDsAndOrderValuesForRelationship:(id)arg1 onObjectWithID:(id)arg2;
- (unsigned long long)findIndexForAssetWithID:(id)arg1 newOrderValue:(long long)arg2 inAlbumWithID:(id)arg3 hasOrderValueConflictWithAssetID:(id *)arg4;
- (unsigned long long)findIndexForAlbumWithID:(id)arg1 newOrderValue:(long long)arg2 inFolderWithID:(id)arg3 hasOrderValueConflictWithAlbumID:(id *)arg4;
- (void)getConflictResolutionOrderValuesForRelationship:(id)arg1 onObjectWithID:(id)arg2 atIndex:(unsigned long long)arg3 intoLower:(long long *)arg4 higher:(long long *)arg5;
- (id)_inq_orderingStateForRelationship:(id)arg1 onObjectWithID:(id)arg2;
- (id)locationsManagedObjectContext;
- (void)updateAlbumAssetsUsingTransientOrdersByAlbumOID:(id)arg1 inLibrary:(id)arg2;
- (void)_updateOrderOfChildrenInParent:(id)arg1 usingTransientOrders:(id)arg2;
- (long long)compareOrderKeyObject:(id)arg1 withObject:(id)arg2;
- (id)_enqueuedAlbumAssetsOrderValueUpdates;
- (id)_enqueuedFolderAlbumsOrderValueUpdates;
- (id)_locationsCache;
- (id)locationsPhotoLibrary;
- (id)photoLibrary;
- (void)dealloc;
- (id)init;
- (void)updateKeyAssetsForAlbums:(id)arg1 inLibrary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)migration_updateLegacyChildCollectionOrderKeysInFolder:(id)arg1;
- (void)migration_updateLegacyOrderValuesForAssetsInAlbums:(id)arg1 managedObjectContext:(id)arg2;
- (void)_migration_updateOrderValuesForAssetsInAlbum:(id)arg1 managedObjectContext:(id)arg2;
- (void)_migration_updateOrderKeysForAssetsInParentAlbum:(id)arg1 childToOrderKeyMap:(id)arg2;
- (id)migration_sortedOrderKeysForAssetsInAlbum:(id)arg1 usingMap:(id)arg2;
- (void)migration_fixupOrderKeys:(id)arg1 usingOrderValuePropertyKey:(id)arg2 enforceSingletonAlbumReservedKeySpace:(_Bool)arg3;
- (void)migration_ensureValidOrderKey:(id)arg1 usingOrderValuePropertyKey:(id)arg2;

@end

