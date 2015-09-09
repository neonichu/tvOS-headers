//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebUI/WBSFormAutoFillNode-Protocol.h>

@class NSString, WKWebProcessPlugInNodeHandle;

@interface WBUFormAutoFillNodeWK2 : NSObject <WBSFormAutoFillNode>
{
    WKWebProcessPlugInNodeHandle *_nodeHandle;
}

+ (id)autoFillNodeWithNodeHandle:(id)arg1;
@property(readonly, nonatomic) WKWebProcessPlugInNodeHandle *nodeHandle; // @synthesize nodeHandle=_nodeHandle;
- (void).cxx_destruct;
- (_Bool)isHTMLTextAreaElementUserEdited;
- (_Bool)isHTMLInputElementUserEdited;
- (void)setHTMLInputElementAutofilled:(_Bool)arg1;
- (struct CGRect)elementBounds;
- (id)initWithJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (id)initWithNodeHandle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

