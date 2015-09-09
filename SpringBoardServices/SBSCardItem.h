//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/NSCopying-Protocol.h>
#import <SpringBoardServices/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString, UIImage;

@interface SBSCardItem : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _requiresPasscode;
    NSString *_identifier;
    NSData *_iconData;
    NSString *_title;
    NSString *_body;
    NSString *_bundleName;
    NSData *_attachmentData;
    NSDictionary *_userInfo;
    UIImage *_thumbnail;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSData *attachmentData; // @synthesize attachmentData=_attachmentData;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(nonatomic) _Bool requiresPasscode; // @synthesize requiresPasscode=_requiresPasscode;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)sortDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 classification:(long long)arg5 bundleName:(id)arg6 userInfo:(id)arg7;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 requiresPasscode:(_Bool)arg5 bundleName:(id)arg6 userInfo:(id)arg7;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 requiresPasscode:(_Bool)arg5 bundleName:(id)arg6 attachmentData:(id)arg7 userInfo:(id)arg8;

@end

