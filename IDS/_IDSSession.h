//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IDS/IDSBaseSocketPairConnectionDelegate-Protocol.h>
#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class CUTWeakReference, IDSBaseSocketPairConnection, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface _IDSSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate>
{
    id _delegateContext;
    id _boostContext;
    NSString *_uniqueID;
    NSString *_accountID;
    NSSet *_destinations;
    IDSBaseSocketPairConnection *_unreliableSocketPairConnection;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _state;
    long long _transportType;
    int _socket;
    _Bool _isAudioEnabled;
    _Bool _isMuted;
    _Bool _isLegacy;
    long long _inviteTimeout;
    unsigned int _sessionEndedReason;
}

@property(retain, nonatomic) id boostContext; // @synthesize boostContext=_boostContext;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;
- (void)session:(id)arg1 muted:(_Bool)arg2;
- (void)session:(id)arg1 audioEnabled:(_Bool)arg2;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (_Bool)sendData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned int sessionEndedReason;
@property(nonatomic) long long inviteTimeout;
- (_Bool)getMuted;
- (void)setMuted:(_Bool)arg1;
- (_Bool)getAudioEnabled;
- (void)setAudioEnabled:(_Bool)arg1;
- (void)sendSessionMessage:(id)arg1;
- (void)endSessionWithData:(id)arg1;
- (void)endSession;
- (void)declineInvitationWithData:(id)arg1;
- (void)declineInvitation;
- (void)acceptInvitationWithData:(id)arg1;
- (void)acceptInvitation;
- (void)cancelInvitationWithData:(id)arg1;
- (void)cancelInvitation;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)_cleanupSocketPairConnections;
- (void)_setupSocketPairToDaemon;
- (void)_setupUnreliableSocketPairConnection;
@property(readonly, nonatomic) int socket;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)_broadcastNewSessionToDaemon;
- (void)daemonDisconnected;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 delegateContext:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

