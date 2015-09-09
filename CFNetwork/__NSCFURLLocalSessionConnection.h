//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/__NSCFURLSessionConnection.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSURLAuthenticationChallengeSender-Protocol.h>

@class NSError, NSObject, NSString, NSURLResponse;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface __NSCFURLLocalSessionConnection : __NSCFURLSessionConnection <NSURLAuthenticationChallengeSender, NSCopying>
{
    struct SessionConnectionLoadable *_loaderClient;
    struct URLConnectionLoader *_loader;
    _Bool _canceled;
    long long _suspended;
    NSURLResponse *_currentResponse;
    NSObject<OS_dispatch_data> *_pendingData;
    long long _pendingCompletion;
    unsigned long long _didReceiveResponseDisposition;
    NSError *_pendingError;
    int _state;
    long long _clientBufferLength;
    NSObject<OS_dispatch_data> *_sniffData;
    NSURLResponse *_sniffResponse;
    _Bool _isMixedReplace;
    _Bool _didCheckMixedReplace;
    _Bool _didCheckCredentialsSuppliedInURL;
    _Bool _actuallyTriedCredentialsSuppliedInURL;
    unsigned long long _maxDataSegmentCoalesceThreshhold;
    unsigned long long _maxDataSegmentCount;
    unsigned int _didReceiveDataCount;
}

- (void)_capturedSocketInputStream:(id)arg1 outputStream:(id)arg2;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)_needNewBodyStream;
- (void)_didReceiveChallenge:(id)arg1;
- (void)_redirectRequest:(id)arg1 redirectResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_conditionalRequirementsChanged:(_Bool)arg1;
- (void)_connectionIsWaitingWithReason:(long long)arg1;
- (void)_willSendRequestForEstablishedConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey *)arg1;
- (void)_didFinishWithError:(id)arg1;
- (void)_didSendBodyData:(struct UploadProgressInfo)arg1;
- (void)_didReceiveData:(id)arg1;
- (void)_didReceiveResponse:(id)arg1 sniff:(_Bool)arg2;
- (void)_tick;
- (void)_tick_finishing;
- (void)_task_sendFinish;
- (void)_ackBytes:(long long)arg1;
- (void)_tick_running;
- (void)_tick_sniffNow;
- (void)_tick_initialize;
- (void)setBytesPerSecondLimit:(long long)arg1;
- (void)setPriorityHint:(float)arg1;
- (void)setPoolPriority:(long long)arg1;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)withLoaderAsync:(CDUnknownBlockType)arg1;
- (void)withLoaderOnQueue:(CDUnknownBlockType)arg1;
- (void)afterDelegateWithTick:(CDUnknownBlockType)arg1;
- (void)_immediatePostDelegateTick;
- (void)withDelegateAndPendingCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)dealloc;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

