//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVVideoCompositionInstruction.h>

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction
{
    AVMutableVideoCompositionInstructionInternal *_mutableInstruction;
}

+ (id)videoCompositionInstruction;
@property(nonatomic) _Bool enablePostProcessing;
@property(copy, nonatomic) NSArray *layerInstructions;
@property(retain, nonatomic) struct CGColor *backgroundColor;
@property(nonatomic) CDStruct_e83c9415 timeRange;

@end

