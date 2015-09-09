//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHCollectionList.h>

@class NSDate;

@interface PHMomentList : PHCollectionList
{
    short _granularityLevel;
    short _generationType;
    int _sortIndex;
    NSDate *_representativeDate;
}

+ (id)fetchPredicateFromComparisonPredicate:(id)arg1;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
@property(readonly, nonatomic) short generationType; // @synthesize generationType=_generationType;
@property(readonly, nonatomic) int sortIndex; // @synthesize sortIndex=_sortIndex;
@property(readonly, nonatomic) NSDate *representativeDate; // @synthesize representativeDate=_representativeDate;
@property(readonly, nonatomic) short granularityLevel; // @synthesize granularityLevel=_granularityLevel;
- (void).cxx_destruct;
- (id)description;
- (_Bool)collectionHasFixedOrder;
- (long long)collectionListType;
- (_Bool)isMeaningful;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;

@end

