//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAFamilyRequest.h>

@class NSNumber, NSString, SSAccount;

@interface AAUIFamilyMemberPhotoRequest : AAFamilyRequest
{
    NSNumber *_familyMemberDSID;
    SSAccount *_iTunesAccount;
    NSString *_serverCacheTag;
}

+ (Class)responseClass;
@property(copy, nonatomic) NSString *serverCacheTag; // @synthesize serverCacheTag=_serverCacheTag;
@property(retain, nonatomic, setter=setiTunesAccount:) SSAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
@property(copy, nonatomic) NSNumber *familyMemberDSID; // @synthesize familyMemberDSID=_familyMemberDSID;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;

@end

