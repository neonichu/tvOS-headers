//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class SAMicroblogTwitterPostAuthor;

@interface SAMicroblogMicroblogSearchResultBase : SADomainObject
{
}

+ (id)microblogSearchResultBaseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)microblogSearchResultBase;
@property(retain, nonatomic) SAMicroblogTwitterPostAuthor *author;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

