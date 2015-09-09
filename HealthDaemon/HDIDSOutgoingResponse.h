//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>

@class HDIDSIncomingRequest, NSData, NSDictionary, NSString;

@interface HDIDSOutgoingResponse : NSObject <HDNanoSyncDescription>
{
    _Bool _doNotCompress;
    _Bool _forceLocalDelivery;
    _Bool _sent;
    unsigned short _messageID;
    HDIDSIncomingRequest *_request;
    NSString *_idsIdentifier;
    NSData *_data;
    unsigned long long _priority;
    double _sendTimeout;
    NSDictionary *_persistentUserInfo;
    id _pbResponse;
}

@property(retain, nonatomic) id pbResponse; // @synthesize pbResponse=_pbResponse;
@property(getter=isSent) _Bool sent; // @synthesize sent=_sent;
@property(nonatomic) _Bool forceLocalDelivery; // @synthesize forceLocalDelivery=_forceLocalDelivery;
@property(nonatomic) _Bool doNotCompress; // @synthesize doNotCompress=_doNotCompress;
@property(retain, nonatomic) NSDictionary *persistentUserInfo; // @synthesize persistentUserInfo=_persistentUserInfo;
@property(nonatomic) double sendTimeout; // @synthesize sendTimeout=_sendTimeout;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property(nonatomic) __weak HDIDSIncomingRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)send;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)nanoSyncDescription;
- (void)configureWithStatus:(id)arg1 forStore:(id)arg2;
- (void)configureWithActivationRestore:(id)arg1 forStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

