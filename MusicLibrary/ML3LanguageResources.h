//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ML3LanguageResources : NSObject <NSSecureCoding>
{
    NSDictionary *_sectionsInfo;
    NSDictionary *_sortingDetails;
    NSString *_canonicalLanguageIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *canonicalLanguageIdentifier; // @synthesize canonicalLanguageIdentifier=_canonicalLanguageIdentifier;
@property(readonly, nonatomic) NSDictionary *sortingDetails; // @synthesize sortingDetails=_sortingDetails;
@property(readonly, nonatomic) NSDictionary *sectionsInfo; // @synthesize sectionsInfo=_sectionsInfo;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionsInfo:(id)arg1 sortingDetails:(id)arg2 canonicalLanguageIdentifier:(id)arg3;

@end

