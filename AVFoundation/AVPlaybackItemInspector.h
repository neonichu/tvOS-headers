//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetInspector.h>

@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector
{
    struct OpaqueFigPlaybackItem *_playbackItem;
    NSArray *_trackIDs;
}

- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)lyrics;
- (id)trackIDs;
- (long long)trackCount;
- (_Bool)providesPreciseDurationAndTiming;
- (struct CGSize)naturalSize;
- (CDStruct_1b6d18a9)duration;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
@property(retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) struct OpaqueFigPlaybackItem *playbackItem;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 trackIDs:(id)arg2;

@end

