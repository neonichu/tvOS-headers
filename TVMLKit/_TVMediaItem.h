//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/IKAppMediaItem-Protocol.h>
#import <TVMLKit/TVSMediaItem-Protocol.h>

@class IKAppMediaItemBridge, NSArray, NSMutableDictionary, NSString, NSURL, TVSSecureKeyDeliveryCoordinator;

__attribute__((visibility("hidden")))
@interface _TVMediaItem : NSObject <TVSMediaItem, IKAppMediaItem>
{
    NSMutableDictionary *_metadata;
    IKAppMediaItemBridge *_bridge;
    TVSSecureKeyDeliveryCoordinator *_keyDeliveryCoordinator;
    NSURL *_url;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)reportingDelegate;
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;
- (void)loadStreamingKeyForRequest:(id)arg1;
- (void)performMediaItemMetadataTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)removeMediaItemMetadataForProperty:(id)arg1;
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (_Bool)hasTrait:(id)arg1;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (id)mediaItemURL;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) NSArray *chapterGroups;
@property(retain, nonatomic) NSArray *interstitials;
@property(readonly, nonatomic) __weak IKAppMediaItemBridge *bridge;
- (id)initWithIKAppMediaItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
