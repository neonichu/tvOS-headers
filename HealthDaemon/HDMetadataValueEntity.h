//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataValueEntity : HDHealthEntity
{
}

+ (id)_predicateForEntityWithObjectID:(id)arg1;
+ (id)_predicateForEntityWithKeyID:(id)arg1;
+ (_Bool)_deleteMetadataValuesWithObjectID:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)deleteStatementForObjectMetadataWithDatabase:(id)arg1;
+ (id)metadataValueStatementWithDatabase:(id)arg1;
+ (id)insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (long long)protectionClass;
+ (id)createNonUniqueIndicesForColumns;
+ (id)columnsDefinition;
+ (id)databaseTable;
- (id)_clientValueForProperty:(id)arg1 value:(id)arg2;
- (id)valueWithDatabase:(id)arg1;

@end

