//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset
{
    AVAssetProxyInternal *_assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)arg1;
+ (id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2;
- (id)tracks;
- (Class)_classForTrackInspectors;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (struct OpaqueFigFormatReader *)_formatReader;
- (struct OpaqueFigAsset *)_figAsset;
- (_Bool)isProxy;
- (void)finalize;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;

@end

