//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDDataEntity.h>

@interface HDSampleEntity : HDDataEntity
{
}

+ (id)codableRepresentationEncoderForHealthDaemon:(id)arg1 database:(id)arg2;
+ (id)_predicateWithSampleType:(id)arg1 sourceIdentifier:(id)arg2 predicate:(id)arg3;
+ (id)_predicateWithSampleType:(id)arg1 predicate:(id)arg2;
+ (void)_columnNamesAndSortOrderingsForDataType:(id)arg1 sortDescriptors:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (long long)preferredEntityType;
+ (id)anySampleOfType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id *)arg4;
+ (id)samplesTypesForSamplesMatchingPredicate:(id)arg1 healthDaemon:(id)arg2 error:(id *)arg3;
+ (id)sampleCountAndDatesOfType:(id)arg1 healthDaemon:(id)arg2 matchingPredicate:(id)arg3 cancellationBlock:(CDUnknownBlockType)arg4;
+ (long long)countOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingPredicate:(id)arg3 withError:(id *)arg4;
+ (long long)countOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingFilter:(id)arg3 withError:(id *)arg4;
+ (id)sourceIDsForSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id *)arg4;
+ (void)enumerateObjectsWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5 limit:(unsigned long long)arg6 anchor:(id)arg7 includeDeletedObjects:(_Bool)arg8 deletedObjectsAnchor:(id)arg9 handler:(CDUnknownBlockType)arg10;
+ (void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 filter:(id)arg3 predicate:(id)arg4 sourceIdentifier:(id)arg5 authorizationFilter:(CDUnknownBlockType)arg6 sortDescriptors:(id)arg7 limit:(unsigned long long)arg8 anchor:(id *)arg9 handler:(CDUnknownBlockType)arg10;
+ (void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5 orderBy:(id)arg6 directions:(id)arg7 limit:(unsigned long long)arg8 handler:(CDUnknownBlockType)arg9;
+ (void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 filter:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5 sortDescriptors:(id)arg6 limit:(unsigned long long)arg7 handler:(CDUnknownBlockType)arg8;
+ (void)enumerateUUIDsOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingFilter:(id)arg3 limit:(unsigned long long)arg4 withHandler:(CDUnknownBlockType)arg5;
+ (void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5 limit:(unsigned long long)arg6 anchor:(id *)arg7 withHandler:(CDUnknownBlockType)arg8;
+ (id)samplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 limit:(unsigned long long)arg4 anchor:(id *)arg5 error:(id *)arg6;
+ (void)_deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 generateDeletedObjects:(_Bool)arg3 database:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 generateDeletedObjects:(_Bool)arg3 healthDaemon:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)deleteSamplesWithTypes:(id)arg1 sourceIdentifier:(id)arg2 healthDaemon:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)mostRecentSampleWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id *)arg4;
+ (id)columnNameForSortIdentifier:(id)arg1;
+ (_Bool)requiresSampleTypePredicate;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (id)_propertySettersForDataObject;
+ (Class)_deletedEntityClass;
+ (Class)_associatedDataObjectClass;
+ (id)columnsDefinition;
+ (id)_databaseTable;
+ (id)predicateForNanoSyncRestoreWithDeviceSourceIdentifier:(id)arg1 sampleTypesByAgeInDays:(id)arg2 nowDate:(id)arg3 healthDaemon:(id)arg4 error:(id *)arg5;
+ (long long)finalAnchorForNanoSyncRestoreWithStore:(id)arg1 sampleTypesByAgeInDays:(id)arg2 nowDate:(id)arg3 healthDaemon:(id)arg4 error:(id *)arg5;
+ (id)objectsForNanoSyncRestoreWithStore:(id)arg1 sampleTypesByAgeInDays:(id)arg2 nowDate:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange)arg4 lastSyncAnchor:(long long *)arg5 healthDaemon:(id)arg6 error:(id *)arg7;
- (id)_sampleTypeInDatabase:(id)arg1;

@end

