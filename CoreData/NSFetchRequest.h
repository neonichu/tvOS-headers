//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSPersistentStoreRequest.h>

#import <CoreData/NSCoding-Protocol.h>

@class NSArray, NSEntityDescription, NSPredicate, NSString;

@interface NSFetchRequest : NSPersistentStoreRequest <NSCoding>
{
    NSArray *_groupByProperties;
    NSPredicate *_havingPredicate;
    id *_additionalPrivateIvars;
    NSArray *_valuesToFetch;
    NSEntityDescription *_entity;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _batchSize;
    unsigned long long _fetchLimit;
    NSArray *_relationshipKeyPathsForPrefetching;
    struct _fetchRequestFlags {
        unsigned int distinctValuesOnly:1;
        unsigned int includesSubentities:1;
        unsigned int includesPropertyValues:1;
        unsigned int resultType:3;
        unsigned int returnsObjectsAsFaults:1;
        unsigned int excludePendingChanges:1;
        unsigned int isInUse:1;
        unsigned int entityIsName:1;
        unsigned int refreshesRefetched:1;
        unsigned int propertiesValidated:1;
        unsigned int disableCaching:1;
        unsigned int _RESERVED:19;
    } _flags;
}

+ (id)fetchRequestWithEntityName:(id)arg1;
+ (_Bool)accessInstanceVariablesDirectly;
+ (void)initialize;
@property(retain, nonatomic) NSPredicate *havingPredicate;
@property(copy, nonatomic) NSArray *propertiesToGroupBy;
- (void)setGroupByProperties:(id)arg1;
- (id)groupByProperties;
@property(readonly, nonatomic) NSString *entityName;
- (id)initWithEntityName:(id)arg1;
@property(nonatomic) _Bool shouldRefreshRefetchedObjects;
@property(retain, nonatomic) NSArray *affectedStores;
@property(nonatomic) unsigned long long fetchBatchSize;
@property(nonatomic) unsigned long long fetchOffset;
@property(copy, nonatomic) NSArray *propertiesToFetch;
- (id)_newValidatedProperties:(id)arg1 groupBy:(_Bool)arg2 error:(id *)arg3;
@property(nonatomic) _Bool returnsDistinctResults;
@property(nonatomic) _Bool includesPendingChanges;
@property(nonatomic) unsigned long long resultType;
@property(nonatomic) _Bool includesPropertyValues;
@property(nonatomic) _Bool includesSubentities;
@property(nonatomic) _Bool returnsObjectsAsFaults;
@property(copy, nonatomic) NSArray *relationshipKeyPathsForPrefetching;
@property(nonatomic) unsigned long long fetchLimit;
@property(retain, nonatomic) NSArray *sortDescriptors;
@property(retain, nonatomic) NSPredicate *predicate;
@property(retain, nonatomic) NSEntityDescription *entity;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (void)_setFlagsFromXPCEncoding:(id)arg1;
- (id)_XPCEncodedFlags;
- (_Bool)hasChanges;
- (id)stores;
- (unsigned long long)requestType;
- (void)_throwIfNotEditable;
- (_Bool)_isEditable;
- (void)_incrementInUseCounter;
- (void)_resolveEntityWithContext:(id)arg1;
- (id)_copyForDirtyContext;
- (void)_setDisablePersistentStoreResultCaching:(_Bool)arg1;
- (_Bool)_disablePersistentStoreResultCaching;
- (id)_asyncResultHandle;
- (void)_setAsyncResultHandle:(id)arg1;

@end

