//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/IDSServiceDelegate-Protocol.h>

@class ACRemoteCommandHandler, IDSService, NSLock, NSMutableDictionary, NSString;

@interface ACRemoteDeviceProxy : NSObject <IDSServiceDelegate>
{
    IDSService *_messageSendingService;
    ACRemoteCommandHandler *_remoteCommandHandler;
    NSMutableDictionary *_completionHandlersByInternalMessageID;
    NSMutableDictionary *_internalMessageIDsByTransportID;
    NSLock *_completionHandlersLock;
}

- (void).cxx_destruct;
- (long long)_priorityForMessageCarryingCommand:(id)arg1;
- (_Bool)_isValidCommandForOutgoingMessage:(id)arg1;
- (void)_dequeueCompletionHandlersForMessageWithTransportID:(id)arg1 success:(_Bool)arg2 result:(id)arg3 error:(id)arg4;
- (void)_dequeueCompletionHandlersForMessageWithInternalID:(id)arg1 success:(_Bool)arg2 result:(id)arg3 error:(id)arg4;
- (void)_enqueueCompletionHandler:(CDUnknownBlockType)arg1 forMessageWithInternalID:(id)arg2 transportID:(id)arg3;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)_sendReplyForMessage:(id)arg1 withSuccess:(_Bool)arg2 result:(id)arg3 error:(id)arg4;
- (void)sendCommand:(id)arg1 withAccount:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendCommand:(id)arg1 withAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

