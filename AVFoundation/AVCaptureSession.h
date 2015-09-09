//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureSessionInternal, NSArray, NSString;

@interface AVCaptureSession : NSObject
{
    AVCaptureSessionInternal *_internal;
}

+ (_Bool)automaticallyNotifiesObserversOfRunning;
+ (_Bool)automaticallyNotifiesObserversOfMasterClock;
+ (id)allSessionPresets;
+ (id)dotString;
+ (void)initialize;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_notifyMediaServerdDied;
- (void)_handleConfigurationDidBecomeLiveNotificationWithPayload:(id)arg1;
- (void)_handleConfigurationCommittedNotificationWithPayload:(id)arg1;
- (void)_handleDidStopRunningNotificationWithPayload:(id)arg1;
- (void)_notifySessionStopped;
- (void)_handleDidStartRunningNotificationWithPayload:(id)arg1;
- (void)_notifySessionStarted;
- (void)_updateActiveConnections;
- (void)_updateDeviceActiveFormats;
- (void)_stopAndTearDownGraph;
- (_Bool)_buildAndRunGraph;
- (id)_figCaptureSessionConfiguration;
- (void)_makeConfigurationLive:(id)arg1;
- (void)_postRuntimeError:(id)arg1;
- (id)_stopError;
- (id)sessionVideoCaptureDevices;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (id)_connectionsForNewInputPort:(id)arg1;
- (void)_teardownFigCaptureSession;
- (int)_createFigCaptureSession;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)videoHDREnabledForDevice:(id)arg1 format:(id)arg2 sessionPreset:(id)arg3;
- (id)valueForUndefinedKey:(id)arg1;
- (void)_setMasterClock:(struct OpaqueCMClock *)arg1;
@property(readonly, nonatomic) struct OpaqueCMClock *masterClock;
- (void)_rebuildGraph;
- (void)_setRunning:(_Bool)arg1;
- (_Bool)_stopFigCaptureSession;
- (_Bool)_startFigCaptureSession;
- (void)stopRunning;
- (void)startRunning;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(nonatomic) _Bool automaticallyConfiguresApplicationAudioSession;
@property(nonatomic) _Bool usesApplicationAudioSession;
- (void)_setInterrupted:(_Bool)arg1 withReason:(int)arg2;
@property(readonly, nonatomic, getter=isInterrupted) _Bool interrupted;
- (void)_removeConnection:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (void)addConnection:(id)arg1;
- (_Bool)canAddConnection:(id)arg1;
- (_Bool)_canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (void)_removeVideoPreviewLayer:(id)arg1;
- (void)_removeAllPreviewLayers;
- (void)_addVideoPreviewLayerWithNoConnection:(id)arg1;
- (void)_addVideoPreviewLayer:(id)arg1;
- (_Bool)_canAddVideoPreviewLayer:(id)arg1 failureReason:(id *)arg2;
- (void)removeOutput:(id)arg1;
- (void)_addOutputWithNoConnections:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (void)addOutput:(id)arg1;
- (_Bool)canAddOutput:(id)arg1;
- (_Bool)_canAddOutput:(id)arg1 failureReason:(id *)arg2;
@property(readonly, nonatomic) NSArray *outputs;
- (void)_removeInput:(id)arg1;
- (void)removeInput:(id)arg1;
- (void)_addInputWithNoConnections:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)addInput:(id)arg1;
- (_Bool)canAddInput:(id)arg1;
- (_Bool)_canAddInput:(id)arg1 failureReason:(id *)arg2;
@property(readonly, nonatomic) NSArray *inputs;
- (void)_determineMasterClock;
- (_Bool)isBeingConfigured;
- (void)_commitConfiguration;
- (void)_beginConfiguration;
- (void)commitConfiguration;
- (void)beginConfiguration;
@property(copy, nonatomic) NSString *sessionPreset;
- (_Bool)canSetSessionPreset:(id)arg1;
- (_Bool)notifiesOnMainThread;
- (id)description;
- (void)dealloc;
- (id)init;

@end

