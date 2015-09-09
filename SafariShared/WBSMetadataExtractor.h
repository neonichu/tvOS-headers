//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext, WKWebProcessPlugInFrame, WKWebProcessPlugInScriptWorld;

@interface WBSMetadataExtractor : NSObject
{
    WKWebProcessPlugInScriptWorld *_webProcessPlugInScriptWorld;
    JSContext *_context;
    WKWebProcessPlugInFrame *_webProcessPlugInFrame;
}

+ (id)metadataExtractorScriptSource;
@property(readonly, nonatomic) WKWebProcessPlugInFrame *webProcessPlugInFrame; // @synthesize webProcessPlugInFrame=_webProcessPlugInFrame;
- (void).cxx_destruct;
- (id)faviconURLs;
- (id)appleTouchIconURLs;
- (id)_resultForInvokingFunctionWithName:(id)arg1;
@property(readonly, nonatomic) JSContext *context;
- (id)makeContext;
- (void)dealloc;
- (id)initWithWebProcessPlugInFrame:(id)arg1 useNormalWorld:(_Bool)arg2;
- (id)initWithWebProcessPlugInFrame:(id)arg1;

@end

