//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObjectContext.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, PLDelayedFiledSystemDeletions, PLDelayedSaveActions, PLMergePolicy, PLPhotoLibrary;
@protocol OS_xpc_object, PLManagedObjectContextPTPNotificationDelegate;

@interface PLManagedObjectContext : NSManagedObjectContext
{
    _Bool _hasMetadataChanges;
    _Bool _isConnectedToChangeHub;
    _Bool _mergingChanges;
    _Bool _savingDuringMerge;
    _Bool _isInitializingSingletons;
    _Bool _isLoadingPhotoLibrary;
    _Bool _isBackingALAssetsLibrary;
    _Bool _isObservingChangesForPTPNotificationDelegate;
    PLMergePolicy *_mergePolicy;
    PLDelayedFiledSystemDeletions *_delayedDeletions;
    NSMutableSet *_avalancheUUIDsForUpdate;
    NSMutableArray *_uuidForCloudDeletion;
    NSMutableArray *_albumUuidForCloudDeletion;
    NSMutableDictionary *_updatedObjectsAttributes;
    NSMutableDictionary *_updatedObjectsRelationships;
    PLPhotoLibrary *_photoLibrary;
    id <PLManagedObjectContextPTPNotificationDelegate> _ptpNotificationDelegate;
    PLDelayedSaveActions *_delayedSaveActions;
    _Bool _regenerateVideoThumbnails;
    int _changeSource;
    NSObject<OS_xpc_object> *changeHubConnection;
}

+ (_Bool)assetsLibraryLoggingEnabled;
+ (void)handleUnknownMergeEvent;
+ (_Bool)_isAssetLibraryFetchingAlbum:(id)arg1;
+ (void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)relationshipNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (unsigned long long)indexValueForRelationshipNames:(id)arg1 entity:(id)arg2;
+ (id)attributeNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (unsigned long long)indexValueForAttributeNames:(id)arg1 entity:(id)arg2;
+ (id)_propertyNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 propertyNamesByIndexByEntityNames:(id)arg3;
+ (unsigned long long)_indexValueForPropertyNames:(id)arg1 entityName:(id)arg2 indexesByPropertyNamesByEntityNames:(id)arg3;
+ (id)_indexesByRelationshipNamesByEntityNames;
+ (id)_relationshipNamesByIndexByEntityNames;
+ (id)_indexesByAttributeNamesByEntityNames;
+ (id)_attributeNamesByIndexByEntityNames;
+ (void)__prepareEntityPropertyLookups;
+ (id)allContextsNotIdenticalTo:(void *)arg1;
+ (id)sharedPersistentStoreCoordinator;
+ (id)managedObjectModel;
+ (id)managedObjectModelURL;
+ (_Bool)storeIsOldEnough;
+ (void)_getStoreURL:(id *)arg1 options:(id *)arg2 forFileURL:(id)arg3 enableNotifications:(_Bool)arg4;
+ (void)_getStoreURL:(id *)arg1 options:(id *)arg2 enableNotifications:(_Bool)arg3;
+ (void)getStoreURL:(id *)arg1;
+ (_Bool)hasConfiguredPhotoLibrary;
+ (void)configurePersistentStoreCoordinator:(id)arg1;
+ (_Bool)_rebuildAndRetryPersistentStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 forced:(_Bool)arg4;
+ (_Bool)_openAndMigrateStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 forceSourceModelVersion:(id)arg4;
+ (void)recordVersion:(int)arg1 forStore:(id)arg2 extraMetadata:(id)arg3;
+ (_Bool)hasAtLeastOneAsset;
+ (id)databasePath;
+ (_Bool)databaseIsMissing;
+ (void)moveOldStoreAside;
+ (_Bool)moveStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (_Bool)canMergeRemoteChanges;
+ (_Bool)useModelMigratorToCreateDatabase;
+ (id)contextForDatabaseCreation:(const char *)arg1;
+ (id)contextForPhotoLibrary:(id)arg1 name:(const char *)arg2;
@property(nonatomic) _Bool isBackingALAssetsLibrary; // @synthesize isBackingALAssetsLibrary=_isBackingALAssetsLibrary;
@property(nonatomic) _Bool isLoadingPhotoLibrary; // @synthesize isLoadingPhotoLibrary=_isLoadingPhotoLibrary;
@property(nonatomic) _Bool isInitializingSingletons; // @synthesize isInitializingSingletons=_isInitializingSingletons;
@property(nonatomic) _Bool regenerateVideoThumbnails; // @synthesize regenerateVideoThumbnails=_regenerateVideoThumbnails;
@property(nonatomic) int changeSource; // @synthesize changeSource=_changeSource;
@property(nonatomic) _Bool hasMetadataChanges; // @synthesize hasMetadataChanges=_hasMetadataChanges;
@property(retain, nonatomic) PLDelayedFiledSystemDeletions *delayedDeletions; // @synthesize delayedDeletions=_delayedDeletions;
@property(readonly, nonatomic) _Bool savingDuringMerge; // @synthesize savingDuringMerge=_savingDuringMerge;
@property(readonly, nonatomic) _Bool mergingChanges; // @synthesize mergingChanges=_mergingChanges;
@property(nonatomic) NSObject<OS_xpc_object> *changeHubConnection; // @synthesize changeHubConnection;
- (void)_contextObjectsDidChange:(id)arg1;
- (void)tearDownLocalChangeNotifications;
- (void)setupLocalChangeNotifications;
- (void)_informPTPDelegateAboutChangesFromRemoteContextSaveNotification:(id)arg1;
- (void)_getInsertedIDs:(id)arg1 deletedIDs:(id)arg2 changedIDs:(id)arg3 ofEntityKind:(id)arg4 fromRemoteContextDidSaveNotification:(id)arg5;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(_Bool)arg2;
- (void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(_Bool)arg2;
- (id)pl_fetchObjectsWithIDs:(id)arg1;
- (id)pl_fetchObjectsWithIDs:(id)arg1 rootEntity:(id)arg2;
- (_Bool)_tooManyAssetChangesToHandle:(unsigned long long)arg1;
- (id)getAndClearRecordedAlbumForCloudDeletion;
- (void)recordAlbumForCloudDeletion:(id)arg1;
- (id)getAndClearRecordedAssetForCloudDeletion;
- (void)recordAssetForCloudDeletion:(id)arg1;
- (id)getAndClearRecordedAvalancheUUIDsForUpdate;
- (void)recordAvalancheUUIDForUpdate:(id)arg1;
- (void)registerFilesystemDeletionInfo:(id)arg1;
- (_Bool)hasPreviouslyMergedDeleteForObject:(id)arg1;
- (void)_destroyDelayedSaveActions;
- (void)_createDelayedSaveActionsWithTransaction:(id)arg1;
@property(readonly, retain, nonatomic) PLDelayedSaveActions *delayedSaveActions;
- (void)getAndClearUpdatedObjectsAttributes:(id *)arg1 relationships:(id *)arg2;
- (void)recordManagedObjectWillSave:(id)arg1;
- (void)disconnectFromChangeHub;
- (void)connectToChangeHub;
- (_Bool)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (_Bool)save:(id *)arg1;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id *)arg2;
- (_Bool)isReadOnly;
- (void)withDispatchGroup:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (id)globalValueForKey:(id)arg1;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
@property(readonly, nonatomic) _Bool isUserInterfaceContext;
@property(nonatomic) id <PLManagedObjectContextPTPNotificationDelegate> ptpNotificationDelegate; // @synthesize ptpNotificationDelegate=_ptpNotificationDelegate;
@property(nonatomic) PLPhotoLibrary *photoLibrary;
- (void)dealloc;
- (id)initWithConcurrencyType:(unsigned long long)arg1 useSharedPersistentStoreCoordinator:(_Bool)arg2;

@end

