//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol NWNetworkAgent, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface NWNetworkAgentRegistration : NSObject
{
    int _registrationSocket;
    unsigned int _waitingMessageID;
    unsigned int _responseMessageID;
    unsigned int _responseError;
    Class _networkAgentClass;
    NSObject<NWNetworkAgent> *_networkAgent;
    NSUUID *_registeredUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_semaphore> *_readSemaphore;
}

+ (_Bool)removeActiveAssertionFromNetworkAgent:(id)arg1;
+ (_Bool)addActiveAssertionToNetworkAgent:(id)arg1;
+ (id)sharedAssertionRegistration;
@property unsigned int responseError; // @synthesize responseError=_responseError;
@property unsigned int responseMessageID; // @synthesize responseMessageID=_responseMessageID;
@property unsigned int waitingMessageID; // @synthesize waitingMessageID=_waitingMessageID;
@property(retain) NSObject<OS_dispatch_semaphore> *readSemaphore; // @synthesize readSemaphore=_readSemaphore;
@property(retain) NSObject<OS_dispatch_source> *readSource; // @synthesize readSource=_readSource;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property int registrationSocket; // @synthesize registrationSocket=_registrationSocket;
@property(retain) NSUUID *registeredUUID; // @synthesize registeredUUID=_registeredUUID;
@property(retain) NSObject<NWNetworkAgent> *networkAgent; // @synthesize networkAgent=_networkAgent;
@property(retain) Class networkAgentClass; // @synthesize networkAgentClass=_networkAgentClass;
- (void).cxx_destruct;
- (_Bool)removeNetworkAgentFromInterfaceNamed:(id)arg1;
- (_Bool)addNetworkAgentToInterfaceNamed:(id)arg1;
- (_Bool)unregisterNetworkAgent;
- (_Bool)updateNetworkAgent:(id)arg1;
- (_Bool)registerNetworkAgent:(id)arg1;
- (_Bool)waitForMessageResponse;
@property(readonly, getter=isRegistered) _Bool registered;
- (void)dealloc;
- (id)initWithNetworkAgentClass:(Class)arg1;

@end
