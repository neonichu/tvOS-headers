//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/AVPlayerItemOutputPushDelegate-Protocol.h>

@class AVPlayerItemLegibleOutput, NSArray;

@protocol AVPlayerItemLegibleOutputPushDelegate <AVPlayerItemOutputPushDelegate>

@optional
- (void)legibleOutput:(AVPlayerItemLegibleOutput *)arg1 didOutputAttributedStrings:(NSArray *)arg2 nativeSampleBuffers:(NSArray *)arg3 forItemTime:(CDStruct_198678f7)arg4;
@end

