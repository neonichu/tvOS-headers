//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTServices/IDSFaceTimeMessage.h>

#import <FTServices/NSCopying-Protocol.h>

@class NSData, NSNumber, NSString;

@interface IDSAcceptMessage : IDSFaceTimeMessage <NSCopying>
{
    NSData *_selfPushToken;
    NSNumber *_selfNATType;
    NSData *_selfBlob;
    NSData *_selfNATIP;
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_peerNATType;
    NSData *_peerBlob;
    NSData *_peerNATIP;
    NSNumber *_relayType;
    NSData *_relayConnectionId;
    NSData *_relayTransactionIdAlloc;
    NSData *_relayTokenAllocReq;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSNumber *peerRelayPort; // @synthesize peerRelayPort=_peerRelayPort;
@property(copy) NSData *peerRelayIP; // @synthesize peerRelayIP=_peerRelayIP;
@property(copy) NSNumber *selfRelayPort; // @synthesize selfRelayPort=_selfRelayPort;
@property(copy) NSData *selfRelayIP; // @synthesize selfRelayIP=_selfRelayIP;
@property(copy) NSData *relayTokenAllocReq; // @synthesize relayTokenAllocReq=_relayTokenAllocReq;
@property(copy) NSData *relayTransactionIdAlloc; // @synthesize relayTransactionIdAlloc=_relayTransactionIdAlloc;
@property(copy) NSData *relayConnectionId; // @synthesize relayConnectionId=_relayConnectionId;
@property(copy) NSNumber *relayType; // @synthesize relayType=_relayType;
@property(copy) NSData *peerNATIP; // @synthesize peerNATIP=_peerNATIP;
@property(copy) NSData *peerBlob; // @synthesize peerBlob=_peerBlob;
@property(copy) NSNumber *peerNATType; // @synthesize peerNATType=_peerNATType;
@property(copy) NSData *peerPushToken; // @synthesize peerPushToken=_peerPushToken;
@property(copy) NSString *peerID; // @synthesize peerID=_peerID;
@property(copy) NSData *selfNATIP; // @synthesize selfNATIP=_selfNATIP;
@property(copy) NSData *selfBlob; // @synthesize selfBlob=_selfBlob;
@property(copy) NSNumber *selfNATType; // @synthesize selfNATType=_selfNATType;
@property(copy) NSData *selfPushToken; // @synthesize selfPushToken=_selfPushToken;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

