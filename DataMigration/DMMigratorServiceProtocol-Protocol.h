//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataMigration/NSObject-Protocol.h>

@protocol DMMigratorServiceProtocol <NSObject>
- (void)testMigrationUIWithProgress:(_Bool)arg1 forceInvert:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)changeVisibility:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
- (void)orderedPluginIdentifiersWithCompletion:(void (^)(NSArray *))arg1;
- (void)migrateWithCompletion:(void (^)(_Bool))arg1;
@end

