//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class CUTWeakReference, NSArray, NSData, NSDate, NSDictionary, NSInputStream, NSOutputStream, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface _IDSDevice : NSObject <IDSDaemonListenerProtocol>
{
    NSDictionary *_info;
    NSString *_serviceToken;
    CUTWeakReference *_account;
    int _socket;
    int _nearbyToken;
    _Bool _nearby;
    int _lastActivityToken;
    _Bool _connected;
    CDUnknownBlockType _openSocketCompletionHandler;
    NSObject<OS_dispatch_queue> *_openSocketCompletionHandlerQueue;
    NSString *_openSocketCompletionHandlerID;
    NSInputStream *_inputStreamForSocket;
    NSOutputStream *_outputStreamForSocket;
}

- (void)closeSocketForDomain:(id)arg1;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;
- (void)closeStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)closeSocket:(int)arg1;
- (void)openSocketWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (int)socketForDomain:(id)arg1;
- (void)_setAccount:(id)arg1;
- (void)_nearbyStateChanged;
- (void)_addIdentity:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *identities;
@property(readonly, retain, nonatomic) NSData *pushToken;
@property(readonly, nonatomic) _Bool isHSATrusted;
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
@property(readonly, nonatomic) unsigned long long maxCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long minCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long pairingProtocolVersion;
@property(readonly, retain, nonatomic) NSDate *lastActivityDate;
@property(readonly, nonatomic) _Bool isDefaultLocalDevice;
@property(readonly, nonatomic) _Bool isDefaultPairedDevice;
@property(readonly, nonatomic) _Bool locallyPresent;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(readonly, nonatomic, getter=isNearby) _Bool nearby;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSString *service;
@property(readonly, retain, nonatomic) NSString *name;
@property(readonly, retain, nonatomic) NSString *modelIdentifier;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, retain, nonatomic) NSString *uniqueIDOverride;
@property(readonly, retain, nonatomic) NSString *uniqueID;
- (void)_connect;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

