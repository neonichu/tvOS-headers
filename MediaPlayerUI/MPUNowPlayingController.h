//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIImage;
@protocol MPUNowPlayingDelegate, OS_dispatch_source;

@interface MPUNowPlayingController : NSObject
{
    NSObject<OS_dispatch_source> *_timeInformationTimer;
    NSDictionary *_currentNowPlayingInfo;
    double _currentElapsed;
    double _currentDuration;
    long long _isPlaying;
    NSString *_currentNowPlayingAppDisplayID;
    _Bool _hasValidCurrentNowPlayingAppDisplayID;
    _Bool _isRegisteredForNowPlayingNotifications;
    _Bool _isUpdatingNowPlayingInfo;
    _Bool _isUpdatingPlaybackState;
    _Bool _isUpdatingNowPlayingApp;
    _Bool _wantsTimeInformationUpdates;
    UIImage *_cachedNowPlayingArtwork;
    _Bool _cachedArtworkDirty;
    _Bool _currentNowPlayingAppIsRunning;
    _Bool _shouldUpdateNowPlayingArtwork;
    id <MPUNowPlayingDelegate> _delegate;
    double _timeInformationUpdateInterval;
}

@property(nonatomic) _Bool shouldUpdateNowPlayingArtwork; // @synthesize shouldUpdateNowPlayingArtwork=_shouldUpdateNowPlayingArtwork;
@property(nonatomic) double timeInformationUpdateInterval; // @synthesize timeInformationUpdateInterval=_timeInformationUpdateInterval;
@property(readonly, nonatomic) double currentElapsed; // @synthesize currentElapsed=_currentElapsed;
@property(readonly, nonatomic) _Bool currentNowPlayingAppIsRunning; // @synthesize currentNowPlayingAppIsRunning=_currentNowPlayingAppIsRunning;
@property(nonatomic) __weak id <MPUNowPlayingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_isUpdatingTimeInformation;
- (void)_updateTimeInformationAndCallDelegate:(_Bool)arg1;
- (void)_updateNowPlayingAppDisplayID;
- (void)_updatePlaybackState;
- (void)_updateCurrentNowPlaying;
- (void)_stopUpdatingTimeInformation;
- (void)_unregisterForNotifications;
- (void)_startUpdatingTimeInformation;
- (void)_registerForNotifications;
- (void)update;
- (void)stopUpdating;
- (void)startUpdating;
@property(readonly, nonatomic) double currentDuration;
@property(readonly, nonatomic) _Bool nowPlayingAppIsSystemMediaApp;
@property(readonly, nonatomic) NSString *nowPlayingAppDisplayID;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) UIImage *currentNowPlayingArtwork;
@property(readonly, nonatomic) NSDictionary *currentNowPlayingInfo;
- (void)dealloc;
- (id)init;

@end

