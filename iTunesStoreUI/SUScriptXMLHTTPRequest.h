//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDictionary, NSMutableDictionary, NSString, SSMutableURLRequestProperties, SUXMLHTTPRequestOperation, WebScriptObject;
@protocol SUScriptXMLHTTPRequestDelegate;

@interface SUScriptXMLHTTPRequest : SUScriptObject
{
    id <SUScriptXMLHTTPRequestDelegate> _delegate;
    NSMutableDictionary *_functions;
    SUXMLHTTPRequestOperation *_operation;
    unsigned long long _readyState;
    SSMutableURLRequestProperties *_requestProperties;
    NSDictionary *_responseHeaders;
    NSString *_responseText;
    unsigned long long _status;
    NSString *_statusText;
    unsigned long long _timeout;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
@property __weak id <SUScriptXMLHTTPRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_setScriptObject:(id)arg1 forFunctionName:(id)arg2;
- (id)_scriptObjectForFunctionName:(id)arg1;
- (void)_callFunctionWithName:(id)arg1 arguments:(id)arg2;
@property unsigned long long timeout;
@property(readonly, copy) NSString *statusText;
@property(readonly) unsigned long long status;
@property(retain) WebScriptObject *ontimeout;
@property(retain) WebScriptObject *onreadystatechange;
@property(retain) WebScriptObject *onloadend;
@property(retain) WebScriptObject *onload;
@property(retain) WebScriptObject *onerror;
@property(retain) WebScriptObject *onabort;
@property(readonly, copy) NSString *responseText;
@property(readonly) unsigned long long readyState;
- (id)_className;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)sendWithBodyData:(id)arg1;
- (void)openWithHTTPMethod:(id)arg1 URL:(id)arg2 isAsync:(id)arg3 username:(id)arg4 password:(id)arg5;
- (id)getResponseHeader:(id)arg1;
- (id)getAllResponseHeaders;
- (void)abort;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

