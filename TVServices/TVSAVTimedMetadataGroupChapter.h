//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/TVSMutableChapter.h>

@class AVMetadataItem, TVSAVMetadataItemImageLoader;

__attribute__((visibility("hidden")))
@interface TVSAVTimedMetadataGroupChapter : TVSMutableChapter
{
    AVMetadataItem *_imageMetadataItem;
    TVSAVMetadataItemImageLoader *_imageLoader;
}

@property(retain, nonatomic) TVSAVMetadataItemImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) AVMetadataItem *imageMetadataItem; // @synthesize imageMetadataItem=_imageMetadataItem;
- (void).cxx_destruct;
- (void)_loadChapterNameFromMetadataItem:(id)arg1;
- (id)imageProxy;
- (id)initWithAVTimedMetadataGroup:(id)arg1;

@end

