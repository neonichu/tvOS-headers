//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKShareID, CKUserIdentity, NSString;

@interface CKShareParticipant : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isCurrentUser;
    CKUserIdentity *_userIdentity;
    long long _type;
    long long _acceptanceStatus;
    long long _permission;
    NSString *_participantID;
    CKShareID *_shareID;
    CKUserIdentity *_originalUserIdentity;
    long long _originalParticipantType;
    long long _originalAcceptanceStatus;
    long long _originalPermission;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long originalPermission; // @synthesize originalPermission=_originalPermission;
@property(nonatomic) long long originalAcceptanceStatus; // @synthesize originalAcceptanceStatus=_originalAcceptanceStatus;
@property(nonatomic) long long originalParticipantType; // @synthesize originalParticipantType=_originalParticipantType;
@property(retain, nonatomic) CKUserIdentity *originalUserIdentity; // @synthesize originalUserIdentity=_originalUserIdentity;
@property(nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(nonatomic) long long permission; // @synthesize permission=_permission;
@property(nonatomic) long long acceptanceStatus; // @synthesize acceptanceStatus=_acceptanceStatus;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) CKUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)CKPropertiesDescription;
- (_Bool)isEquivalentToParticipant:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserIdentity:(id)arg1;

@end

