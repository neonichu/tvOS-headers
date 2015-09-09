//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebUI/WBSFormAutoFillFrame-Protocol.h>

@class NSString, WKWebProcessPlugInFrame;

@interface WBUFormAutoFillFrameWK2 : NSObject <WBSFormAutoFillFrame>
{
    WKWebProcessPlugInFrame *_plugInFrame;
}

+ (id)autoFillFrameWithWebProcessPlugInFrame:(id)arg1;
@property(readonly, nonatomic) WKWebProcessPlugInFrame *plugInFrame; // @synthesize plugInFrame=_plugInFrame;
- (void).cxx_destruct;
- (void)enumerateChildFramesUsingBlock:(CDUnknownBlockType)arg1;
- (id)committedURL;
- (struct OpaqueJSValue *)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1;
- (_Bool)containsAnyFormElements;
- (struct OpaqueJSContext *)jsContextForMetadataControllerScriptWorld;
- (id)pageMainFrame;
- (struct OpaqueFormAutoFillFrame *)frameRef;
- (id)_formMetadataController;
- (id)_pageContoller;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithWebProcessPlugInFrame:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

