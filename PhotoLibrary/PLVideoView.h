//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotoLibrary/PLMoviePlayerControllerDelegate-Protocol.h>
#import <PhotoLibrary/PLSlalomRegionEditorDelegate-Protocol.h>
#import <PhotoLibrary/UIMovieScrubberDataSource-Protocol.h>
#import <PhotoLibrary/UIMovieScrubberDelegate-Protocol.h>

@class AVAssetExportSession, NSArray, NSDictionary, NSLock, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSTimer, NSURL, PFVideoAVObjectBuilder, PFVideoAdjustments, PLManagedAsset, PLMoviePlayerController, PLPhotoBakedThumbnails, PLPhotoTileViewController, PLProgressStack, PLSlalomRegionEditor, PLVideoEditingOverlayView, PLVideoPosterFrameView, UIActivityIndicatorView, UIImage, UIImageView, UIMovieScrubber;
@protocol OS_dispatch_queue, PLVideoOverlayButton, PLVideoViewDelegate;

@interface PLVideoView : UIView <UIMovieScrubberDelegate, UIMovieScrubberDataSource, PLMoviePlayerControllerDelegate, PLSlalomRegionEditorDelegate>
{
    PLManagedAsset *_videoCameraImage;
    NSString *_pathToOriginalVideo;
    NSURL *_videoURL;
    PLPhotoTileViewController *_imageTile;
    PLVideoPosterFrameView *_posterFrameView;
    UIView *_videoOverlayBackgroundView;
    PLVideoEditingOverlayView *_trimMessageView;
    UIImage *_posterFrameImage;
    UIImage *_snapshotImage;
    double _scrubberWidth;
    unsigned long long _scaleMode;
    UIView *_scrubberBackgroundView;
    UIView *_scrubberTitleView;
    NSTimer *_scrubberUpdateTimer;
    NSDictionary *_thumbnailOptionsDict;
    struct CGSize _thumbnailSize;
    PLPhotoBakedThumbnails *_bakedLandscapeThumbnails;
    PLPhotoBakedThumbnails *_bakedPortraitThumbnails;
    AVAssetExportSession *_exportSession;
    double _remakerStartTime;
    double _remakerEndTime;
    NSString *_trimmedPath;
    NSString *_videoPathAfterTrim;
    NSTimer *_trimProgressTimer;
    PLManagedAsset *_trimmedVideoClip;
    PLProgressStack *_trimProgressStack;
    float _progress;
    PLMoviePlayerController *_moviePlayer;
    id <PLVideoViewDelegate> _delegate;
    double _maximumTrimLength;
    double _lastScrubbedValue;
    double _lastActualValue;
    double _duration;
    double _cachedCurrentPlaybackTime;
    NSArray *_imageGenerators;
    NSLock *_thumbnailReqlock;
    NSObject<OS_dispatch_queue> *_thumbnailReqQueue;
    AVAssetExportSession *_airplayExportSession;
    _Bool _isAirPlay;
    unsigned int _showsPlayButton:1;
    unsigned int _showsScrubber:1;
    unsigned int _canEdit:1;
    unsigned int _loadMediaImmediately:1;
    unsigned int _scrubberIsSubview:1;
    unsigned int _viewWillAppear:1;
    unsigned int _didLayout:1;
    unsigned int _wasPlayingBeforeScrub:1;
    unsigned int _playFromBeginning:1;
    unsigned int _needsReloadScrubberThumbnails:1;
    unsigned int _playing:1;
    unsigned int _editing:1;
    unsigned int _disableEditAfterTrim:1;
    unsigned int _scrubbing:1;
    unsigned int _scrubbingToRight:1;
    unsigned int _deleteOriginalFile:1;
    unsigned int _passthroughTrimming:1;
    unsigned int _preparingMoviePlayer:1;
    unsigned int _preparedMoviePlayer:1;
    unsigned int _isMoviePlayerActive:1;
    unsigned int _moviePlayerIsReady:1;
    unsigned int _moviePlayerIsReadyForDisplay:1;
    unsigned int _moviePlayerDidBuffer:1;
    unsigned int _showingOverlay:1;
    unsigned int _showingScrubber:1;
    unsigned int _showScrubberWhenMovieIsReady:1;
    unsigned int _playbackDidBegin:1;
    unsigned int _loadScrubberThumbnails:1;
    unsigned int _videoIsLandscape:1;
    unsigned int _canCreateMetadata:1;
    unsigned int _createPreviewPosterFrame:1;
    unsigned int _isTrimming:1;
    unsigned int _wasTrimmedInPlace:1;
    unsigned int _remakingFailed:1;
    NSMutableArray *_summaryThumbnailRequestTimestamps;
    NSMutableArray *_detailThumbnailRequestTimestamps;
    UIMovieScrubber *_scrubber;
    PLSlalomRegionEditor *_slalomRegionEditor;
    NSMutableDictionary *_cachedThumbnails;
    NSArray *_landscapeSummaryThumbnailTimestamps;
    NSArray *_portraitSummaryThumbnailTimestamps;
    UIActivityIndicatorView *_spinner;
    UIActivityIndicatorView *_shadowSpinner;
    UIView<PLVideoOverlayButton> *_videoOverlayPlayButton;
    _Bool _useLandscapeCache;
    double _videoStreamingStartTime;
    _Bool _allowSlalomEditor;
    _Bool _prepareMoviePlayerForScrubberAutomatically;
    _Bool _shouldPlayVideoWhenViewAppears;
    _Bool __slalomRegionEditorCreatedForScrubber;
    _Bool __didInsertMoviePlayerView;
    _Bool __didEditSlalom;
    _Bool __isFetchingVideo;
    _Bool __localVideoUnavailable;
    _Bool __canAttemptFetchingVideoDerivative;
    _Bool __attemptFetchingVideoDerivative;
    PFVideoAVObjectBuilder *__videoAVObjectBuilder;
    long long __expectedNotificationsCount;
    PFVideoAdjustments *__adjustmentsToCommit;
}

+ (void)_enqueueOverlayPlayButton:(id)arg1;
+ (id)_dequeueOverlayPlayButton;
+ (id)videoViewForVideoFileAtURL:(id)arg1;
@property(nonatomic, setter=_setAttemptFetchingVideoDerivative:) _Bool _attemptFetchingVideoDerivative; // @synthesize _attemptFetchingVideoDerivative=__attemptFetchingVideoDerivative;
@property(nonatomic, setter=_setCanAttemptFetchingVideoDerivative:) _Bool _canAttemptFetchingVideoDerivative; // @synthesize _canAttemptFetchingVideoDerivative=__canAttemptFetchingVideoDerivative;
@property(readonly, nonatomic) PFVideoAdjustments *_adjustmentsToCommit; // @synthesize _adjustmentsToCommit=__adjustmentsToCommit;
@property(readonly, nonatomic) long long _expectedNotificationsCount; // @synthesize _expectedNotificationsCount=__expectedNotificationsCount;
@property(nonatomic, setter=_setLocalVideoUnavailable:) _Bool _localVideoUnavailable; // @synthesize _localVideoUnavailable=__localVideoUnavailable;
@property(readonly, nonatomic) _Bool _isFetchingVideo; // @synthesize _isFetchingVideo=__isFetchingVideo;
@property(readonly, nonatomic) PFVideoAVObjectBuilder *_videoAVObjectBuilder; // @synthesize _videoAVObjectBuilder=__videoAVObjectBuilder;
@property(nonatomic, setter=_setDidEditSlalom:) _Bool _didEditSlalom; // @synthesize _didEditSlalom=__didEditSlalom;
@property(nonatomic) _Bool _didInsertMoviePlayerView; // @synthesize _didInsertMoviePlayerView=__didInsertMoviePlayerView;
@property(readonly, nonatomic) _Bool _slalomRegionEditorCreatedForScrubber; // @synthesize _slalomRegionEditorCreatedForScrubber=__slalomRegionEditorCreatedForScrubber;
@property(nonatomic) _Bool shouldPlayVideoWhenViewAppears; // @synthesize shouldPlayVideoWhenViewAppears=_shouldPlayVideoWhenViewAppears;
@property(nonatomic) _Bool prepareMoviePlayerForScrubberAutomatically; // @synthesize prepareMoviePlayerForScrubberAutomatically=_prepareMoviePlayerForScrubberAutomatically;
@property(readonly, nonatomic) UIView *scrubberBackgroundView; // @synthesize scrubberBackgroundView=_scrubberBackgroundView;
@property(nonatomic) _Bool allowSlalomEditor; // @synthesize allowSlalomEditor=_allowSlalomEditor;
@property(retain, nonatomic) PLProgressStack *trimProgressStack; // @synthesize trimProgressStack=_trimProgressStack;
@property(readonly, retain, nonatomic) PLVideoPosterFrameView *posterFrameView; // @synthesize posterFrameView=_posterFrameView;
@property(nonatomic) double scrubberWidth; // @synthesize scrubberWidth=_scrubberWidth;
- (void)_cancelAirplayExportSession;
- (void)_flattenVideoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_deleteFileAtPath:(id)arg1;
- (id)_filePathForFlattenedVideoMetadata;
- (id)_filePathForFlattenedVideo;
- (void)_writeMetadata:(id)arg1 toPath:(id)arg2;
- (id)_readMetadataFromPath:(id)arg1;
- (id)_metadataForFlattenedVideo;
- (_Bool)_isFlattenedVideoUpToDate;
- (_Bool)_shouldPlayFlattenedVideo;
- (_Bool)_canAirPlayCurrentVideo;
- (void)slalomRegionEditorRequestForceUnzoom:(id)arg1;
- (_Bool)slalomRegionEditorRequestForceZoom:(id)arg1;
- (void)_scrubToSlalomRegionEditorStartHandle:(_Bool)arg1;
- (void)slalomRegionEditorEndValueChanged:(id)arg1;
- (void)slalomRegionEditorStartValueChanged:(id)arg1;
- (void)_commitPendingAdjustmentsUpdateAndWait:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelDelayedCommitPendingAdjustmentsUpdate;
- (void)_commitPendingAdjustmentsUpdate;
- (void)_enqueueAdjustmentsForCommit;
- (void)slalomRegionEditorDidEndEditing:(id)arg1;
- (void)slalomRegionEditorDidBeginEditing:(id)arg1 withStartHandle:(_Bool)arg2;
- (void)updateForRotationWithDuration:(double)arg1 isLandscape:(_Bool)arg2;
- (void)_updateScrubberValue;
- (void)_updateSlalomRegionEditorRange;
- (void)_setDuration:(double)arg1;
@property(readonly, nonatomic) double duration;
- (void)_playbackFinished;
- (id)_moviePlayer;
- (void)_handleScreenConnectionChange:(_Bool)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (_Bool)shouldShowCopyCalloutAtPoint:(struct CGPoint)arg1;
- (double)_scrubberTimeFromMovieTime:(double)arg1;
- (double)_movieTimeFromScrubberTime:(double)arg1;
- (double)_thumbnailTimeFromScrubberTime:(double)arg1;
- (id)_thumbnailSourceAsset;
- (double)_movieScrubberDuration;
- (_Bool)_scrubberTimeNeedsMapping;
- (void)notifyOfChange:(id)arg1 shouldReloadBlock:(CDUnknownBlockType)arg2;
- (void)_scrubToMovieTime:(double)arg1;
@property(nonatomic) double currentTime;
@property(nonatomic) _Bool loadMediaImmediately;
@property(nonatomic) _Bool scrubberIsSubview;
- (_Bool)_canEditDuration:(double)arg1;
@property(nonatomic) _Bool canEdit;
- (void)notifyRequiredResourcesDownloaded;
- (void)prepareMoviePlayer;
@property(nonatomic) _Bool showsScrubber;
- (void)setShowsScrubber:(_Bool)arg1 duration:(double)arg2;
@property(nonatomic) _Bool showsPlayOverlay;
- (void)_updatePosterFrameVisibility;
- (void)_updatePosterImageView;
- (void)_invalidateSnapshotImage;
- (void)_updateSnapshotImage;
@property(readonly, nonatomic) UIImage *posterFrameImage;
- (void)setPosterFrameImage:(id)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)commitPendingUpdatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updateScrubberVisibilityWithDuration:(double)arg1;
- (void)forceStop;
- (void)stop;
- (void)pause;
- (void)play;
- (void)_removePlaySpinner;
- (void)_displayPlaySpinner;
- (_Bool)playingToVideoOut;
- (_Bool)playingToAirTunes;
- (void)playButtonClicked:(id)arg1;
- (void)_verifyOrRestartPlayback;
- (void)_didBeginPlayback;
- (_Bool)isPlaying;
- (void)handleDoubleTap;
- (void)toggleScaleMode:(float)arg1;
@property(nonatomic) PLPhotoTileViewController *imageTile;
@property(readonly, nonatomic) PLManagedAsset *videoCameraImage;
@property(readonly, nonatomic) UIImageView *previewImageView;
- (id)_videoSnapshot;
- (id)newPreviewImageData:(id *)arg1;
@property(retain, nonatomic) PLManagedAsset *trimmedVideoClip;
@property(readonly, nonatomic) NSString *videoPathAfterTrim;
@property(readonly, nonatomic) double endTime;
@property(readonly, nonatomic) double startTime;
- (double)_scrubberStartTime;
- (void)cancelTrim;
- (void)trimUsingMode:(int)arg1 saveACopy:(_Bool)arg2;
- (_Bool)wasTrimmedInPlace;
- (_Bool)isTrimming;
- (_Bool)deleteOriginalFileAfterTrim;
- (void)_exportCompletedWithSuccess:(_Bool)arg1;
- (void)_cancelRemaking:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)_updateTrimProgress;
- (void)_informDelegateAboutProgressChange:(float)arg1;
- (void)_resetTrimProgressTimer;
- (void)_removeTrimProgressTimer;
- (void)importerFinishedProcessingTrimmedVideo:(id)arg1;
- (void)_thumbnailsWereRegenerated:(id)arg1 error:(id)arg2 contextInfo:(void *)arg3;
- (void)_scrubberAnimationFinished;
- (void)movieScrubberEditingAnimationFinished:(id)arg1;
- (void)_reset;
- (void)_setPlaybackDidBegin:(_Bool)arg1;
- (void)_setPlaying:(_Bool)arg1;
- (void)_updateSlalomRegionEditorState;
- (void)_updateForEditing;
@property(nonatomic, getter=isEditing) _Bool editing;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hideTrimMessage;
- (void)showTrimMessage:(id)arg1 withBottomY:(float)arg2;
- (void)setMaximumTrimLength:(double)arg1;
- (void)_clearImageGenerators;
- (void)_configureImageGenerator:(id)arg1 thumbnailSize:(struct CGSize)arg2 forSummaryThumbnails:(_Bool)arg3;
- (void)_serviceImageGenerationRequests;
- (void)_addThumbnailRequestForTimestamp:(id)arg1 isSummaryThumbnail:(_Bool)arg2;
- (void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)movieScrubber:(id)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3;
- (void)movieScrubberDidCancelEditing:(id)arg1;
- (void)movieScrubberDidBeginEditing:(id)arg1;
- (void)movieScrubberWillBeginEditing:(id)arg1;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (void)movieScrubberWillBeginRequestingThumbnails:(id)arg1;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)_didScrubToValue:(double)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)_resetScrubberUpdateTimer;
- (void)_removeScrubberUpdateTimer;
- (double)movieScrubberThumbnailAspectRatio:(id)arg1;
- (id)_loadThumbnailsIntoDictionary:(id)arg1 isLandscape:(_Bool)arg2 aspectRatio:(float)arg3;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(_Bool)arg3;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
@property(readonly, nonatomic) _Bool _didSetPhotoData;
- (_Bool)_canPlayCloudSharedStreamedVideoWithLocalVideo;
- (_Bool)_shouldStreamVideo;
- (_Bool)_shouldStreamCloudPhotoLibraryVideo;
- (_Bool)_mediaIsCloudSharedStreamedVideo;
- (_Bool)_mediaIsVideo;
@property(readonly, nonatomic) _Bool _mediaIsPlayable;
@property(readonly, retain, nonatomic) NSString *_pathForPrebakedPortraitScrubberThumbnails;
@property(readonly, retain, nonatomic) NSString *_pathForPrebakedLandscapeScrubberThumbnails;
@property(readonly, retain, nonatomic) NSString *_pathForVideoPreviewFile;
- (id)_pathForOriginalFile;
@property(readonly, retain, nonatomic) NSString *pathForVideoFile;
- (void)movieScrubberDidEndAnimatingZoom:(id)arg1;
- (void)movieScrubberDidBeginAnimatingZoom:(id)arg1;
- (void)_saveCachedThumbnailsIfNecessary;
- (id)movieScrubber:(id)arg1 timestampsStartingAt:(id)arg2 endingAt:(id)arg3 maxCount:(int)arg4;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (double)movieScrubberDuration:(id)arg1;
- (void)moviePlayerHeadsetPreviousTrackPressed:(id)arg1;
- (void)moviePlayerHeadsetNextTrackPressed:(id)arg1;
- (void)moviePlayerHeadsetPlayPausePressed:(id)arg1;
- (id)moviePlayerRequestsPickedAirplayRoute:(id)arg1;
- (_Bool)_playerIsAirplay;
- (void)moviePlayerDidChangeExternalPlaybackType:(id)arg1;
- (_Bool)moviePlayerControllerShouldAllowExternalPlayback:(id)arg1;
- (void)moviePlayerEncounteredAuthenticationError:(id)arg1;
- (_Bool)moviePlayerShouldNotifyOnPreparationError:(id)arg1;
- (void)moviePlayerWasSuspendedDuringPlayback:(id)arg1;
- (void)moviePlayerControllerWillResignAsActiveController:(id)arg1;
- (void)moviePlayerControllerDidBecomeActiveController:(id)arg1;
- (void)_setMoviePlayerActive:(_Bool)arg1;
- (void)_updateScrubberForSlowMotion;
- (void)_configurePlayerForStreamedVideoIfNecessary;
- (id)_assetForVideoURL:(id)arg1;
- (id)_assetForVideoPath:(id)arg1;
- (id)_optionsForAVURLAsset;
- (void)_updateVideoAVObjectBuilderFromContentEditingInput:(id)arg1;
- (_Bool)_canHandleAdjustmentData:(id)arg1;
- (_Bool)_prepareMoviePlayerIfNeeded;
- (void)_fetchLocalContentEditingInput;
- (void)_fetchNonlocalVideo;
- (void)_prepareAndResumePlayback;
- (void)moviePlayerUpdatedDestinationPlaceholder:(id)arg1;
- (void)moviePlayerDurationAvailable:(id)arg1;
- (void)moviePlayerReadyToDisplay:(id)arg1;
- (void)moviePlayerReadyToPlay:(id)arg1;
- (void)_savePreviewPosterFrameImage:(struct CGImage *)arg1;
- (void)_requestPreviewPosterFrameForVideoSize:(struct CGSize)arg1;
- (void)moviePlayerPlaybackDidEnd:(id)arg1;
- (void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(unsigned long long)arg2;
- (void)moviePlayerPlaybackRateDidChange:(id)arg1;
- (void)moviePlayerBufferingStateDidChange:(id)arg1;
- (_Bool)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2;
- (void)_reloadScrubberThumbnailsIfNeeded;
- (void)_setNeedsReloadScrubberThumbnails:(_Bool)arg1;
- (void)layoutSubviews;
- (_Bool)_canCreateMetadata;
- (void)_updateScaleModeForSize:(struct CGSize)arg1;
- (void)updateScaleMode;
- (void)_hideTrimMessageView:(_Bool)arg1;
- (void)removeVideoOverlay;
- (void)_hideVideoOverlay:(_Bool)arg1;
- (void)_videoOverlayFadeOutDidFinish;
- (void)_showVideoOverlay;
- (id)videoOverlayPlayButton;
- (id)slalomRegionEditor;
- (id)videoScrubber;
- (_Bool)_canAccessVideo;
- (_Bool)_shouldShowSlalomEditor;
- (void)_removeScrubber;
- (void)_createScrubberIfNeeded;
- (double)_scrubberBackgroundHeight;
- (void)_updateScrubberFrame;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
@property(readonly, copy) NSString *description;
@property(nonatomic) id <PLVideoViewDelegate> delegate;
- (void)_tearDownMoviePlayer;
- (void)_insertMoviePlayerViewIfNecessary;
- (void)_setupMoviePlayerIfNecessary;
- (void)dealloc;
- (void)_networkReachabilityDidChange:(id)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 videoCameraImage:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 videoCameraImage:(id)arg2 orientation:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

