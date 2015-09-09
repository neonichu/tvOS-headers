//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAd/ADBannerViewInternalDelegate-Protocol.h>
#import <iAd/ADInterstitialAdDelegate-Protocol.h>

@class ADBannerView, ADInterstitialAd, NSData, NSError, NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface ADPolicyEngine : NSObject <ADBannerViewInternalDelegate, ADInterstitialAdDelegate>
{
    _Bool _visuallyEngaged;
    _Bool _enabled;
    _Bool _canAutoEnable;
    _Bool _sharedInterstitialAdIsInUse;
    _Bool _sharedMediaPlayerVideoAdClaimed;
    double _nextInterstitialPresentationTime;
    double _nextPrerollPlaybackTime;
    NSObject<OS_dispatch_queue> *_policyEngineQueue;
    NSMutableArray *_queuedCommands;
    NSData *_heartbeatToken;
    NSError *_heartbeatTokenError;
    double _heartbeatTokenExpiration;
    ADInterstitialAd *_sharedInterstitialAd;
    NSString *_sharedInterstitialSection;
    NSURL *_sharedInterstitialServerURL;
    NSString *_sharedInterstitialAuthenticationUserName;
    ADBannerView *_sharedMediaPlayerVideoAd;
    NSError *_lastSharedMediaPlayerVideoAdError;
    NSData *_currentStationData;
    NSData *_currentSongData;
}

+ (id)sharedEngine;
@property(retain, nonatomic) NSData *currentSongData; // @synthesize currentSongData=_currentSongData;
@property(retain, nonatomic) NSData *currentStationData; // @synthesize currentStationData=_currentStationData;
@property(retain, nonatomic) NSError *lastSharedMediaPlayerVideoAdError; // @synthesize lastSharedMediaPlayerVideoAdError=_lastSharedMediaPlayerVideoAdError;
@property(nonatomic) _Bool sharedMediaPlayerVideoAdClaimed; // @synthesize sharedMediaPlayerVideoAdClaimed=_sharedMediaPlayerVideoAdClaimed;
@property(retain, nonatomic) ADBannerView *sharedMediaPlayerVideoAd; // @synthesize sharedMediaPlayerVideoAd=_sharedMediaPlayerVideoAd;
@property(copy, nonatomic) NSString *sharedInterstitialAuthenticationUserName; // @synthesize sharedInterstitialAuthenticationUserName=_sharedInterstitialAuthenticationUserName;
@property(copy, nonatomic) NSURL *sharedInterstitialServerURL; // @synthesize sharedInterstitialServerURL=_sharedInterstitialServerURL;
@property(copy, nonatomic) NSString *sharedInterstitialSection; // @synthesize sharedInterstitialSection=_sharedInterstitialSection;
@property(nonatomic) _Bool sharedInterstitialAdIsInUse; // @synthesize sharedInterstitialAdIsInUse=_sharedInterstitialAdIsInUse;
@property(retain, nonatomic) ADInterstitialAd *sharedInterstitialAd; // @synthesize sharedInterstitialAd=_sharedInterstitialAd;
@property(nonatomic) double heartbeatTokenExpiration; // @synthesize heartbeatTokenExpiration=_heartbeatTokenExpiration;
@property(retain, nonatomic) NSError *heartbeatTokenError; // @synthesize heartbeatTokenError=_heartbeatTokenError;
@property(retain, nonatomic) NSData *heartbeatToken; // @synthesize heartbeatToken=_heartbeatToken;
@property(nonatomic) _Bool canAutoEnable; // @synthesize canAutoEnable=_canAutoEnable;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) NSMutableArray *queuedCommands; // @synthesize queuedCommands=_queuedCommands;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *policyEngineQueue; // @synthesize policyEngineQueue=_policyEngineQueue;
@property(nonatomic) double nextPrerollPlaybackTime; // @synthesize nextPrerollPlaybackTime=_nextPrerollPlaybackTime;
@property(nonatomic) double nextInterstitialPresentationTime; // @synthesize nextInterstitialPresentationTime=_nextInterstitialPresentationTime;
@property(nonatomic) _Bool visuallyEngaged; // @synthesize visuallyEngaged=_visuallyEngaged;
- (void)reportListeningPresenceEvent:(int)arg1;
- (void)songSkipped;
- (void)songStopped;
- (void)songBeganWithTags:(id)arg1;
- (void)songBeganWithTags:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stationChanged:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setStationData:(id)arg1 withInitialTrackBlobs:(id)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (_Bool)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(_Bool)arg2;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerViewWillLoadAd:(id)arg1;
- (void)sharedMediaPlayerVideoAdActionDidFinish;
- (void)sharedMediaPlayerVideoAdDidFailToReceiveAdWithError:(id)arg1;
- (void)sharedMediaPlayerVideoAdDidLoad;
- (void)sharedMediaPlayerVideoAdWillLoad;
- (void)relinquishSharedMediaPlayerVideoAd;
- (_Bool)claimSharedMediaPlayerVideoAdWithError:(id *)arg1;
- (void)interstitialAdDidUnload:(id)arg1;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)finishedPresentingSharedInterstitialAd;
- (_Bool)canPresentSharedInterstitialAdWithResultMessage:(id *)arg1;
- (void)removeRecordForAccountWithIdentifier:(id)arg1;
- (void)optimalTransmissionWindowDidOpen;
- (void)acquireMatchSlotWithBodyParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acquireMatchSlotWithUserConfirmation:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportClientEvent:(id)arg1;
- (void)reportStationTileImpression:(id)arg1;
- (void)didStopPlaybackOnStation:(id)arg1;
- (void)didBeginPlaybackOnStation:(id)arg1 song:(id)arg2;
- (void)didEnterStation:(id)arg1;
- (void)requestAdsForSlot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)heartbeatToken:(id *)arg1;
- (void)setHeartbeatToken:(id)arg1 expirationDate:(double)arg2 error:(id)arg3;
- (void)_adSheetConnectionBootstrapped;
- (void)_performWhenAdSheetConnectionEstablished:(CDUnknownBlockType)arg1;
- (void)adSheetDidIdleDisablePolicyEngine;
- (void)disablePolicyEngine;
- (void)enablePolicyEngine;
- (void)_enablePolicyEngineWithReason:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

