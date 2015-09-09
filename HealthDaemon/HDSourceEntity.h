//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSourceEntity : HDHealthEntity
{
}

+ (id)propertyForSyncProvenance;
+ (id)_propertySettersForSource;
+ (id)_codableSourceWithRow:(struct HDSQLiteRow *)arg1;
+ (id)_propertiesForCodableSource;
+ (id)_predicateForNotDeletedSourceWithPredicate:(id)arg1;
+ (id)_predicateForLocalDeviceSource;
+ (id)_predicateForSourceWithUUID:(id)arg1;
+ (id)_predicateForSourceWithBundleIdentifier:(id)arg1;
+ (id)_insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 options:(id)arg4 isCurrentDevice:(id)arg5 productType:(id)arg6 deleted:(_Bool)arg7 modificationDate:(id)arg8 provenance:(long long)arg9 database:(id)arg10 error:(id *)arg11;
+ (id)_insertDeletedSourceWithUUID:(id)arg1 modificationDate:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)allSourcePersistentIDsWithHealthDatabase:(id)arg1 error:(id *)arg2;
+ (id)_sourceWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_sourceWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)sourceForLocalDeviceWithDatabase:(id)arg1 error:(id *)arg2;
+ (id)sourceForLocalDeviceWithHealthDatabase:(id)arg1 error:(id *)arg2;
+ (id)sourceWithUUID:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)sourceWithUUID:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)sourceWithBundleIdentifier:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)sourceWithBundleIdentifier:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)insertCodableSource:(id)arg1 provenance:(long long)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (id)insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 options:(unsigned long long)arg4 isCurrentDevice:(_Bool)arg5 productType:(id)arg6 modificationDate:(id)arg7 provenance:(long long)arg8 healthDatabase:(id)arg9 error:(id *)arg10;
+ (long long)protectionClass;
+ (id)createNonUniqueIndicesForColumns;
+ (id)columnsDefinition;
+ (id)databaseTable;
- (_Bool)deleteSourceWithDatabase:(id)arg1 error:(id *)arg2;
- (_Bool)setBundleIdentifier:(id)arg1 UUID:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
- (_Bool)setName:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
- (id)sourceUUIDWithHealthDatabase:(id)arg1 error:(id *)arg2;
- (id)sourceBundleIdentifierInHealthDatabase:(id)arg1 error:(id *)arg2;
- (id)codableSourceInHealthDatabase:(id)arg1 error:(id *)arg2;
- (id)sourceInHealthDatabase:(id)arg1 error:(id *)arg2;

@end

