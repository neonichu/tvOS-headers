//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSQLiteDatabase, HDSQLiteQueryDescriptor;

@interface HDSQLiteQuery : NSObject
{
    HDSQLiteDatabase *_database;
    HDSQLiteQueryDescriptor *_descriptor;
    HDSQLiteQueryDescriptor *_queryDescriptor;
}

@property(readonly) HDSQLiteQueryDescriptor *queryDescriptor; // @synthesize queryDescriptor=_queryDescriptor;
@property(readonly) HDSQLiteDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (_Bool)enumerateProperties:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)enumeratePersistentIDsAndPropertiesAsDoubles:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)enumeratePersistentIDsAndProperties:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEntitiesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)deleteAllEntities;
- (_Bool)setValuesForAllEntitiesWithDictionary:(id)arg1;
- (_Bool)createTemporaryTableWithName:(id)arg1 properties:(id)arg2;
@property(readonly) long long countOfEntities;
- (id)copySelectSQLWithProperties:(id)arg1;
- (id)copyEntityIdentifiers;
- (void)bindToSelectStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;

@end

