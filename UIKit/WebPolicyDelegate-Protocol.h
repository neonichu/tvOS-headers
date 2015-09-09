//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString, NSURLRequest, WebFrame, WebView;
@protocol WebPolicyDecisionListener;

@protocol WebPolicyDelegate <NSObject>

@optional
- (void)webView:(WebView *)arg1 unableToImplementPolicyWithError:(NSError *)arg2 frame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 decidePolicyForMIMEType:(NSString *)arg2 request:(NSURLRequest *)arg3 frame:(WebFrame *)arg4 decisionListener:(id <WebPolicyDecisionListener>)arg5;
- (void)webView:(WebView *)arg1 decidePolicyForNewWindowAction:(NSDictionary *)arg2 request:(NSURLRequest *)arg3 newFrameName:(NSString *)arg4 decisionListener:(id <WebPolicyDecisionListener>)arg5;
- (void)webView:(WebView *)arg1 decidePolicyForNavigationAction:(NSDictionary *)arg2 request:(NSURLRequest *)arg3 frame:(WebFrame *)arg4 decisionListener:(id <WebPolicyDecisionListener>)arg5;
@end

