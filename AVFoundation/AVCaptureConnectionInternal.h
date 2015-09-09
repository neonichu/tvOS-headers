//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureDevice, AVCaptureInputPort, AVWeakReference, NSArray, NSMutableArray, NSString;

@interface AVCaptureConnectionInternal : NSObject
{
    NSMutableArray *inputPorts;
    AVCaptureDevice *sourceDevice;
    AVWeakReference *outputWeakReference;
    AVWeakReference *videoPreviewLayerWeakReference;
    _Bool hasActiveObservers;
    _Bool active;
    _Bool enabled;
    int changeSeed;
    AVCaptureInputPort *audioInputPort;
    NSMutableArray *audioChannels;
    NSArray *audioChannelLevels;
    long long lastGetAudioLevelsTime;
    AVCaptureInputPort *videoInputPort;
    AVCaptureInputPort *metadataInputPort;
    AVCaptureInputPort *metadataItemInputPort;
    _Bool videoMirroringSupported;
    _Bool automaticallyAdjustsVideoMirroring;
    _Bool videoMirrored;
    _Bool videoOrientationSupported;
    long long videoOrientation;
    CDStruct_1b6d18a9 videoMinFrameDuration;
    CDStruct_1b6d18a9 videoMaxFrameDuration;
    double videoMaxScaleAndCropFactor;
    double videoScaleAndCropFactor;
    int videoRetainedBufferCountHint;
    long long preferredVideoStabilizationMode;
    _Bool videoStabilizationEnabled;
    long long activeVideoStabilizationMode;
    _Bool hasVideoMinFrameDurationObserver;
    NSString *connectionID;
}

@end

