//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVOutputSettings, NSArray, NSDictionary, NSString, NSURL;

@interface AVAssetWriterInputConfigurationState : NSObject
{
    NSString *_mediaType;
    AVOutputSettings *_outputSettings;
    struct opaqueCMFormatDescription *_sourceFormatHint;
    NSDictionary *_sourcePixelBufferAttributes;
    _Bool _attachedToPixelBufferAdaptor;
    NSArray *_metadataItems;
    struct CGAffineTransform _transform;
    int _mediaTimeScale;
    _Bool _expectsMediaDataInRealTime;
    struct CGSize _naturalSize;
    NSString *_languageCode;
    NSString *_extendedLanguageTag;
    _Bool _marksOutputTrackAsEnabled;
    float _preferredVolume;
    long long _layer;
    short _alternateGroupID;
    NSDictionary *_trackReferences;
    _Bool _performsMultiPassEncodingIfSupported;
    CDStruct_1b6d18a9 _chunkDuration;
    long long _chunkAlignment;
    long long _chunkSize;
    NSURL *_sampleReferenceBaseURL;
}

@property(copy, nonatomic) NSURL *sampleReferenceBaseURL; // @synthesize sampleReferenceBaseURL=_sampleReferenceBaseURL;
@property(nonatomic) long long preferredMediaChunkSize; // @synthesize preferredMediaChunkSize=_chunkSize;
@property(nonatomic) long long preferredMediaChunkAlignment; // @synthesize preferredMediaChunkAlignment=_chunkAlignment;
@property(nonatomic) CDStruct_1b6d18a9 preferredMediaChunkDuration; // @synthesize preferredMediaChunkDuration=_chunkDuration;
@property(nonatomic) _Bool performsMultiPassEncodingIfSupported; // @synthesize performsMultiPassEncodingIfSupported=_performsMultiPassEncodingIfSupported;
@property(copy, nonatomic) NSDictionary *trackReferences; // @synthesize trackReferences=_trackReferences;
@property(nonatomic) short alternateGroupID; // @synthesize alternateGroupID=_alternateGroupID;
@property(nonatomic) long long layer; // @synthesize layer=_layer;
@property(nonatomic) float preferredVolume; // @synthesize preferredVolume=_preferredVolume;
@property(nonatomic) _Bool marksOutputTrackAsEnabled; // @synthesize marksOutputTrackAsEnabled=_marksOutputTrackAsEnabled;
@property(copy, nonatomic) NSString *extendedLanguageTag; // @synthesize extendedLanguageTag=_extendedLanguageTag;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) struct CGSize naturalSize; // @synthesize naturalSize=_naturalSize;
@property(nonatomic) _Bool expectsMediaDataInRealTime; // @synthesize expectsMediaDataInRealTime=_expectsMediaDataInRealTime;
@property(nonatomic) int mediaTimeScale; // @synthesize mediaTimeScale=_mediaTimeScale;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(copy, nonatomic) NSArray *metadataItems; // @synthesize metadataItems=_metadataItems;
@property(nonatomic) _Bool attachedToPixelBufferAdaptor; // @synthesize attachedToPixelBufferAdaptor=_attachedToPixelBufferAdaptor;
@property(copy, nonatomic) NSDictionary *sourcePixelBufferAttributes; // @synthesize sourcePixelBufferAttributes=_sourcePixelBufferAttributes;
@property(retain, nonatomic) struct opaqueCMFormatDescription *sourceFormatHint; // @synthesize sourceFormatHint=_sourceFormatHint;
@property(copy, nonatomic) AVOutputSettings *outputSettings; // @synthesize outputSettings=_outputSettings;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
- (void)dealloc;

@end

