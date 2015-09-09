//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDHomeInvitation.h>

@class HMDUser, NSArray, NSString;

@interface HMDOutgoingHomeInvitation : HMDHomeInvitation
{
    _Bool _responseReceived;
    HMDUser *_user;
    NSString *_inviteeDestinationAddress;
    NSArray *_operations;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool responseReceived; // @synthesize responseReceived=_responseReceived;
@property(retain, nonatomic) NSArray *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) NSString *inviteeDestinationAddress; // @synthesize inviteeDestinationAddress=_inviteeDestinationAddress;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)mergeWithInvitation:(id)arg1;
- (void)cancel;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
- (id)description;
- (id)debugDescription;
- (id)shortDescription;
- (id)initWithInvitee:(id)arg1 invitationState:(long long)arg2 forHome:(id)arg3 expiryDate:(id)arg4;

@end

