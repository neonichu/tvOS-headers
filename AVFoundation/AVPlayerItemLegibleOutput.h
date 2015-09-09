//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemLegibleOutputInternal, NSObject;
@protocol AVPlayerItemLegibleOutputPushDelegate, OS_dispatch_queue;

@interface AVPlayerItemLegibleOutput : AVPlayerItemOutput
{
    AVPlayerItemLegibleOutputInternal *_legibleOutputInternal;
}

+ (void)initialize;
- (void)setSuppressesPlayerRendering:(_Bool)arg1;
- (_Bool)suppressesPlayerRendering;
- (void)setTextStylingResolution:(id)arg1;
- (id)textStylingResolution;
@property(nonatomic) double advanceIntervalForDelegateInvocation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) __weak id <AVPlayerItemLegibleOutputPushDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)_figLegibleOutputsDictionaryOptions;
- (void)_detachFromPlayerItem;
- (_Bool)_attachToPlayerItem:(id)arg1;
- (void)_signalFlush;
- (void)_pushAttributedStrings:(id)arg1 andSampleBuffers:(id)arg2 atItemTime:(CDStruct_1b6d18a9)arg3;
- (void)finalize;
- (void)dealloc;
- (void)_collectUncollectables;
- (id)initWithDependencyFactory:(id)arg1 mediaSubtypesForNativeRepresentation:(id)arg2;
- (id)initWithMediaSubtypesForNativeRepresentation:(id)arg1;
- (id)init;

@end

