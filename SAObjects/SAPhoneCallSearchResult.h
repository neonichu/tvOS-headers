//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSDate, NSNumber, SAPersonAttribute;

@interface SAPhoneCallSearchResult : SADomainObject
{
}

+ (id)callSearchResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)callSearchResult;
@property(copy, nonatomic) NSNumber *isNew;
@property(retain, nonatomic) SAPersonAttribute *contact;
@property(copy, nonatomic) NSDate *callTime;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

