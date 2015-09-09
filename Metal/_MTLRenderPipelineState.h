//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/MTLRenderPipelineState-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState>
{
    NSString *_label;
    id <MTLDevice> _device;
}

@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly) NSString *label; // @synthesize label=_label;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

