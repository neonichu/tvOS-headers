//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <StoreServices/NSURLConnectionDelegate-Protocol.h>

@class AKAppleIDSession, NSCachedURLResponse, NSData, NSHTTPURLResponse, NSMutableData, NSMutableSet, NSObject, NSRunLoop, NSString, NSURL, NSURLRequest, SSMetricsPageEvent, SSURLBag, SSVFairPlaySAPSession, SSVSAPSignaturePolicy, SSVURLBagInterpreter, SSVURLDataConsumer;
@protocol OS_dispatch_queue;

@interface SSVLoadURLOperation : NSOperation <NSURLConnectionDelegate>
{
    AKAppleIDSession *_authKitSession;
    NSMutableData *_dataBuffer;
    SSVURLDataConsumer *_dataConsumer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSData *_inputData;
    _Bool _iTunesStoreRequest;
    long long _machineDataRetryCount;
    long long _machineDataStyle;
    SSMetricsPageEvent *_metricsPageEvent;
    CDUnknownBlockType _outputBlock;
    CDUnknownBlockType _prepareRequestBlock;
    NSMutableSet *_protocolRedirectURLs;
    _Bool _recordsMetrics;
    NSURL *_redirectURL;
    NSString *_referrerApplicationName;
    NSString *_referrerURLString;
    NSHTTPURLResponse *_response;
    NSRunLoop *_runLoop;
    SSVFairPlaySAPSession *_sapSession;
    SSVSAPSignaturePolicy *_sapSignaturePolicy;
    _Bool _shouldRetry;
    NSString *_storeFrontSuffix;
    _Bool _stopped;
    SSURLBag *_urlBag;
    SSVURLBagInterpreter *_urlBagInterpreter;
    NSURLRequest *_urlRequest;
}

- (void).cxx_destruct;
- (void)_stopRunLoop;
- (void)_stopIfCancelled;
- (_Bool)_shouldRetryAfterMachineDataRequest:(id)arg1;
- (int)_runRunLoopUntilStopped;
- (void)_runOnce;
- (void)_releaseOutputBlocks;
- (id)_outputForData:(id)arg1 error:(id *)arg2;
- (id)_newURLRequestWithRedirectURL:(id)arg1;
- (void)_loadURLBagInterpreter;
- (void)_keepAliveTimer:(id)arg1;
- (void)_finishWithOutput:(id)arg1 error:(id)arg2;
- (void)_finishWithData:(id)arg1;
- (id)_dataForCachedResponse:(struct _CFCachedURLResponse *)arg1;
- (void)_createAuthKitSession;
- (void)_applyResponseToMetrics:(id)arg1;
- (void)_addSAPSignatureToRequest:(id)arg1;
- (void)_addMachineDataHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2;
- (void)_configureWithURLBagInterpreter:(id)arg1;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)main;
- (void)cancel;
@property(readonly) NSHTTPURLResponse *URLResponse;
@property(readonly) NSURLRequest *URLRequest;
@property(readonly) NSURL *URL;
@property(copy) NSString *storeFrontSuffix;
@property(copy) SSVSAPSignaturePolicy *SAPSignaturePolicy;
@property(retain) SSVFairPlaySAPSession *SAPSession;
@property(copy) NSString *referrerURLString;
@property(copy) NSString *referrerApplicationName;
@property _Bool recordsMetrics;
@property(copy) CDUnknownBlockType prepareRequestBlock;
@property(copy) CDUnknownBlockType outputBlock;
@property long long machineDataStyle;
@property(getter=isITunesStoreRequest) _Bool ITunesStoreRequest;
@property(copy) CDUnknownBlockType expiredOutputBlock;
@property(retain) SSVURLDataConsumer *dataConsumer;
@property(readonly) SSMetricsPageEvent *metricsPageEvent;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)configureWithURLBagDictionary:(id)arg1;
- (void)configureWithURLBag:(id)arg1;
@property(readonly) NSCachedURLResponse *cachedURLResponse;
- (id)initWithURLRequestProperties:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1 fromOperation:(id)arg2;
- (id)init;
- (id)_initSSVLoadURLOperation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

