//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDUser.h>

@class NSString;

@interface HMDResidentUser : HMDUser
{
    NSString *_displayName;
    _Bool _primaryResidentDevice;
    NSString *_deviceIdentifier;
    unsigned long long _configurationState;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isPrimaryResidentDevice) _Bool primaryResidentDevice; // @synthesize primaryResidentDevice=_primaryResidentDevice;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)encodingRemoteDisplayName;
- (id)initWithCoder:(id)arg1;
- (_Bool)mergeFromUser:(id)arg1;
- (_Bool)configureWithIDSDevice:(id)arg1;
@property(nonatomic) unsigned long long configurationState; // @synthesize configurationState=_configurationState;
- (void)setDeviceIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (id)initWithUserID:(id)arg1 pairingUsername:(id)arg2 publicKey:(id)arg3 displayName:(id)arg4 deviceIdentifier:(id)arg5 configurationState:(unsigned long long)arg6;

@end

