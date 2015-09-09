//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMediaStream/NSObject-Protocol.h>

@class IDSAccount, IDSMessageContext, IDSProtobuf, IDSService, IDSSession, NSArray, NSData, NSDictionary, NSError, NSSet, NSString, NSURL;

@protocol IDSServiceDelegate <NSObject>

@optional
- (void)serviceAllowedTrafficClassifiersDidReset:(IDSService *)arg1;
- (void)serviceSpaceDidBecomeAvailable:(IDSService *)arg1;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 inviteReceivedForSession:(IDSSession *)arg3 fromID:(NSString *)arg4 withContext:(NSData *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 inviteReceivedForSession:(IDSSession *)arg3 fromID:(NSString *)arg4 withOptions:(NSDictionary *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 inviteReceivedForSession:(IDSSession *)arg3 fromID:(NSString *)arg4;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 didSendWithSuccess:(_Bool)arg4 error:(NSError *)arg5 context:(IDSMessageContext *)arg6;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 didSendWithSuccess:(_Bool)arg4 error:(NSError *)arg5;
- (void)service:(IDSService *)arg1 nearbyDevicesChanged:(NSArray *)arg2;
- (void)service:(IDSService *)arg1 devicesChanged:(NSArray *)arg2;
- (void)service:(IDSService *)arg1 activeAccountsChanged:(NSSet *)arg2;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingResourceAtURL:(NSURL *)arg3 metadata:(NSDictionary *)arg4 fromID:(NSString *)arg5 context:(IDSMessageContext *)arg6;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingResourceAtURL:(NSURL *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingUnhandledProtobuf:(IDSProtobuf *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingData:(NSData *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingMessage:(NSDictionary *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
@end

