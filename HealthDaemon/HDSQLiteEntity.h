//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSQLiteEntity-Protocol.h>

@class NSString;

@interface HDSQLiteEntity : NSObject <HDSQLiteEntity>
{
    long long _persistentID;
}

+ (id)_copyDeleteSQLWithTableName:(id)arg1 columnName:(id)arg2;
+ (_Bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPidOrNil:(id)arg3 resultCode:(int *)arg4 database:(id)arg5;
+ (_Bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPidOrNil:(id)arg3 replaceExisting:(_Bool)arg4 resultCode:(int *)arg5 database:(id)arg6;
+ (void)applyOrderedSetters:(id)arg1 toObject:(id)arg2 row:(struct HDSQLiteRow *)arg3;
+ (void)applyPropertySetters:(id)arg1 toObject:(id)arg2 withProperties:(id)arg3 row:(struct HDSQLiteRow *)arg4;
+ (id)deleteStatementWithProperty:(id)arg1 database:(id)arg2;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)foreignKeyColumnForTable:(id)arg1;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)foreignDatabaseColumnForProperty:(id)arg1;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)_generateDisambiguatedDatabaseTableName;
+ (id)allDatabaseColumnNames;
+ (id)columnsDefinition;
+ (id)disambiguatedDatabaseTable;
+ (id)tableAliases;
+ (id)databaseTable;
+ (id)databaseName;
+ (id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)databasePropertyToSetClientProperty:(id)arg1;
+ (id)databasePropertyToGetClientProperty:(id)arg1;
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1;
+ (id)entityWithPersistentID:(id)arg1;
+ (id)queryStatementWithPredicate:(id)arg1 properties:(id)arg2 database:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 orderingProperties:(id)arg4 orderingDirections:(id)arg5 groupBy:(id)arg6;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 orderingProperties:(id)arg4 orderingDirections:(id)arg5;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2;
+ (id)distinctProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)countDistinctForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)maxPersistentIDWithPredicate:(id)arg1 database:(id)arg2;
+ (id)countValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)sumValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)aggregateSingleValueForProperty:(id)arg1 function:(id)arg2 queryDescriptor:(id)arg3 database:(id)arg4;
+ (id)aggregateSingleValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4;
+ (id)aggregateValuesForProperty:(id)arg1 functions:(id)arg2 queryDescriptor:(id)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)aggregateValuesForProperty:(id)arg1 functions:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 database:(id)arg5 error:(id *)arg6;
+ (id)propertyValueForAnyInDatabase:(id)arg1 property:(id)arg2 predicate:(id)arg3 orderingProperties:(id)arg4 orderingDirections:(id)arg5;
+ (id)propertyValueForAnyInDatabase:(id)arg1 property:(id)arg2 predicate:(id)arg3;
+ (id)propertyValuesForAnyInDatabase:(id)arg1 properties:(id)arg2 predicate:(id)arg3;
+ (_Bool)deleteEntitiesInDatabase:(id)arg1 predicate:(id)arg2;
+ (_Bool)enumerateQueryResultsFromColumns:(id)arg1 properties:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 orderingProperties:(id)arg5 limit:(long long)arg6 database:(id)arg7 error:(id *)arg8 usingBlock:(CDUnknownBlockType)arg9;
+ (_Bool)enumerateQueryResultsFromColumns:(id)arg1 properties:(id)arg2 predicate:(id)arg3 database:(id)arg4 error:(id *)arg5 usingBlock:(CDUnknownBlockType)arg6;
+ (_Bool)enumerateEntitiesInDatabase:(id)arg1 predicate:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (void)enumerateEntitiesInDatabase:(id)arg1 predicate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2 error:(id *)arg3;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2;
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, copy) NSString *description;
- (_Bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2 database:(id)arg3;
- (id)_copyTableClusteredValuesWithValues:(id)arg1;
- (_Bool)getValuesForProperties:(id)arg1 withDatabase:(id)arg2 applier:(CDUnknownBlockType)arg3;
- (id)UUIDForProperty:(id)arg1 database:(id)arg2;
- (id)stringForProperty:(id)arg1 database:(id)arg2;
- (id)dateForProperty:(id)arg1 database:(id)arg2;
- (_Bool)booleanForProperty:(id)arg1 database:(id)arg2;
- (id)valueForProperty:(id)arg1 database:(id)arg2;
- (id)valueForExternalProperty:(id)arg1;
- (_Bool)setValuesWithDictionary:(id)arg1 database:(id)arg2;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2 database:(id)arg3;
- (void)setExternalValuesWithDictionary:(id)arg1;
- (_Bool)getValuesForProperties:(id)arg1 database:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)existsInDatabase:(id)arg1;
- (_Bool)deleteFromDatabase:(id)arg1 error:(id *)arg2;
- (_Bool)deleteFromDatabase:(id)arg1;
- (id)initWithPropertyValues:(id)arg1 inDatabase:(id)arg2 replaceExisting:(_Bool)arg3 error:(id *)arg4;
- (id)initWithPersistentID:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

