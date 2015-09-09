//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSString, NSUUID, _IDSDevice;

@interface IDSDevice : NSObject
{
    _IDSDevice *_internal;
}

- (void)closeSocketForDomain:(id)arg1;
- (int)openSocketForDomain:(id)arg1 transportType:(long long)arg2;
- (int)openSocketForDomain:(id)arg1;
- (int)socketForDomain:(id)arg1;
- (void)cleanupStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)establishStreamPairWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)closeSocket:(int)arg1;
- (void)openSocketWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (id)_internal;
- (void)_setAccount:(id)arg1;
@property(readonly, nonatomic) unsigned long long maxCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long minCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long pairingProtocolVersion;
- (_Bool)isDefaultLocalDevice;
- (void)_addIdentity:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *identities;
@property(readonly, retain, nonatomic) NSData *pushToken;
@property(readonly, retain, nonatomic) NSDate *lastActivityDate;
@property(readonly, retain, nonatomic) NSString *enclosureColor;
@property(readonly, retain, nonatomic) NSString *deviceColor;
@property(readonly, nonatomic) _Bool supportsPhoneCalls;
@property(readonly, nonatomic) _Bool supportsMMSRelay;
@property(readonly, nonatomic) _Bool supportsSMSRelay;
@property(readonly, nonatomic) _Bool supportsHandoff;
@property(readonly, nonatomic) _Bool supportsTethering;
@property(readonly, nonatomic) _Bool supportsiCloudPairing;
- (void)_updateNSUUID:(id)arg1;
@property(retain, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property(readonly, retain, nonatomic) NSArray *linkedUserURIs;
@property(readonly, nonatomic) _Bool isHSATrusted;
@property(readonly, nonatomic) _Bool isDefaultPairedDevice;
@property(readonly, nonatomic) _Bool locallyPresent;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(readonly, nonatomic, getter=isNearby) _Bool nearby;
@property(readonly, retain, nonatomic) NSString *service;
@property(readonly, retain, nonatomic) NSString *name;
@property(readonly, retain, nonatomic) NSString *modelIdentifier;
@property(readonly, nonatomic) CDStruct_2ec95fd7 operatingSystemVersion;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, retain, nonatomic) NSString *uniqueIDOverride;
@property(readonly, retain, nonatomic) NSString *uniqueID;
- (id)description;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)_initWithDictionary:(id)arg1;

@end

