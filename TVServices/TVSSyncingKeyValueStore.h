//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumberFormatter, NSString, TVSBackgroundTask, TVSStateMachine;
@protocol OS_dispatch_queue;

@interface TVSSyncingKeyValueStore : NSObject
{
    NSString *_domain;
    NSString *_databaseDirectory;
    int _conflictResolversLock;
    int _ivarLock;
    NSArray *_conflictResolvers;
    int _conflictDetectionType;
    NSMutableArray *_pendingCompletionBlocks;
    TVSBackgroundTask *_periodicCleanupTask;
    id _activeAccountOrNull;
    NSObject<OS_dispatch_queue> *_dbQueue;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_dbStmtValueForKey;
    struct sqlite3_stmt *_dbStmtSelectDirty;
    struct sqlite3_stmt *_dbStmtSelectAllKeys;
    struct sqlite3_stmt *_dbStmtInsertReplaceStmt;
    struct sqlite3_stmt *_dbStringForKeyStmt;
    struct sqlite3_stmt *_dbSetStringForKeyStmt;
    NSNumberFormatter *_dbNumberFormatter;
    TVSStateMachine *_syncEngineStateMachine;
    double _lastSyncTimestamp;
}

+ (id)_dbNumberFromIntegerForStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;
+ (id)_dbDataFromBlobForStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;
+ (id)_dbStringFromTextForStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;
- (void).cxx_destruct;
- (void)_dbClearAllDirtyFlags;
- (void)_dbSetDataValues:(id)arg1;
- (id)_dbNumberForKey:(id)arg1;
- (void)_dbSetNumber:(id)arg1 forKey:(id)arg2;
- (id)_dbNumberFormatter;
- (void)_dbSetString:(id)arg1 forKey:(id)arg2;
- (id)_dbStringForKey:(id)arg1;
- (void)_dbTransaction:(CDUnknownBlockType)arg1;
- (id)_dbDirtyValues;
- (id)_dbAllKeys;
- (id)_dbDataValuesForKeys:(id)arg1;
- (_Bool)_deleteKeyValueStoreCache;
- (void)_dropAllTables;
- (void)_deleteCleanRowsNotUpdatedSince:(id)arg1;
- (_Bool)_initializeKeyValueStoreCache;
- (void)_syncEngineDidAccessKeyValueStore;
- (void)_syncEngineSetNeedsSync;
- (_Bool)_syncEngineInitialize;
- (void)_stateChangedNotification:(id)arg1;
- (id)_newSyncEngineStateMachine;
- (void)_synchronize;
- (void)_syncWithServer:(id)arg1 version:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_dirtySyncItems;
- (void)updateBoundActiveStoreAccount;
- (void)tvs_bindActiveStoreAccountBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;
- (id)ActiveStoreAccountBinding;
- (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)setObjectsInDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)allKeys;
- (id)objectsForKeys:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)_objectsForKeys:(id)arg1;
- (void)_willAccessKeyValueStore;
- (id)_databasePath;
- (void)_addConflictResolver:(CDUnknownBlockType)arg1 forKeyPrefix:(id)arg2;
- (CDUnknownBlockType)_conflictResolverForKey:(id)arg1;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 cacheDirectory:(id)arg2 conflictResolvers:(id)arg3;
- (void)_resetForRetailWithCompletion:(CDUnknownBlockType)arg1;

@end

