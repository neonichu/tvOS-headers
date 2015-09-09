//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray, NSString, SSSQLitePredicate;

@interface SSSQLiteQueryDescriptor : NSObject <NSCopying>
{
    Class _entityClass;
    long long _limitCount;
    Class _memoryEntityClass;
    NSString *_orderingClause;
    NSArray *_orderingDirections;
    NSArray *_orderingProperties;
    SSSQLitePredicate *_predicate;
    _Bool _returnsDistinctEntities;
}

@property(nonatomic) _Bool returnsDistinctEntities; // @synthesize returnsDistinctEntities=_returnsDistinctEntities;
@property(copy, nonatomic) SSSQLitePredicate *predicate; // @synthesize predicate=_predicate;
@property(copy, nonatomic) NSArray *orderingProperties; // @synthesize orderingProperties=_orderingProperties;
@property(copy, nonatomic) NSArray *orderingDirections; // @synthesize orderingDirections=_orderingDirections;
@property(copy, nonatomic) NSString *orderingClause; // @synthesize orderingClause=_orderingClause;
@property(nonatomic) Class memoryEntityClass; // @synthesize memoryEntityClass=_memoryEntityClass;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (id)_newSelectSQLWithProperties:(const id *)arg1 count:(unsigned long long)arg2 columns:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

