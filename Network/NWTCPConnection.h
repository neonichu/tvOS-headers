//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSArray, NSData, NSError, NSString, NWEndpoint, NWParameters, NWPath;
@protocol OS_tcp_connection;

@interface NWTCPConnection : NSObject <NWPrettyDescription>
{
    _Bool _viable;
    _Bool _hasBetterPath;
    _Bool _trustInvalidCerts;
    long long _state;
    NWEndpoint *_endpoint;
    NWParameters *_parameters;
    NSObject<OS_tcp_connection> *_internalConnection;
    id _delegate;
    NSArray *_certificateChain;
    struct SSLCertificate *_coreTLSCertificateChain;
    struct __SecKey *_privateKey;
    struct _tls_private_key *_coreTLSPrivateKey;
}

+ (id)stringFromNWTCPConnectionState:(long long)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property struct _tls_private_key *coreTLSPrivateKey; // @synthesize coreTLSPrivateKey=_coreTLSPrivateKey;
@property struct __SecKey *privateKey; // @synthesize privateKey=_privateKey;
@property struct SSLCertificate *coreTLSCertificateChain; // @synthesize coreTLSCertificateChain=_coreTLSCertificateChain;
@property(retain) NSArray *certificateChain; // @synthesize certificateChain=_certificateChain;
@property _Bool trustInvalidCerts; // @synthesize trustInvalidCerts=_trustInvalidCerts;
@property __weak id delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_tcp_connection> *internalConnection; // @synthesize internalConnection=_internalConnection;
@property(readonly) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(retain) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property _Bool hasBetterPath; // @synthesize hasBetterPath=_hasBetterPath;
@property(getter=isViable) _Bool viable; // @synthesize viable=_viable;
@property long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (_Bool)fillOutTCPConnectionInfo:(struct tcp_connection_info *)arg1;
- (_Bool)startInternal;
- (void)setupEventHandler;
- (void)handleIdentityRequestWithHandshake:(struct _tls_handshake_s *)arg1 resumptionHandler:(CDUnknownBlockType)arg2;
- (void)handlePrepareTLSHandshake:(struct _tls_handshake_s *)arg1 TLSRecord:(struct _tls_record_s *)arg2;
- (int)setRequiredPropertiesOnHandshake:(struct _tls_handshake_s *)arg1 fromIdentity:(struct __SecIdentity *)arg2 certificateChain:(id)arg3;
- (void)handlePeerCertificateTrustEvaluationWithHandshake:(struct _tls_handshake_s *)arg1 resumptionHandler:(CDUnknownBlockType)arg2;
- (int)setRequiredPropertiesOnHandshake:(struct _tls_handshake_s *)arg1 fromTrust:(struct __SecTrust *)arg2;
- (struct __SecTrust *)createTrustEvaluationFromCertificateChain:(id)arg1 peerHostname:(id)arg2;
- (void)cleanupPreviousTLSIdentity;
- (void)writeClose;
- (void)write:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 timeout:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)readToPattern:(id)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readLength:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancel;
@property(readonly) NSError *error;
@property(readonly) NSData *txtRecord;
@property(readonly) NWEndpoint *remoteAddress;
@property(readonly) NWEndpoint *localAddress;
@property(readonly) NWPath *connectedPath;
@property(readonly, copy) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (void)dealloc;
- (id)initWithUpgradeForConnection:(id)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithAcceptedInternalConnection:(id)arg1;

@end

