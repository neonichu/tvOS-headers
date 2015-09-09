//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PLRevGeoCompoundNameInfo : NSObject
{
    _Bool _isContinuation;
    _Bool _suffixWhenPrefixOnly;
    NSString *_namePrefix;
    NSArray *_sortedNames;
    NSString *_nameSuffix;
}

+ (id)_localizedNameForName:(id)arg1;
@property(nonatomic) _Bool suffixWhenPrefixOnly; // @synthesize suffixWhenPrefixOnly=_suffixWhenPrefixOnly;
@property(nonatomic) _Bool isContinuation; // @synthesize isContinuation=_isContinuation;
@property(copy, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(copy, nonatomic) NSArray *sortedNames; // @synthesize sortedNames=_sortedNames;
@property(copy, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
@property(readonly, copy, nonatomic) NSString *localizedTitleForNameInfo;
@property(readonly, copy, nonatomic) NSArray *localizedSortedNames;
- (id)description;
- (id)dictionaryForInfo;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

