//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, SASportsLeague, SAUIAppPunchOut;

@interface SASportsEntity : SADomainObject
{
}

+ (id)entityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)entity;
@property(retain, nonatomic) SAUIAppPunchOut *punchout;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSURL *listImage;
@property(retain, nonatomic) SASportsLeague *league;
@property(copy, nonatomic) NSURL *largeImage;
@property(copy, nonatomic) NSURL *image;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

