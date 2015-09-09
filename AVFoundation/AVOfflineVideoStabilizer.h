//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, NSMutableArray, NSSet;

@interface AVOfflineVideoStabilizer : NSObject
{
    CDStruct_1b6d18a9 _targetFrameDuration;
    int _metadataPrimingCount;
    AVWeakReference *_dataProviderWeakReference;
    struct __CVPixelBufferPool *_pixelBufferPool;
    _Bool _clientMarkedEndOfVideoData;
    long long _videoOutputFrameNumber;
    struct opaqueCMFormatDescription *_cachedVideoFormatDescription;
    NSMutableArray *_outputSampleBuffers;
    _Bool _clientMarkedEndOfMetadata;
    long long _metadataOutputFrameNumber;
    NSMutableArray *_futureFrameMetadataDicts;
    NSSet *_requiredMetadataKeys;
    NSSet *_optionalMetadataKeys;
    struct OpaqueFigSampleBufferProcessor *_gvsProcessor;
    _Bool _stabilizationEnabled;
}

+ (id)offlineVideoStabilizerWithTargetFrameDuration:(CDStruct_1b6d18a9)arg1 dataProvider:(id)arg2 destinationBufferPool:(struct __CVPixelBufferPool *)arg3 stabilizationEnabled:(_Bool)arg4;
+ (void)initialize;
@property(readonly, nonatomic) NSMutableArray *outputSampleBuffers; // @synthesize outputSampleBuffers=_outputSampleBuffers;
- (struct opaqueCMSampleBuffer *)_createSampleBufferWithPixelBuffer:(struct __CVBuffer *)arg1 sampleTime:(CDStruct_1b6d18a9)arg2 futureMetadata:(id)arg3 status:(int *)arg4;
- (int)_validateSourcePixelBuffer:(struct __CVBuffer *)arg1 withSampleTime:(CDStruct_1b6d18a9)arg2 metadata:(id)arg3 isEndOfData:(_Bool *)arg4;
- (int)_validateStabilizationMetadata:(id)arg1 withSampleTime:(CDStruct_1b6d18a9)arg2 isEndOfData:(_Bool *)arg3;
- (void)_teardownVISProcessor;
- (int)_setupGVSProcessorWithMetadataArray:(id)arg1;
- (struct opaqueCMSampleBuffer *)_copyStabilizedSampleBuffer:(id *)arg1;
@property(readonly, nonatomic) int preferredSourceStabilizationMetadataPrimingCount;
@property(readonly, nonatomic) int preferredSourcePixelBufferPrimingFrameCount;
- (struct opaqueCMSampleBuffer *)copyStabilizedSampleBuffer:(id *)arg1;
- (void)dealloc;
- (id)initWithTargetFrameDuration:(CDStruct_1b6d18a9)arg1 dataProvider:(id)arg2 destinationBufferPool:(struct __CVPixelBufferPool *)arg3 stabilizationEnabled:(_Bool)arg4;

@end

