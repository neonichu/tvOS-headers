//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebUI/WBSFormAutoFillFrame-Protocol.h>

@class NSString, WebFrame;

@interface WBUFormAutoFillFrameWK1 : NSObject <WBSFormAutoFillFrame>
{
    WebFrame *_webFrame;
}

+ (id)autoFillFrameWithWebFrame:(id)arg1;
@property(readonly, nonatomic) WebFrame *webFrame; // @synthesize webFrame=_webFrame;
- (void).cxx_destruct;
- (void)enumerateChildFramesUsingBlock:(CDUnknownBlockType)arg1;
- (id)committedURL;
- (struct OpaqueJSValue *)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1;
- (_Bool)containsAnyFormElements;
- (struct OpaqueJSContext *)jsContextForMetadataControllerScriptWorld;
- (id)pageMainFrame;
- (struct OpaqueFormAutoFillFrame *)frameRef;
- (id)initWithWebFrame:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

