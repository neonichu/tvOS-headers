//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDefaultResourceLoadDelegate : NSObject
{
}

+ (id)sharedResourceLoadDelegate;
- (id)webView:(id)arg1 resource:(id)arg2 willCacheResponse:(id)arg3 fromDataSource:(id)arg4;
- (_Bool)webView:(id)arg1 resource:(id)arg2 shouldUseCredentialStorageForDataSource:(id)arg3;
- (void)webView:(id)arg1 didLoadResourceFromMemoryCache:(id)arg2 response:(id)arg3 length:(long long)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 plugInFailedWithError:(id)arg2 dataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveContentLength:(long long)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4;
- (id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
- (_Bool)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;

@end

