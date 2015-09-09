//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/IKAppPlayer-Protocol.h>
#import <TVMLKit/TVSASyncPlaybackDelegate-Protocol.h>

@class IKAppDocument, IKAppPlayerBridge, NSArray, NSMutableDictionary, NSMutableSet, NSString, TVSPlayer, UINavigationController, _TVAppDocumentController, _TVPlaylist;
@protocol IKAppMediaItem;

__attribute__((visibility("hidden")))
@interface _TVPlayer : NSObject <IKAppPlayer, TVSASyncPlaybackDelegate>
{
    TVSPlayer *_player;
    _TVPlaylist *_playlist;
    IKAppDocument *_overlayDocument;
    _TVAppDocumentController *_overlayController;
    id _elapsedTimeObserverToken;
    IKAppPlayerBridge *_bridge;
    UINavigationController *_navigationController;
    NSArray *_timedMetadataKeysToObserve;
    NSMutableSet *_timeIntervals;
    NSMutableDictionary *_timeIntervalLastObservedTimes;
    NSMutableDictionary *_timeBoundaryObservers;
    NSMutableSet *_timeBoundariesToObserveWhenPlayerAvailable;
}

+ (long long)_ikMediaItemChangeReasonFromReason:(id)arg1;
+ (long long)_ikStateFromTVSState:(id)arg1;
@property(retain) NSMutableSet *timeBoundariesToObserveWhenPlayerAvailable; // @synthesize timeBoundariesToObserveWhenPlayerAvailable=_timeBoundariesToObserveWhenPlayerAvailable;
@property(retain, nonatomic) NSMutableDictionary *timeBoundaryObservers; // @synthesize timeBoundaryObservers=_timeBoundaryObservers;
@property(retain, nonatomic) NSMutableDictionary *timeIntervalLastObservedTimes; // @synthesize timeIntervalLastObservedTimes=_timeIntervalLastObservedTimes;
@property(retain, nonatomic) NSMutableSet *timeIntervals; // @synthesize timeIntervals=_timeIntervals;
@property(retain, nonatomic) NSArray *timedMetadataKeysToObserve; // @synthesize timedMetadataKeysToObserve=_timedMetadataKeysToObserve;
@property(readonly, nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) __weak IKAppPlayerBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)_playerStateWillChange:(id)arg1;
- (void)_playerStateDidChange:(id)arg1;
- (void)_mediaItemDidChange:(id)arg1;
- (void)_mediaItemWillChange:(id)arg1;
- (void)_initPlayerIfRequired;
- (void)player:(id)arg1 shouldChangeMediaInDirection:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)player:(id)arg1 shouldScanAtRate:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)player:(id)arg1 shouldPauseWithCompletion:(CDUnknownBlockType)arg2;
- (void)player:(id)arg1 shouldPlayFromTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)player:(id)arg1 shouldSeekToDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)player:(id)arg1 shouldSeekToTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingTimeBoundary:(double)arg1;
- (void)observeTimeBoundary:(double)arg1;
- (void)removeTimeIntervalObserver:(unsigned long long)arg1;
- (void)addTimeIntervalObserver:(unsigned long long)arg1;
- (void)cleanup;
- (void)scan:(double)arg1;
- (void)setElapsedTime:(double)arg1 precise:(_Bool)arg2;
@property(readonly, nonatomic) id <IKAppMediaItem> previousMediaItem;
@property(readonly, nonatomic) id <IKAppMediaItem> nextMediaItem;
@property(readonly, nonatomic) id <IKAppMediaItem> currentMediaItem;
@property(retain, nonatomic) _TVPlaylist *playlist;
@property(retain, nonatomic) IKAppDocument *overlayDocument;
- (void)stop;
- (void)pause;
- (void)play;
- (void)present;
@property(readonly, nonatomic) TVSPlayer *player;
- (void)dealloc;
- (id)initWithIKAppPlayer:(id)arg1 navigationController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

