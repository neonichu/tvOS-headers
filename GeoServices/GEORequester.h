//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequester.h>

@class NSString, NSThread;

@interface GEORequester : PBRequester
{
    _Bool _disableReplay;
    NSThread *_thread;
    _Bool _usePersistentConnection;
    _Bool _useBackgroundConnection;
    NSString *_debugRequestName;
    NSString *_throttleKey;
    _Bool _canceled;
}

+ (void)replayRequests;
+ (void)stopAllRequests;
+ (id)_logRequestResponseDirectory;
+ (void)enablePersistentConnection;
+ (void)setLogRequestResponseDirectory:(id)arg1;
+ (void)setOSVersion:(id)arg1;
+ (void)setAppID:(id)arg1;
@property _Bool disableReplay; // @synthesize disableReplay=_disableReplay;
@property(copy, nonatomic) NSString *throttleKey; // @synthesize throttleKey=_throttleKey;
@property(retain, nonatomic) NSString *debugRequestName; // @synthesize debugRequestName=_debugRequestName;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest *)arg1 delegate:(id)arg2;
- (struct _CFURLRequest *)newCFMutableURLRequestWithURL:(id)arg1;
- (id)persistentConnectionSession;
- (id)requestPreamble;
- (id)logResponseToFile;
- (id)logRequestToFile;
- (void)_logErrorIfNecessary:(id)arg1;
- (void)_logResponsesIfNecessary:(id)arg1;
- (void)_logRequestsIfNecessary:(id)arg1;
- (void)startWithConnectionProperties:(id)arg1;
- (void)start;
- (void)setNeedsCancel;
- (void)cancel;
- (void)_handleResumeOnThread;
- (void)_applicationWantsToReplayRequests:(id)arg1;
- (void)_handleSuspendOnThread;
- (void)_applicationDidStopAllRequests:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2 useBackgroundConnection:(_Bool)arg3;

@end

