//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSyncAnchorEntity : HDHealthEntity
{
}

+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)_predicateForSyncEntityClass:(Class)arg1 syncStore:(id)arg2;
+ (id)_predicateForSyncStore:(id)arg1;
+ (id)_predicateForSyncEntityClass:(Class)arg1;
+ (_Bool)_setSyncAnchor:(long long)arg1 forProperties:(id)arg2 entityClass:(Class)arg3 store:(id)arg4 enforceOrder:(_Bool)arg5 database:(id)arg6 error:(id *)arg7;
+ (long long)_syncAnchorForProperty:(id)arg1 entityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (_Bool)_setSyncAnchor:(long long)arg1 forProperties:(id)arg2 entityClass:(Class)arg3 store:(id)arg4 enforceOrder:(_Bool)arg5 healthDatabase:(id)arg6 error:(id *)arg7;
+ (_Bool)resetSyncStore:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (_Bool)getReceivedAnchorsWithSet:(id)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (long long)receivedAnchorForEntityClass:(Class)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (_Bool)setReceivedAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (_Bool)setAcknowledgedAnchorsWithMap:(id)arg1 store:(id)arg2 resetNext:(_Bool)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (_Bool)resetNextSyncAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (_Bool)setNextSyncAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (long long)nextSyncAnchorForEntityClass:(Class)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;

@end

