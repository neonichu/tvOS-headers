//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HSFairPlayInfo, NSString, NSURL, NSURLSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HSConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_activityTimerSource;
    NSURLSession *_connectionSession;
    unsigned int _databaseID;
    unsigned int _databaseRevision;
    unsigned int _basePlaylistContainerID;
    unsigned int _sessionID;
    unsigned int _interfaceID;
    unsigned int _controlKey;
    unsigned int _controlPort;
    unsigned int _promptID;
    NSURL *_baseURL;
    long long _connectionType;
    long long _connectionState;
    HSFairPlayInfo *_fairPlayInfo;
    NSString *_homeSharingGroupID;
}

@property(nonatomic) unsigned int promptID; // @synthesize promptID=_promptID;
@property unsigned int controlPort; // @synthesize controlPort=_controlPort;
@property unsigned int controlKey; // @synthesize controlKey=_controlKey;
@property unsigned int interfaceID; // @synthesize interfaceID=_interfaceID;
@property unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property unsigned int basePlaylistContainerID; // @synthesize basePlaylistContainerID=_basePlaylistContainerID;
@property unsigned int databaseRevision; // @synthesize databaseRevision=_databaseRevision;
@property unsigned int databaseID; // @synthesize databaseID=_databaseID;
@property(copy) NSString *homeSharingGroupID; // @synthesize homeSharingGroupID=_homeSharingGroupID;
@property(retain) HSFairPlayInfo *fairPlayInfo; // @synthesize fairPlayInfo=_fairPlayInfo;
@property(nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic) long long connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)_onSerialQueue_connectionSession;
- (void)_setupControlConnectionWithInternalConnectionCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onSerialQueue_sendRequest:(id)arg1 withInternalResponseHandler:(CDUnknownBlockType)arg2;
- (void)_sendRequest:(id)arg1 withInternalResponseHandler:(CDUnknownBlockType)arg2;
- (unsigned int)_sapVersionForConnectionType;
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_continueFPSetupNegotiationWithData:(id)arg1 internalConnectionCompletionHandler:(CDUnknownBlockType)arg2;
- (void)checkForDatabaseUpdatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)signedRequestFromURLRequest:(id)arg1;
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (id)newControlConnection;
- (void)disconnect;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithBaseURL:(id)arg1 connectionType:(long long)arg2;
- (id)initWithBaseURL:(id)arg1;

@end

