//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/AVAudioSessionDelegateMediaPlayerOnly-Protocol.h>
#import <MediaPlayer/MPAVErrorResolverDelegate-Protocol.h>
#import <MediaPlayer/MPAVPlaylistManagerDelegate-Protocol.h>
#import <MediaPlayer/MPAVRoutingControllerDelegate-Protocol.h>

@class AVAudioSessionMediaPlayerOnly, AVPlayerLayer, MPAVControllerToAggregateDCommunicator, MPAVErrorResolver, MPAVItem, MPAVPlaylistManager, MPAVRoute, MPAVRoutingController, MPMediaItem, MPMediaQuery, MPQueueFeeder, MPQueuePlayer, MPVideoView, NSArray, NSDate, NSMapTable, NSMutableArray, NSMutableSet, NSNotification, NSString;
@protocol OS_dispatch_source;

@interface MPAVController : NSObject <AVAudioSessionDelegateMediaPlayerOnly, MPAVPlaylistManagerDelegate, MPAVRoutingControllerDelegate, MPAVErrorResolverDelegate>
{
    _Bool _currentItemDidLoad;
    _Bool _currentItemStartedAsCloudItem;
    _Bool _didResolveError;
    _Bool _disallowsAMRAudio;
    _Bool _disableAirPlayMirroringDuringPlayback;
    NSDate *_itemDidChangeDate;
    _Bool _shouldPreventStateChangesForRateChange;
    unsigned long long _stallBackgroundTaskIdentifier;
    _Bool _usesAudioOnlyModeForExternalPlayback;
    MPAVPlaylistManager *_playlistManager;
    long long _playbackMode;
    _Bool _valid;
    MPAVRoutingController *_routingController;
    MPAVRoute *_pickedRoute;
    MPAVErrorResolver *_itemErrorResolver;
    AVPlayerLayer *_videoLayer;
    unsigned long long _videoLayerUsageCount;
    MPVideoView *_videoView;
    unsigned long long _tickTimerEnabled;
    struct __CFRunLoopTimer *_tickTimer;
    double _tickInterval;
    struct __CFRunLoopTimer *_currentItemBookkeepingTimer;
    long long _indexChangeDirection;
    unsigned long long _itemIndexAtDeath;
    long long _lastDisconnectReason;
    double _lastKnownTimeBeforeDeath;
    double _lastPlaybackIndexChangeTime;
    double _lastSetTime;
    double _lastSetTimeChangeTime;
    unsigned int _hasDelayedCurrentTimeToSet:1;
    unsigned int _forceDelayedCurrentTimeToSet:1;
    double _delayedCurrentTimeToSet;
    long long _delayedCurrentTimeOptions;
    unsigned long long _lastSetTimeMarker;
    double _temporaryChapterTime;
    unsigned int _autoPlayWhenLikelyToKeepUp:1;
    unsigned int _autoplayDisabledForCurrentItem:1;
    double _nextFadeOutDuration;
    _Bool _hasPendingRate;
    MPAVItem *_pendingRateItem;
    float _pendingRate;
    _Bool _pendingChangeForScanning;
    id _boundaryTimeObserver;
    NSArray *_boundaryTimes;
    unsigned long long _boundaryTimeIndexLastPosted;
    NSMutableArray *_observerInfos;
    NSMapTable *_observerInfoToCoreMediaObserver;
    float _rateBeforeSeek;
    float _inflightSeekRate;
    unsigned long long _scanLevel;
    long long _scanDirection;
    long long _resetRateAfterSeekingUpdateDisabled;
    long long _seeklessState;
    unsigned int _isSeekingOrScrubbing:1;
    unsigned int _resetRateAfterSeeking:1;
    unsigned int _activeRewindHoldingAtStart:1;
    double _lastSeekableEnd;
    double _whenSawSeekableEnd;
    double _maxSeekableFwd;
    double _seekFwdSlop;
    double _lastSeekableStart;
    double _whenSawSeekableStart;
    double _maxSeekableRev;
    double _seekRevSlop;
    unsigned int _canSeekRev:1;
    unsigned int _canSeekFwd:1;
    unsigned int _alwaysPlayWheneverPossible:1;
    unsigned int _stopAtEnd:1;
    unsigned int _didReachEnd:1;
    unsigned int _pausedDuringInterruption:1;
    unsigned int _resumePlaybackWhenActive:1;
    unsigned int _useApplicationAudioSession:1;
    unsigned int _playInBackgroundUserDefaultEnabled:1;
    unsigned int _canPlayFastForward:1;
    unsigned int _canPlayFastReverse:1;
    unsigned int _shouldAutoclearDisplayOverride:1;
    long long _state;
    long long _displayOverridePlaybackState;
    unsigned long long _bufferingState;
    NSNotification *_delayedPlaybackStateNotification;
    NSObject<OS_dispatch_source> *_stallTimerSource;
    _Bool _isConnectingPlayer;
    MPAVControllerToAggregateDCommunicator *_aggregateDCommunicator;
    double _itemInitialBookmarkTime;
    float _rateBeforeResignActive;
    long long _ubiquitousBookkeepingDisabledCount;
    double _secondsSinceUbiquitousCheckpoint;
    Class _videoViewClass;
    NSString *_audioSessionModeOverride;
    double _lastInterruptionEnd;
    _Bool _shouldEnforceHDCP;
    NSMutableSet *_clientsWantingExternalPlayback;
    double _lastLoadedTime;
    long long _currentItemRevisionID;
    unsigned long long _numberOfErrorsSinceLastPlay;
    _Bool _shouldSkipToNextTrackOnResumeFromInterruption;
    _Bool _muted;
    _Bool _useAirPlayMusicMode;
    _Bool _managesAirPlayBehaviors;
}

+ (Class)playlistManagerClass;
+ (id)_playerKeysToObserve;
+ (id)_itemKeysToObserve;
+ (_Bool)outputSupportsAC3;
+ (_Bool)isNetworkSupportedPath:(id)arg1;
+ (void)initialize;
@property(nonatomic) _Bool managesAirPlayBehaviors; // @synthesize managesAirPlayBehaviors=_managesAirPlayBehaviors;
@property(nonatomic) _Bool useAirPlayMusicMode; // @synthesize useAirPlayMusicMode=_useAirPlayMusicMode;
@property(retain, nonatomic) NSString *audioSessionModeOverride; // @synthesize audioSessionModeOverride=_audioSessionModeOverride;
@property(nonatomic) _Bool shouldEnforceHDCP; // @synthesize shouldEnforceHDCP=_shouldEnforceHDCP;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property(readonly, nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) double nextFadeOutDuration; // @synthesize nextFadeOutDuration=_nextFadeOutDuration;
@property(nonatomic) _Bool shouldSkipToNextTrackOnResumeFromInterruption; // @synthesize shouldSkipToNextTrackOnResumeFromInterruption=_shouldSkipToNextTrackOnResumeFromInterruption;
@property(nonatomic) long long displayOverridePlaybackState; // @synthesize displayOverridePlaybackState=_displayOverridePlaybackState;
- (void).cxx_destruct;
- (void)_resumePlaybackIfNecessary;
- (void)_pausePlaybackIfNecessaryIgnoringVideoLayerAttachment:(_Bool)arg1;
- (void)_pausePlaybackIfNecessary;
- (_Bool)_canPlayItem:(id)arg1;
- (_Bool)_itemIsRestricted:(id)arg1;
- (void)_playbackFailedWithError:(id)arg1 canResolve:(_Bool)arg2;
- (id)_pickedRoute;
- (void)_resumeTickTimer;
- (void)_pauseTickTimer;
- (id)_extractImageFromMetadata:(id)arg1;
- (void)_clearSeekingIntervalsForStreaming;
- (void)_updateSeekingIntervalsForStreaming;
- (void)_delayedSetCurrentTime;
- (void)_updateTypeForItem:(id)arg1;
- (void)_updateScanningRate;
- (void)_updatePlaybackModeForItem:(id)arg1;
- (void)setRateForScanning:(float)arg1;
- (void)_updateProgress:(struct __CFRunLoopTimer *)arg1;
- (void)_unregisterForAVItemNotifications:(id)arg1;
- (void)_setValid:(_Bool)arg1;
- (void)_setVideoLayerAttachedToPlayer:(_Bool)arg1 force:(_Bool)arg2 pauseIfNecessary:(_Bool)arg3;
- (_Bool)_isVideoLayerAttachedToPlayer;
- (void)_setState:(long long)arg1;
- (void)_setItemErrorResolver:(id)arg1;
- (void)_clearResetRateAfterSeeking;
- (void)_configureUpdateCurrentItemBookkeepingTimer;
- (void)_cancelUpdateCurrentItemBookkeepingTimer;
- (void)_resumeBookkeepingTimer;
- (void)_pauseBookkeepingTimer;
- (void)_scheduleUpdateCurrentItemBookkeepingTimer;
@property(readonly, nonatomic) long long _displayPlaybackState;
- (void)setAutoclearingDisplayOverridePlaybackState:(long long)arg1;
- (void)autoclearDisplayOverride;
- (void)_postPlaybackStateChangedNotificationWithOriginalState:(long long)arg1 newState:(long long)arg2 delayable:(_Bool)arg3;
- (void)_delayedPostPlaybackStateChangedNotification;
- (void)_setActionAtEndAttributeForState:(long long)arg1;
- (void)_setBufferingState:(unsigned long long)arg1;
- (_Bool)_hasEnoughDataToPlay;
- (void)_attemptAutoPlay;
- (void)_resetInternalState;
- (void)_registerForAVItemNotifications:(id)arg1;
- (void)_reloadTimeMarkerObservationsForItem:(id)arg1;
- (void)_checkForBoundaryTimeCrossing;
- (unsigned long long)_currentIndexInBoundaryCMTimes:(id)arg1;
- (id)embeddedDataTimesForItem:(id)arg1;
- (void)_prepareToPlayItem:(id)arg1;
- (void)_endSeekAndChangeRate:(_Bool)arg1;
@property(retain, nonatomic, getter=_playlistManager) MPAVPlaylistManager *playlistManager;
- (void)_unregisterForPlaylistManager:(id)arg1;
- (void)_unregisterForPlayer:(id)arg1;
- (void)_registerForPlaylistManager:(id)arg1;
- (double)_currentTimeWithPreloadedPlayerTime:(_Bool)arg1 value:(CDStruct_1b6d18a9)arg2;
- (void)_configureAVPlaylistManager;
- (void)_clearVideoLayer:(_Bool)arg1;
- (_Bool)_changeChapterTimeMarkerIndexBy:(long long)arg1;
- (void)_cancelStallTimer;
@property(readonly, nonatomic) MPQueueFeeder *feeder;
- (void)_applyAirPlayMusicModeForItem:(id)arg1 shouldIgnorePlaybackQueueTransactions:(_Bool)arg2;
- (void)_applyAirPlayMusicMode;
- (void)_verifyDisplayProtection;
- (void)_delayedUpdateTimeMarker;
- (void)_delayedUpdateScanningRate;
- (void)_delayedPlaybackIndexChange;
- (void)notifyAVPlayerItemDidChange:(id)arg1;
- (void)notifyAVPlayerItemWillChange:(id)arg1;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_updateCurrentTimeToBookmarkTimeForDynamicPropertyChange;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_networkChangedNotification:(id)arg1;
- (void)airPlayVideoEnded;
- (void)_volumeDidChangeNotification:(id)arg1;
- (void)_tracksDidChange:(id)arg1;
- (void)_timedMetadataAvailable:(id)arg1;
- (void)_timeHasJumpedNotification:(id)arg1;
- (void)_streamUnlikelyToKeepUp:(id)arg1;
- (void)_streamRanDry:(id)arg1;
- (void)_streamLikelyToKeepUp:(id)arg1;
- (void)_streamBufferFull:(id)arg1;
- (void)_sizeDidChange:(id)arg1;
- (void)_serverConnectionDidDie:(id)arg1;
- (void)_disconnectAVPlayerWithReason:(long long)arg1;
- (void)_connectAVPlayer;
- (void)_rateDidChange:(id)arg1;
- (void)_updateCurrentItemBookkeepingForTimerCallback;
- (void)_updateCurrentItemBookkeepingMarkedAsCheckpoint:(_Bool)arg1;
@property(nonatomic) _Bool ubiquitousBookkeepingEnabled;
- (void)endInterruptionFromInterruptor:(id)arg1 category:(id)arg2 flags:(unsigned long long)arg3;
- (void)beginInterruption;
- (void)_itemWillChange:(id)arg1;
- (void)_itemReadyToPlay:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemFailedToPlayToEnd:(id)arg1;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (id)_playerFailedToQueueNotification:(id)arg1;
- (void)_itemDidChange:(id)arg1;
- (_Bool)_isChangingPlayerProperties;
- (void)_itemPlaybackModeAvailableNotification:(id)arg1;
- (void)_itemTypeAvailableNotification:(id)arg1;
- (void)_itemTimeMarkersAvailableNotification:(id)arg1;
- (void)_itemAssetIsLoadedNotification:(id)arg1;
- (void)_isExternalPlaybackActiveDidChange:(id)arg1;
- (void)_firstVideoFrameDisplayed:(id)arg1;
- (void)_durationDidChange:(id)arg1;
- (void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)arg1;
- (void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)arg1;
- (void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(long long)arg3;
- (void)routingControllerExternalScreenTypeDidChange:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)playlistManager:(id)arg1 queueCoordinator:(id)arg2 willInsertItem:(id)arg3 afterItem:(id)arg4;
- (void)playlistManager:(id)arg1 didFailLoadingAllItemsForQueueFeeder:(id)arg2;
- (void)playlistManager:(id)arg1 didTransitionToPlaylistFeeder:(id)arg2;
- (void)skipToSeekableEnd;
- (void)skipToSeekableStart;
- (_Bool)canSkipToSeekableEnd;
- (_Bool)canPlayFastReverse;
- (_Bool)canSeekForwards;
- (_Bool)canSeekBackwards;
- (_Bool)isLiveStreaming;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (double)timeOfPlayableEnd;
- (double)timeOfPlayableStart;
@property(readonly, nonatomic) double playableDurationOfCurrentItemIfAvailable;
@property(readonly, nonatomic) double durationOfCurrentItemIfAvailable;
@property(readonly, nonatomic) _Bool showPlaybackStateOverlaysOnTVOut;
- (_Bool)shouldHaveNoActionAtEndForState:(long long)arg1;
- (void)finalizeBookkeepingNow;
- (void)updateBookkeepingNow;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadWithPlaybackContext:(id)arg1;
@property(readonly, nonatomic) MPVideoView *videoView;
@property(readonly, nonatomic) AVPlayerLayer *videoLayer;
@property(nonatomic, getter=destinationIsTVOut, setter=setDestinationIsTVOut:) _Bool destinationIsTVOut;
@property(nonatomic) _Bool usesAudioOnlyModeForExternalPlayback;
- (void)_setLastSetTime:(double)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(_Bool)arg1 shouldIgnorePlaybackQueueTransactions:(_Bool)arg2;
- (void)setCurrentTime:(double)arg1 options:(long long)arg2;
@property(copy, nonatomic) NSString *externalPlaybackVideoGravity;
- (void)setActive:(_Bool)arg1;
@property(readonly, nonatomic) AVAudioSessionMediaPlayerOnly *_playerAVAudioSession;
- (id)preferredLanguages;
@property(readonly, nonatomic) long long externalPlaybackType;
- (id)_expectedAssetTypesForPlaybackMode:(long long)arg1;
- (void)endUsingVideoLayer;
@property(nonatomic) _Bool disallowsAMRAudio;
@property(readonly, nonatomic) _Bool currentItemIsRental;
- (void)beginUsingVideoLayer;
@property(readonly, nonatomic) MPQueuePlayer *avPlayer;
- (void)applyShuffleSettings;
- (void)applyRepeatSettings;
- (void)enableAutoplayForCurrentItem;
- (void)disableAutoplayForCurrentItem;
@property(readonly, nonatomic) _Bool isCurrentItemReady;
@property(nonatomic) _Bool useApplicationAudioSession;
@property(readonly, nonatomic) MPAVRoutingController *routingController;
@property(nonatomic) _Bool stopAtEnd;
@property(readonly, nonatomic) NSString *routeNameForVolumeControl;
@property(nonatomic) float volume;
@property(readonly, nonatomic) _Bool hasVolumeControl;
@property(nonatomic) unsigned long long shuffleType;
@property(nonatomic) unsigned long long repeatType;
- (_Bool)_setRate:(float)arg1 forScanning:(_Bool)arg2 withItem:(id)arg3;
- (_Bool)_setRate:(float)arg1 forScanning:(_Bool)arg2;
- (_Bool)setRate:(float)arg1;
@property(nonatomic) _Bool closedCaptioningEnabled;
- (void)setDisableAirPlayMirroringDuringPlayback:(_Bool)arg1 shouldIgnorePlaybackQueueTransactions:(_Bool)arg2;
@property(nonatomic) _Bool disableAirPlayMirroringDuringPlayback;
@property(readonly, nonatomic) float rate;
@property(readonly, nonatomic) float _playerRate;
@property(nonatomic) _Bool alwaysPlayWheneverPossible;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic, getter=isShuffled) _Bool shuffled;
- (_Bool)shouldDisplayAsPlaying;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic) _Bool isExternalPlaybackActive;
- (long long)_seeklessStateForState:(long long)arg1;
- (_Bool)_showsPlayingWhenInState:(long long)arg1;
@property(readonly, nonatomic) MPMediaQuery *currentMediaQuery;
@property(readonly, nonatomic) MPMediaItem *currentMediaItem;
@property(readonly, nonatomic) MPAVItem *currentItem;
@property(readonly, nonatomic) unsigned long long bufferingState;
@property(nonatomic) _Bool autoPlayWhenLikelyToKeepUp;
- (void)setClient:(id)arg1 wantsToAllowExternalPlayback:(_Bool)arg2 shouldIgnorePlaybackQueueTransactions:(_Bool)arg3;
- (void)setClient:(id)arg1 wantsToAllowExternalPlayback:(_Bool)arg2;
- (_Bool)allowsExternalPlayback;
@property(readonly, nonatomic) unsigned long long activeShuffleType;
@property(readonly, nonatomic) unsigned long long activeRepeatType;
- (void)tickTimerFired;
@property(readonly, nonatomic, getter=isTickTimerEnabled) _Bool tickTimerEnabled;
- (void)endTickTimer;
- (void)beginTickTimerWithInterval:(double)arg1;
- (void)_addObserverInfo:(id)arg1 forCoreMediaObserver:(id)arg2 forInitialCreation:(_Bool)arg3;
- (void)removeTimeObserver:(id)arg1;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)forceRestartPlaybackIfNecessary;
- (void)togglePlaybackWithOptions:(unsigned long long)arg1;
- (void)togglePlayback;
@property(nonatomic) double currentTime;
- (void)playChapterTimeMarkerAtIndex:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;
- (void)playChapterTimeMarkerAtIndex:(unsigned long long)arg1;
- (void)playItemAtIndex:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;
- (void)playItemAtIndex:(unsigned long long)arg1 forceRestart:(_Bool)arg2;
- (void)playItemAtIndex:(unsigned long long)arg1;
- (void)_playWithOptions:(unsigned long long)arg1 allowsEnablingAutoPlay:(_Bool)arg2;
- (void)playWithOptions:(unsigned long long)arg1;
- (void)play;
- (void)_pauseWithFadeout:(float)arg1 forScanning:(_Bool)arg2;
- (void)pause;
- (void)pauseWithFadeout:(float)arg1;
- (void)endPlayback;
@property(readonly, nonatomic) double currentMonotonousTime;
- (double)currentTimeForBookmarking;
@property(readonly, nonatomic, getter=isRewindHoldingAtStart) _Bool rewindHoldingAtStart;
- (_Bool)isSeekingOrScrubbing;
- (void)endSeek;
- (_Bool)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(_Bool)arg3 allowSkippingUnskippableContent:(_Bool)arg4 error:(id *)arg5;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(_Bool)arg3 allowSkippingUnskippableContent:(_Bool)arg4;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(_Bool)arg3;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2;
- (void)changePlaybackIndexBy:(long long)arg1;
- (void)setPlaybackIndex:(long long)arg1;
- (void)setPlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (void)_clearLastSetTimeIfPlayerTimeIsValid;
- (void)_updateCurrentTimeToNextStartTimeForQueueFeeder:(id)arg1 withItemIndex:(long long)arg2;
- (void)beginSeek:(int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

