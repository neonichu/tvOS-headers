//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPAVController, NSString, UIImage;
@protocol MPVolumeControllerDelegate;

@interface MPVolumeController : NSObject
{
    MPAVController *_player;
    NSString *_volumeAudioCategory;
    _Bool _volumeWarningBlinking;
    UIImage *_volumeWarningTrackImage;
    _Bool _debugVolumeWarning;
    _Bool _volumeWarningEnabled;
    float _volumeValue;
    float _EUVolumeLimit;
    id <MPVolumeControllerDelegate> _delegate;
    long long _volumeWarningState;
}

@property(readonly, nonatomic) float EUVolumeLimit; // @synthesize EUVolumeLimit=_EUVolumeLimit;
@property(readonly, nonatomic) long long volumeWarningState; // @synthesize volumeWarningState=_volumeWarningState;
@property(readonly, nonatomic) _Bool volumeWarningEnabled; // @synthesize volumeWarningEnabled=_volumeWarningEnabled;
@property(readonly, nonatomic) float volumeValue; // @synthesize volumeValue=_volumeValue;
@property(nonatomic) __weak id <MPVolumeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (float)_volumeFromAVController;
- (_Bool)_isPlayerInValidState;
- (void)_setVolumeWarningState:(long long)arg1;
- (void)_internalSetVolumeValue:(float)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_volumeDidChange:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)_EUVolumeLimitEnforcedDidChange:(id)arg1;
- (void)_EUVolumeLimitDidChange:(id)arg1;
- (void)_systemMuteDidChange:(id)arg1;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_tearDownNotifications;
- (void)_setupNotifications;
- (void)_forcefullySetVolumeValue:(float)arg1;
- (void)updateVolumeWarningState;
- (void)updateVolumeValue;
@property(copy, nonatomic) NSString *volumeAudioCategory;
@property(retain, nonatomic) MPAVController *player;
@property(nonatomic) _Bool muted;
- (float)setVolumeValue:(float)arg1;
- (void)dealloc;
- (id)init;

@end

