//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVVideoCompositionInstruction-Protocol.h>

@class NSArray, NSString;

@interface AVCoreImageFilterVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction>
{
    CDStruct_e83c9415 _timeRange;
    NSArray *_requiredSourceTrackIDs;
    CDUnknownBlockType _handler;
    struct CGAffineTransform _sourceTrackPreferredTransform;
}

@property(nonatomic) struct CGAffineTransform sourceTrackPreferredTransform; // @synthesize sourceTrackPreferredTransform=_sourceTrackPreferredTransform;
@property(readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSArray *requiredSourceTrackIDs; // @synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (void)dealloc;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 sourceTrackIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;
@property(readonly, nonatomic) int passthroughTrackID; // @dynamic passthroughTrackID;
@property(readonly, nonatomic) _Bool containsTweening; // @dynamic containsTweening;
@property(readonly, nonatomic) _Bool enablePostProcessing; // @dynamic enablePostProcessing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

