//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface BFFLocaleDataSource : NSObject
{
    NSArray *_canonicalLocales;
    NSString *_language;
    NSMutableArray *_suggestedCountries;
    NSMutableArray *_moreCountries;
}

+ (id)newWithLanguage:(id)arg1;
@property(retain, nonatomic) NSMutableArray *moreCountries; // @synthesize moreCountries=_moreCountries;
@property(retain, nonatomic) NSMutableArray *suggestedCountries; // @synthesize suggestedCountries=_suggestedCountries;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (id)otherLocaleAtIndex:(unsigned long long)arg1;
- (id)recommendedLocaleAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfOtherLocales;
- (unsigned long long)numberOfRecommendedLocales;
- (void)reloadData;

@end

