//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/SUScriptInterfaceDelegate-Protocol.h>
#import <iTunesStoreUI/UIWebViewDelegate-Protocol.h>
#import <iTunesStoreUI/WebFrameLoadDelegate-Protocol.h>
#import <iTunesStoreUI/WebPolicyDelegate-Protocol.h>
#import <iTunesStoreUI/WebResourceLoadDelegate-Protocol.h>
#import <iTunesStoreUI/WebUIDelegate-Protocol.h>

@class ISURLRequestPerformance, NSLock, NSMapTable, NSMutableSet, NSSet, NSString, SSAuthenticationContext, SUClientInterface, SUScriptWindowContext, UIWebView;
@protocol SUWebViewManagerDelegate;

@interface SUWebViewManager : NSObject <SUScriptInterfaceDelegate, WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate, UIWebViewDelegate>
{
    SSAuthenticationContext *_authenticationContext;
    SUClientInterface *_clientInterface;
    id <SUWebViewManagerDelegate> _delegate;
    ISURLRequestPerformance *_initialRequestPerformance;
    NSLock *_lock;
    long long _modalAlertClickedIndex;
    id _originalFrameLoadDelegate;
    id _originalPolicyDelegate;
    id _originalResourceLoadDelegate;
    id _originalUIDelegate;
    NSMutableSet *_requireCellularURLs;
    NSMapTable *_scriptInterfaces;
    SUScriptWindowContext *_scriptWindowContext;
    NSSet *_suppressCookiesHosts;
    long long _usingNetworkCount;
    struct __CFSet *_webFramesPendingInitialRequest;
    UIWebView *_webView;
}

+ (id)defaultLocalStoragePath;
@property(readonly, nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) SUScriptWindowContext *scriptWindowContext; // @synthesize scriptWindowContext=_scriptWindowContext;
@property(retain, nonatomic) id originalUIDelegate; // @synthesize originalUIDelegate=_originalUIDelegate;
@property(retain, nonatomic) id originalResourceLoadDelegate; // @synthesize originalResourceLoadDelegate=_originalResourceLoadDelegate;
@property(retain, nonatomic) id originalPolicyDelegate; // @synthesize originalPolicyDelegate=_originalPolicyDelegate;
@property(retain, nonatomic) id originalFrameLoadDelegate; // @synthesize originalFrameLoadDelegate=_originalFrameLoadDelegate;
@property(retain, nonatomic) ISURLRequestPerformance *initialRequestPerformance; // @synthesize initialRequestPerformance=_initialRequestPerformance;
@property(nonatomic) id <SUWebViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (id)_userIdentifier;
- (id)_newAlertWithMessage:(id)arg1;
- (void)_enumerateScriptInterfacesWithBlock:(CDUnknownBlockType)arg1;
- (void)_endUsingNetwork;
- (id)_delegate;
- (void)_cancelUsingNetwork;
- (void)_beginUsingNetwork;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (_Bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 exceptionWasRaised:(id)arg2 sourceId:(long long)arg3 line:(int)arg4 forWebFrame:(id)arg5;
- (void)webView:(id)arg1 failedToParseSource:(id)arg2 baseLineNumber:(unsigned long long)arg3 fromURL:(id)arg4 withError:(id)arg5 forWebFrame:(id)arg6;
- (void)webView:(id)arg1 didParseSource:(id)arg2 fromURL:(id)arg3 sourceId:(long long)arg4 forWebFrame:(id)arg5;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (id)uiWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)uiWebView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)webView:(id)arg1 documentViewDidSetFrame:(struct CGRect)arg2;
- (void)scriptInterface:(id)arg1 requireCellularForResourceWithURL:(id)arg2;
- (id)performanceMetricsForScriptInterface:(id)arg1;
- (id)parentViewControllerForScriptInterface:(id)arg1;
- (id)DOMElementForScriptInterface:(id)arg1 element:(id)arg2;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(_Bool)arg3;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)disconnectFromWebView;
- (void)connectToWebView:(id)arg1;
- (void)dealloc;
- (id)initWithClientInterface:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

