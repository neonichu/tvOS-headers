//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPAVController, MPAVItem, MPUReportingController, NSData, NSString;

@interface MPUReportingPlaybackObserver : NSObject
{
    NSData *_currentJingleReportingTimedMetadata;
    _Bool _hasSetLastPlayEventTimeStamp;
    _Bool _isReloadingWithPlaybackContext;
    _Bool _isScrubbing;
    MPAVItem *_itemForCurrentTimeChange;
    double _lastPlayEventEndTimeForCurrentItem;
    double _lastPlayEventTimeStamp;
    NSString *_playbackSessionID;
    double _startTimeForCurrentTimeChange;
    _Bool _offline;
    _Bool _SBEnabled;
    MPAVController *_player;
    MPUReportingController *_reportingController;
    unsigned long long _storeAccountID;
}

@property(nonatomic) unsigned long long storeAccountID; // @synthesize storeAccountID=_storeAccountID;
@property(nonatomic, getter=isSBEnabled) _Bool SBEnabled; // @synthesize SBEnabled=_SBEnabled;
@property(readonly, nonatomic) MPUReportingController *reportingController; // @synthesize reportingController=_reportingController;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(readonly, nonatomic) MPAVController *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_updatePlaybackSessionID;
- (double)_itemStartTimeForItem:(id)arg1;
- (double)_itemEndTimeForItem:(id)arg1 withProposedEndTime:(double)arg2;
- (void)_setLastPlayEventEndTimeForCurrentItem:(double)arg1;
- (void)_reportPlaybackEndedForTimeoutWithItem:(id)arg1;
- (void)_playerWillSetCurrentTimeNotification:(id)arg1;
- (void)_playerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerPlaybackStateDidChangeNotification:(id)arg1;
- (void)_playerItemWillChangeNotification:(id)arg1;
- (void)_playerItemDidChangeNotification:(id)arg1;
- (void)_playerDidSetCurrentTimeNotification:(id)arg1;
- (void)_playerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_itemReportingJingleTimedMetadataDidChangeNotification:(id)arg1;
- (void)_itemNewAccessLogEntryNotification:(id)arg1;
- (void)willTransitionItemForBan:(id)arg1;
- (void)willHitPlaybackTimeoutEndingPlayback:(_Bool)arg1 withCurrentItem:(id)arg2;
- (id)newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 MPAVItem:(id)arg2;
- (id)newPlayActivityEventForMPAVItem:(id)arg1;
- (void)didTransitionItemForBan:(id)arg1;
- (void)didHitPlaybackTimeoutEndingPlayback:(_Bool)arg1 withCurrentItem:(id)arg2;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 reportingController:(id)arg2;

@end

