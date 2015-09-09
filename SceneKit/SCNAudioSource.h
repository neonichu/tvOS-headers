//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class AVAudioFile, AVAudioPCMBuffer, NSString, NSURL;

@interface SCNAudioSource : NSObject <NSCopying, NSSecureCoding>
{
    AVAudioFile *_audioFile;
    AVAudioPCMBuffer *_audioBuffer;
    NSURL *_audioURL;
    NSString *_audioName;
    _Bool _loops;
    _Bool _shouldStream;
    _Bool _loaded;
    _Bool positional;
    float volume;
    float rate;
    float reverbBlend;
}

+ (_Bool)supportsSecureCoding;
+ (id)audioSourceNamed:(id)arg1;
+ (id)audioSourceWithAVAudioPCMBuffer:(id)arg1;
@property(nonatomic) _Bool shouldStream; // @synthesize shouldStream=_shouldStream;
@property(nonatomic) _Bool loops; // @synthesize loops=_loops;
@property(nonatomic) float reverbBlend; // @synthesize reverbBlend;
@property(nonatomic) float rate; // @synthesize rate;
@property(nonatomic, getter=isPositional) _Bool positional; // @synthesize positional;
@property(nonatomic) float volume; // @synthesize volume;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNAudioSource:(id)arg1;
- (void)_customEncodingOfSCNAudioSource:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)duration;
- (id)audioFile;
- (id)audioBuffer;
- (id)audioBufferFormat;
- (void)loadIfNeeded;
- (void)_load;
- (void)load;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithFileNamed:(id)arg1;
- (id)fileName;
- (id)initWithFileNamed:(id)arg1 inBundle:(id)arg2;
- (void)_loadURLWithBundle:(id)arg1;
- (long long)renderingAlgorithm;
- (id)initWithAVAudioPCMBuffer:(id)arg1;

@end

