//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSQLiteDatabase;

@interface HDDatabaseMigrator : NSObject
{
    HDSQLiteDatabase *_database;
}

@property(readonly, nonatomic) HDSQLiteDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (long long)fatalStatusForVersion:(long long)arg1 errorMessage:(id)arg2 error:(id *)arg3;
- (long long)statusForUnhandledVersion:(long long)arg1 error:(id *)arg2;
- (long long)migrateProtectedDatabaseFromVersion:(long long)arg1 healthDaemon:(id)arg2 error:(id *)arg3;
- (long long)migrateUnprotectedDatabaseFromVersion:(long long)arg1 error:(id *)arg2;
- (_Bool)executeSQL:(id)arg1 argument:(id)arg2 error:(id *)arg3;
- (_Bool)executeSQLStatements:(id)arg1 error:(id *)arg2;
- (_Bool)executeSQL:(id)arg1 error:(id *)arg2;
- (id)initWithDatabase:(id)arg1;
- (id)init;

@end

