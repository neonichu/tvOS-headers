//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TVSTimeRange;
@protocol TVSMediaItem;

@interface TVSSceneMediaItem : NSObject
{
    NSObject<TVSMediaItem> *_mediaItem;
    TVSTimeRange *_sceneTimeRange;
}

@property(retain, nonatomic) TVSTimeRange *sceneTimeRange; // @synthesize sceneTimeRange=_sceneTimeRange;
@property(retain, nonatomic) NSObject<TVSMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void).cxx_destruct;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (_Bool)hasTrait:(id)arg1;
- (id)initWithMediaItem:(id)arg1 sceneTimeRange:(id)arg2;

@end

