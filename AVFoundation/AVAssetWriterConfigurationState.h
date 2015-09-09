//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVMediaFileType, NSArray, NSURL;

@interface AVAssetWriterConfigurationState : NSObject
{
    NSURL *_URL;
    AVMediaFileType *_mediaFileType;
    CDStruct_1b6d18a9 _movieFragmentInterval;
    CDStruct_1b6d18a9 _overallDurationHint;
    _Bool _shouldOptimizeForNetworkUse;
    NSURL *_directoryForTemporaryFiles;
    NSArray *_metadataItems;
    int _movieTimeScale;
    struct CGAffineTransform _preferredTransform;
    float _preferredVolume;
    float _preferredRate;
    NSArray *_inputs;
    NSArray *_inputGroups;
}

@property(copy, nonatomic) NSArray *inputGroups; // @synthesize inputGroups=_inputGroups;
@property(copy, nonatomic) NSArray *inputs; // @synthesize inputs=_inputs;
@property(nonatomic) float preferredRate; // @synthesize preferredRate=_preferredRate;
@property(nonatomic) float preferredVolume; // @synthesize preferredVolume=_preferredVolume;
@property(nonatomic) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform=_preferredTransform;
@property(nonatomic) int movieTimeScale; // @synthesize movieTimeScale=_movieTimeScale;
@property(copy, nonatomic) NSArray *metadataItems; // @synthesize metadataItems=_metadataItems;
@property(copy, nonatomic) NSURL *directoryForTemporaryFiles; // @synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse; // @synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse;
@property(nonatomic) CDStruct_1b6d18a9 overallDurationHint; // @synthesize overallDurationHint=_overallDurationHint;
@property(nonatomic) CDStruct_1b6d18a9 movieFragmentInterval; // @synthesize movieFragmentInterval=_movieFragmentInterval;
@property(copy, nonatomic) AVMediaFileType *mediaFileType; // @synthesize mediaFileType=_mediaFileType;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)dealloc;

@end

