//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSEntityMapping, NSError, NSManagedObjectContext, NSManagedObjectModel, NSMappingModel, NSMigrationContext;

@interface NSMigrationManager : NSObject
{
    NSManagedObjectModel *_sourceModel;
    NSDictionary *_sourceEntitiesByVersionHash;
    NSManagedObjectModel *_destinationModel;
    NSDictionary *_destinationEntitiesByVersionHash;
    NSMappingModel *_mappingModel;
    NSManagedObjectContext *_sourceManagedObjectContext;
    NSManagedObjectContext *_destinationManagedObjectContext;
    NSMigrationContext *_migrationContext;
    NSDictionary *_userInfo;
    struct _migrationManagerFlags {
        unsigned int _migrationWasCancelled:1;
        unsigned int _usesStoreSpecificMigrationManager:1;
        unsigned int _reservedMigrationManager:30;
    } _migrationManagerFlags;
    NSError *_migrationCancellationError;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
}

+ (_Bool)_performSanityCheckForMapping:(id)arg1 fromSourceModel:(id)arg2 toDestinationModel:(id)arg3;
+ (void)setMigrationDebugLevel:(int)arg1;
+ (int)migrationDebugLevel;
@property _Bool usesStoreSpecificMigrationManager;
- (void)cancelMigrationWithError:(id)arg1;
@property(retain, nonatomic) NSDictionary *userInfo;
@property(readonly) float migrationProgress;
- (id)currentPropertyMapping;
@property(readonly) NSEntityMapping *currentEntityMapping;
- (id)sourceInstancesForEntityMappingNamed:(id)arg1 destinationInstances:(id)arg2;
- (id)destinationInstancesForSourceRelationshipNamed:(id)arg1 sourceInstances:(id)arg2;
- (id)destinationInstancesForEntityMappingNamed:(id)arg1 sourceInstances:(id)arg2;
- (void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3;
- (id)destinationEntityForEntityMapping:(id)arg1;
- (id)sourceEntityForEntityMapping:(id)arg1;
@property(readonly) NSManagedObjectContext *destinationContext;
@property(readonly) NSManagedObjectContext *sourceContext;
@property(readonly) NSManagedObjectModel *destinationModel;
@property(readonly) NSManagedObjectModel *sourceModel;
@property(readonly) NSMappingModel *mappingModel;
- (void)reset;
- (_Bool)migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id *)arg8;
- (void)dealloc;
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2;
- (_Bool)_migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id *)arg8;
- (_Bool)_validateAllObjectsAfterMigration:(id *)arg1;
- (void)_doCleanupOnFailure:(id)arg1;
- (_Bool)_doThirdPassForMapping:(id)arg1 error:(id *)arg2;
- (_Bool)_doSecondPassForMapping:(id)arg1 error:(id *)arg2;
- (_Bool)_doFirstPassForMapping:(id)arg1 error:(id *)arg2;
- (id)_evaluateSourceExpressionForMapping:(id)arg1 entityPolicy:(id)arg2;
- (id)_mappingNamed:(id)arg1;
- (id)_migrationContext;
- (id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2;
- (id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2 includesSubentities:(_Bool)arg3;

@end

