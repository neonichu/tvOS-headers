//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraKit/CMKNebulaDaemonTimelapseProtocol-Protocol.h>

@class CMKTimelapseState, NSMutableArray, NSString;
@protocol CMKTimelapseMovieWriterProtocol, OS_dispatch_queue;

@interface CMKTimelapseBackendController : NSObject <CMKNebulaDaemonTimelapseProtocol>
{
    _Bool __writingMovie;
    _Bool __capturing;
    NSMutableArray *__sessionContexts;
    NSObject<OS_dispatch_queue> *__workQueue;
    id <CMKTimelapseMovieWriterProtocol> __movieWriter;
    CMKTimelapseState *__currentState;
}

+ (id)sharedInstance;
@property(nonatomic, getter=_isCapturing, setter=_setCapturing:) _Bool _capturing; // @synthesize _capturing=__capturing;
@property(retain, nonatomic, setter=_setCurrentState:) CMKTimelapseState *_currentState; // @synthesize _currentState=__currentState;
@property(readonly, nonatomic) id <CMKTimelapseMovieWriterProtocol> _movieWriter; // @synthesize _movieWriter=__movieWriter;
@property(readonly, nonatomic) _Bool _writingMovie; // @synthesize _writingMovie=__writingMovie;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_workQueue; // @synthesize _workQueue=__workQueue;
@property(readonly, nonatomic) NSMutableArray *_sessionContexts; // @synthesize _sessionContexts=__sessionContexts;
- (void).cxx_destruct;
- (_Bool)_isCameraRunning;
- (void)handleClientDisconnection;
- (void)handleClientConnection:(id)arg1;
- (struct CGAffineTransform)_frameTransformForState:(id)arg1;
- (void)_notifyAssetsdOfIncomingMovieAtPath:(id)arg1 duration:(double)arg2 state:(id)arg3;
- (void)_movieWrittenToFilePath:(id)arg1 duration:(double)arg2 state:(id)arg3;
- (void)_createPlaceholderAssetForState:(id)arg1;
- (void)_reserveDummyFileForTimelapseUUID:(id)arg1 firstImageFilePath:(id)arg2;
- (void)_writeMovieForSessionContext:(id)arg1;
- (_Bool)_deleteItemAtPath:(id)arg1;
- (_Bool)_scheduleDelayedMovieWriteIfNeededForTimelapseUUID:(id)arg1;
- (void)_permanentlyFailTimelapseUUID:(id)arg1;
- (void)_performPendingWork;
- (id)_getOrCreateSessionContextForTimelapseUUID:(id)arg1;
- (void)_updateSessionContext:(id)arg1 withState:(id)arg2;
- (void)_updatePendingWorkFromDiskForceEndLastSession:(_Bool)arg1;
- (void)updatePendingWorkFromDiskForceEndLastSession:(_Bool)arg1;
- (void)stopTimelapseWithUUID:(id)arg1;
- (void)finishCaptureForTimelapseWithUUID:(id)arg1;
- (void)updateTimelapseWithUUID:(id)arg1;
- (void)resumeTimelapseWithUUID:(id)arg1;
- (void)startTimelapseWithUUID:(id)arg1;
- (void)_dispatchToMainQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)_dispatchToWorkQueueAfterDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_dispatchToWorkQueueWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

