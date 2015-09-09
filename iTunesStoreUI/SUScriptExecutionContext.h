//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/ISStoreURLOperationDelegate-Protocol.h>
#import <iTunesStoreUI/SUWebViewDelegate-Protocol.h>

@class ISStoreURLOperation, NSString, SUWebView;

@interface SUScriptExecutionContext : NSObject <ISStoreURLOperationDelegate, SUWebViewDelegate>
{
    ISStoreURLOperation *_loadOperation;
    SUWebView *_webView;
}

- (id)_webView;
- (id)_newLoadOperation;
- (void)_cancelLoadOperation;
- (id)parentViewControllerForWebView:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
@property(readonly, nonatomic) id windowScriptObject;
@property(readonly, nonatomic) struct OpaqueJSContext *globalExecutionContext;
- (void)evaluateScriptWithURLBagKey:(id)arg1;
- (void)evaluateScriptAtURL:(id)arg1;
- (void)callWebScriptMethod:(id)arg1 withArguments:(id)arg2;
- (_Bool)evaluateData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

