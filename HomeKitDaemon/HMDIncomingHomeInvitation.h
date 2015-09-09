//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDHomeInvitation.h>

@class NSData, NSDictionary, NSString, NSUUID;

@interface HMDIncomingHomeInvitation : HMDHomeInvitation
{
    NSData *_inviterPublicKey;
    NSString *_inviterControllerName;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *inviterControllerName; // @synthesize inviterControllerName=_inviterControllerName;
@property(readonly, copy, nonatomic) NSData *inviterPublicKey; // @synthesize inviterPublicKey=_inviterPublicKey;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *inviterUserID;
@property(readonly, copy, nonatomic) NSUUID *homeUUID;
@property(readonly, copy, nonatomic) NSString *homeName;
- (id)initWithInviterUserID:(id)arg1 invitationIdentifier:(id)arg2 invitationState:(long long)arg3 homeName:(id)arg4 homeUUID:(id)arg5 inviterPublicKey:(id)arg6 inviterControllerName:(id)arg7 expiryDate:(id)arg8;
@property(readonly, nonatomic) NSDictionary *bulletinContext;

@end

