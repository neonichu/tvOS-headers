//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface SSLookupItem : NSObject
{
    NSDictionary *_dictionary;
}

@property(readonly, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_dictionary;
@property(readonly, nonatomic) float userRatingForCurrentVersion;
@property(readonly, nonatomic) float userRating;
@property(readonly, nonatomic) NSURL *productPageURL;
@property(readonly, nonatomic) NSArray *offers;
@property(readonly, nonatomic) long long numberOfUserRatingsForCurrentVersion;
@property(readonly, nonatomic) long long numberOfUserRatings;
@property(readonly, nonatomic) NSNumber *ITunesStoreIdentifier;
@property(readonly, nonatomic) NSString *itemKind;
@property(readonly, nonatomic, getter=isPOIBased) _Bool POIBased;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSArray *categoryNames;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) NSArray *artwork;
@property(readonly, nonatomic) NSString *artistName;
- (void)dealloc;
- (id)initWithLookupDictionary:(id)arg1;

@end

