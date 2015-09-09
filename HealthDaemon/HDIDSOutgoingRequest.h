//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>

@class HDIDSMessageCenter, NSData, NSDictionary, NSString;

@interface HDIDSOutgoingRequest : NSObject <HDNanoSyncDescription>
{
    _Bool _doNotCompress;
    _Bool _queueOnly1;
    _Bool _forceLocalDelivery;
    unsigned short _messageID;
    NSData *_data;
    NSString *_idsIdentifier;
    unsigned long long _priority;
    double _sendTimeout;
    double _responseTimeout;
    NSDictionary *_persistentUserInfo;
    HDIDSMessageCenter *_messageCenter;
    id _pbRequest;
}

+ (id)requestWithMessageID:(unsigned short)arg1;
+ (id)changeRequestWithChanges:(id)arg1 status:(id)arg2 forStore:(id)arg3;
+ (id)activationRequestWithRestore:(id)arg1 forStore:(id)arg2;
@property(retain, nonatomic) id pbRequest; // @synthesize pbRequest=_pbRequest;
@property(nonatomic) __weak HDIDSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(nonatomic) _Bool forceLocalDelivery; // @synthesize forceLocalDelivery=_forceLocalDelivery;
@property(nonatomic) _Bool queueOnly1; // @synthesize queueOnly1=_queueOnly1;
@property(nonatomic) _Bool doNotCompress; // @synthesize doNotCompress=_doNotCompress;
@property(retain, nonatomic) NSDictionary *persistentUserInfo; // @synthesize persistentUserInfo=_persistentUserInfo;
@property(nonatomic) double responseTimeout; // @synthesize responseTimeout=_responseTimeout;
@property(nonatomic) double sendTimeout; // @synthesize sendTimeout=_sendTimeout;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)nanoSyncDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

