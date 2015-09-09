//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ManagedConfiguration/NSURLConnectionDataDelegate-Protocol.h>

@class NSArray, NSMutableData, NSString, NSURLConnection;

@interface MCHTTPRequestor : NSObject <NSURLConnectionDataDelegate>
{
    _Bool _didFailDueToMissingCredentials;
    _Bool _shouldUseResponseBodyAsLoginPrompt;
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    NSString *_username;
    NSString *_password;
    NSArray *_anchorCertificates;
    CDUnknownBlockType _completionBlock;
    id _selfReference;
}

@property(nonatomic) _Bool shouldUseResponseBodyAsLoginPrompt; // @synthesize shouldUseResponseBodyAsLoginPrompt=_shouldUseResponseBodyAsLoginPrompt;
@property(nonatomic) _Bool didFailDueToMissingCredentials; // @synthesize didFailDueToMissingCredentials=_didFailDueToMissingCredentials;
@property(retain, nonatomic) id selfReference; // @synthesize selfReference=_selfReference;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSArray *anchorCertificates; // @synthesize anchorCertificates=_anchorCertificates;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)didFinishWithError:(id)arg1;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

