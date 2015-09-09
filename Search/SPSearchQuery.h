//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Search/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SPSearchQuery : NSObject <NSCopying>
{
    unsigned long long _queryID;
    NSString *_searchString;
    NSString *_keyboardLanguage;
    NSString *_keyboardPrimaryLanguage;
    _Bool _cancelled;
    _Bool _finished;
    _Bool _internal;
    NSArray *_searchDomains;
    int _nextDomainIndex;
    double _creationTime;
    double _cancellationTime;
    unsigned long long _creationStamp;
    _Bool _dictationStable;
    _Bool _grouped;
    NSDictionary *_dictationResponse;
    long long _maxCount;
    NSArray *_disabledBundles;
    long long _contentFilters;
}

@property(readonly, nonatomic) unsigned long long creationStamp; // @synthesize creationStamp=_creationStamp;
@property(nonatomic) long long contentFilters; // @synthesize contentFilters=_contentFilters;
@property(retain, nonatomic) NSArray *disabledBundles; // @synthesize disabledBundles=_disabledBundles;
@property(nonatomic) _Bool internal; // @synthesize internal=_internal;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) _Bool grouped; // @synthesize grouped=_grouped;
@property(nonatomic) _Bool dictationStable; // @synthesize dictationStable=_dictationStable;
@property(retain, nonatomic) NSDictionary *dictationResponse; // @synthesize dictationResponse=_dictationResponse;
@property(readonly, nonatomic) NSArray *searchDomains; // @synthesize searchDomains=_searchDomains;
@property(readonly, nonatomic) double cancellationTime; // @synthesize cancellationTime=_cancellationTime;
@property(readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) NSString *keyboardPrimaryLanguage; // @synthesize keyboardPrimaryLanguage=_keyboardPrimaryLanguage;
@property(readonly, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQuery:(id)arg1 domains:(id)arg2;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 forSearchDomains:(id)arg3 disabledBundles:(id)arg4;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 keyboardPrimaryLanguage:(id)arg3 forSearchDomains:(id)arg4 disabledBundles:(id)arg5;
- (void)cancel;
@property(readonly, nonatomic) _Bool cancelled;

@end

