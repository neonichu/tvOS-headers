//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/_MTLComputePipelineState.h>

#import <Metal/MTLComputePipelineState-Protocol.h>

@class NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface _MTLFakeComputePipelineState : _MTLComputePipelineState <MTLComputePipelineState>
{
    unsigned long long _maxTotalThreadsPerThreadgroup;
    unsigned long long _threadExecutionWidth;
}

@property(readonly) unsigned long long threadExecutionWidth; // @synthesize threadExecutionWidth=_threadExecutionWidth;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup; // @synthesize maxTotalThreadsPerThreadgroup=_maxTotalThreadsPerThreadgroup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

