//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAd/ADAdSheetConnectionDelegate-Protocol.h>
#import <iAd/ADAdSheetProxyDelegate-Protocol.h>
#import <iAd/ADSession_RPC-Protocol.h>

@class ADAdSheetConnection, NSMutableArray, NSString;
@protocol ADSSession_RPC;

@interface ADSession : NSObject <ADSession_RPC, ADAdSheetProxyDelegate, ADAdSheetConnectionDelegate>
{
    _Bool _applicationCanReceiveBackgroundAds;
    int _classicUnavailableToken;
    NSMutableArray *_adSpaces;
    ADAdSheetConnection *_connection;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ADAdSheetConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int classicUnavailableToken; // @synthesize classicUnavailableToken=_classicUnavailableToken;
@property(retain, nonatomic) NSMutableArray *adSpaces; // @synthesize adSpaces=_adSpaces;
@property(nonatomic) _Bool applicationCanReceiveBackgroundAds; // @synthesize applicationCanReceiveBackgroundAds=_applicationCanReceiveBackgroundAds;
- (void)_appDidBecomeActive;
- (void)requestAdsForContext:(id)arg1 serverURL:(id)arg2 creativeTypes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestAdsForContext:(id)arg1 creativeTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reportPrerollRequest;
- (void)addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2;
- (void)addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2 privateSegment:(_Bool)arg3;
- (void)requestAttributionDetailsWithBlock:(CDUnknownBlockType)arg1;
- (void)lookupAdConversionDetails:(CDUnknownBlockType)arg1;
- (void)determineAppInstallAttributionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_remote_policyEngineDidIdleDisable;
- (void)_remote_heartbeatTokenDidChange:(id)arg1 expirationDate:(double)arg2 error:(id)arg3;
- (void)unregisterAdSpace:(id)arg1;
- (void)registerAdSpace:(id)arg1;
- (void)adSheetConnectionLost;
- (void)adSheetConnectionEstablished;
- (void)configureConnection:(id)arg1;
- (id)adSheetMachServiceName;
- (id)rpcProxyWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <ADSSession_RPC> rpcProxy;
- (void)performWhenConnected:(CDUnknownBlockType)arg1;
- (_Bool)shouldConnectToAdSheet;
- (id)additionalAdSheetLaunchOptions;
- (_Bool)shouldLaunchAdSheet;
- (id)_linkedOnVersion;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

