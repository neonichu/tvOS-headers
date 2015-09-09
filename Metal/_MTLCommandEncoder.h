//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, _MTLCommandBuffer;
@protocol MTLCommandBuffer, MTLDevice;

@interface _MTLCommandEncoder : NSObject
{
    id <MTLDevice> _device;
    NSString *_label;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    unsigned long long _numThisEncoder;
    unsigned long long _numCommands;
    _Bool _StatEnabled;
    unsigned long long _StatOptions;
    unsigned long long _StatLocations;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property(copy) NSString *label; // @synthesize label=_label;
- (void)incNumCommands;
- (struct MTLStatSampleRec *)newSample;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)endEncoding;
- (id)commandBuffer;
@property(readonly, nonatomic) id <MTLDevice> device;
- (id)description;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1;

@end

