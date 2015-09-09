//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _EARSpeechRecognitionAudioBuffer : NSObject
{
    CDUnknownBlockType _bufferFactory;
    struct shared_ptr<EAR::AudioBuffer> _currentBuffer;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _ended;
    _Bool _cancelled;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelRecognition;
- (void)_getShouldStopWithCompletion:(CDUnknownBlockType)arg1;
- (void)endAudio;
- (void)addAudioSampleData:(id)arg1;
- (void)addAudioSamples:(const short *)arg1 count:(unsigned long long)arg2;
- (void)_rollBuffer;
- (void)dealloc;
- (id)_initWithAudioBufferFactory:(CDUnknownBlockType)arg1;

@end

