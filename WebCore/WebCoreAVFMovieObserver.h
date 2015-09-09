//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVPlayerItemLegibleOutputPushDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate>
{
    struct MediaPlayerPrivateAVFoundationObjC *m_callback;
    int m_delayCallbacks;
}

- (void)outputSequenceWasFlushed:(id)arg1;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_198678f7)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(int)arg4;
- (void)didEnd:(id)arg1;
- (void)metadataLoaded;
- (void)disconnect;
- (id)initWithCallback:(struct MediaPlayerPrivateAVFoundationObjC *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

