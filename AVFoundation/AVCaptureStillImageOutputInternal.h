//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, NSDictionary, NSMutableArray;

@interface AVCaptureStillImageOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    NSMutableArray *stillImageRequests;
    _Bool squareCropEnabled;
    struct CGSize previewImageSize;
    unsigned int imageDataFormatType;
    float jpegQuality;
    _Bool jpegQualitySpecified;
    long long HDRCaptureMode;
    _Bool EV0CaptureEnabled;
    _Bool noiseReductionEnabled;
    _Bool suspendsVideoProcessingDuringCapture;
    NSDictionary *outputSettings;
    _Bool isCapturingPhoto;
    _Bool rawCaptureEnabled;
    _Bool SISSupported;
    _Bool SISEnabled;
    _Bool SISActive;
    _Bool highResStillEnabled;
    unsigned int shutterSoundID;
    struct {
        unsigned int imageCount;
        int outputFormat;
        unsigned int outputWidth;
        unsigned int outputHeight;
    } preparedBracket;
    NSMutableArray *prepareRequests;
    unsigned long long maxBracketedCaptureCount;
    _Bool lensStabilizationDuringBracketedCaptureSupported;
    _Bool lensStabilizationDuringBracketedCaptureEnabled;
}

- (void)dealloc;
- (id)init;

@end

