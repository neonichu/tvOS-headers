//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SSSQLiteDatabase;

@interface SSVPlayActivityTable : NSObject
{
    SSSQLiteDatabase *_database;
}

+ (_Bool)_setupDatabase:(id)arg1;
+ (id)_propertiesDatabaseTableName;
+ (id)_eventsDatabaseTableName;
+ (id)databasePath;
- (void).cxx_destruct;
- (id)_valueForDatabasePropertyKey:(id)arg1;
- (_Bool)_setValue:(id)arg1 forDatabasePropertyKey:(id)arg2;
- (id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(CDUnknownBlockType)arg1 count:(unsigned long long)arg2;
- (void)_getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 shouldFilterStoreAccountID:(_Bool)arg6 additionalRevisionsIndexSet:(id)arg7 error:(id *)arg8;
- (id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1;
- (id)revisionsIndexSetForPlayActivityEvents:(id)arg1;
- (_Bool)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 returningError:(id *)arg2;
- (void)getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 additionalRevisionsIndexSet:(id)arg6 error:(id *)arg7;
- (void)getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 additionalRevisionsIndexSet:(id)arg5 error:(id *)arg6;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)insertPlayActivityEvent:(id)arg1 withRevision:(unsigned long long)arg2 returningError:(id *)arg3;
@property(readonly, copy, nonatomic) NSString *eventsRevisionVersionToken;
@property(nonatomic) unsigned long long currentEventsRevision;
- (_Bool)_removeDatabaseReturningError:(id *)arg1;
- (id)init;

@end

