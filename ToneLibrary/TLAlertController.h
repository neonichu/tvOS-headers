//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TLAccessQueue, TLAlert, TLAlertLoopPlayer;

@interface TLAlertController : NSObject
{
    TLAccessQueue *_accessQueue;
    NSMutableDictionary *_alertsBySoundIDs;
    TLAlertLoopPlayer *_loopPlayer;
    TLAlert *_repeatedlyPlayingAlert;
}

+ (id)sharedAlertController;
@property(retain, nonatomic, setter=_setRepeatedlyPlayingAlert:) TLAlert *_repeatedlyPlayingAlert; // @synthesize _repeatedlyPlayingAlert;
@property(retain, nonatomic, setter=_setLoopPlayer:) TLAlertLoopPlayer *_loopPlayer; // @synthesize _loopPlayer;
@property(retain, nonatomic, setter=_setAlertsBySoundIDs:) NSMutableDictionary *_alertsBySoundIDs; // @synthesize _alertsBySoundIDs;
@property(retain, setter=_setAccessQueue:) TLAccessQueue *_accessQueue; // @synthesize _accessQueue;
- (void)_didReachTimeoutForSystemSound:(id)arg1;
- (void)_systemSoundDidFinishPlaying:(unsigned int)arg1;
- (void)_stopRepeatedlyPlayingAlert:(id)arg1 withFadeOutDuration:(double)arg2 options:(unsigned long long)arg3 allowingFallbackLogic:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5 targetQueue:(id)arg6;
- (void)_removeSoundID:(unsigned int)arg1 shouldStopSound:(_Bool)arg2 fireCompletionHandler:(_Bool)arg3;
- (_Bool)_stopAllAlerts;
- (unsigned int)_soundIDForAlert:(id)arg1;
- (void)_stopAlert:(id)arg1 withFadeOutDuration:(double)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4 targetQueue:(id)arg5;
- (void)_startPlayingAlertRepeatedly:(id)arg1;
- (_Bool)_playAlert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 targetQueue:(id)arg3;
- (_Bool)stopAllAlerts;
- (void)dealloc;
- (id)init;

@end
