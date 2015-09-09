//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface TVSDataQuery : NSObject
{
    CDUnknownFunctionPointerType callbackFn;
    long long _status;
    long long _queryType;
    NSString *_groupingProperty;
    long long _groupingDirection;
    NSArray *_results;
    NSError *_error;
    NSMutableSet *_queryProperties;
    NSMutableArray *_queryFilters;
    NSMutableDictionary *_metadataDict;
    id _callbackContext;
    CDStruct_627e0f85 _range;
}

+ (id)stringFromQueryStatus:(long long)arg1;
+ (id)stringFromQueryType:(long long)arg1;
@property(nonatomic) id callbackContext; // @synthesize callbackContext=_callbackContext;
@property(retain, nonatomic) NSMutableDictionary *metadataDict; // @synthesize metadataDict=_metadataDict;
@property(retain, nonatomic) NSMutableArray *queryFilters; // @synthesize queryFilters=_queryFilters;
@property(retain, nonatomic) NSMutableSet *queryProperties; // @synthesize queryProperties=_queryProperties;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) CDStruct_627e0f85 range; // @synthesize range=_range;
@property(nonatomic) long long groupingDirection; // @synthesize groupingDirection=_groupingDirection;
@property(copy, nonatomic) NSString *groupingProperty; // @synthesize groupingProperty=_groupingProperty;
@property(nonatomic) long long queryType; // @synthesize queryType=_queryType;
- (void).cxx_destruct;
- (id)metadata;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)properties;
- (void)addProperties:(id)arg1;
- (void)addProperty:(id)arg1;
- (id)dataQueryFilters;
- (void)addDataQueryFilters:(id)arg1;
- (void)addDataQueryFilter:(id)arg1;
- (void)cancelProcessing;
- (id)completionContext;
- (CDUnknownFunctionPointerType)completionFn;
- (void)setCompletionFn:(CDUnknownFunctionPointerType)arg1 context:(id)arg2;
@property long long status; // @synthesize status=_status;
- (id)description;
- (id)initWithQueryType:(long long)arg1;

@end

