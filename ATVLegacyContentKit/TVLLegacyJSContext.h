//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLJavaScriptContext.h>

#import <ATVLegacyContentKit/TVLJSRootDelegate-Protocol.h>

@class NSLock, NSString, SKPaymentQueue, TVLAppliance, TVLDocument, TVLJSPopUpMenuControl, TVLJSRoot, TVLJSStorage;

@interface TVLLegacyJSContext : TVLJavaScriptContext <TVLJSRootDelegate>
{
    TVLJSStorage *_atvLocalStorage;
    TVLJSRoot *_atvRoot;
    TVLJSStorage *_atvSessionStorage;
    TVLJSPopUpMenuControl *_contextMenu;
    SKPaymentQueue *_paymentQueue;
    NSLock *_queueLock;
    TVLAppliance *_appliance;
    TVLDocument *_feedDocument;
    long long _configuration;
}

+ (void)initialize;
@property(nonatomic) long long configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak TVLDocument *feedDocument; // @synthesize feedDocument=_feedDocument;
@property(nonatomic) __weak TVLAppliance *appliance; // @synthesize appliance=_appliance;
- (void).cxx_destruct;
- (void)_cleanUpContextMenu;
- (_Bool)_isContextMenuSessionValid;
- (void)_endContextMenuSessionByDismissing:(_Bool)arg1;
- (void)_beginContextMenuSession;
- (id)paymentQueue;
- (id)paymentQueueClient;
- (void)_setupGlobalObjects:(struct OpaqueJSContext *)arg1;
- (void)pruneUndefinedFunctions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)evaluateScriptAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateJSContextName;
- (void)jsRoot:(id)arg1 didRequestLoadWithPropertyList:(id)arg2;
- (void)jsRoot:(id)arg1 didSetScreensaverPhotosCollection:(id)arg2;
- (void)dealloc;
- (void)destroy:(CDUnknownBlockType)arg1;
- (id)initWithFeedAppliance:(id)arg1 configuration:(long long)arg2;
- (id)initWithFeedAppliance:(id)arg1;
- (void)pageExhumed:(id)arg1;
- (void)pageBuried:(id)arg1;
- (void)pageUnload:(id)arg1;
- (void)pageLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

