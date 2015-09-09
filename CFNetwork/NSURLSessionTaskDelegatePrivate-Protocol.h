//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class NSError, NSURLRequest, NSURLSession, NSURLSessionTask;

@protocol NSURLSessionTaskDelegatePrivate <NSURLSessionTaskDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)URLSession:(NSURLSession *)arg1 _taskIsWaitingForConnection:(NSURLSessionTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _isWaitingForConnectionWithReason:(long long)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _isWaitingForConnectionWithError:(NSError *)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _willSendRequestForEstablishedConnection:(NSURLRequest *)arg3 completionHandler:(void (^)(NSURLRequest *))arg4;
@end

