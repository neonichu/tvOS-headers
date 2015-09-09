//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3Query.h>

@class NSString;

@interface ML3AggregateQuery : ML3Query
{
    Class _aggregateEntityClass;
    NSString *_foreignPersistentIDProperty;
    _Bool _isFastCountable;
}

@property(nonatomic) _Bool isFastCountable; // @synthesize isFastCountable=_isFastCountable;
@property(readonly, nonatomic) NSString *foreignPersistentIDProperty; // @synthesize foreignPersistentIDProperty=_foreignPersistentIDProperty;
@property(readonly, nonatomic) Class aggregateEntityClass; // @synthesize aggregateEntityClass=_aggregateEntityClass;
- (void).cxx_destruct;
- (_Bool)sectionsPersistentIDColumnIsDistinct;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(_Bool)arg2;
- (unsigned long long)countOfEntities;
- (_Bool)hasEntities;
- (id)persistentIDProperty;
- (Class)entityClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3;

@end

