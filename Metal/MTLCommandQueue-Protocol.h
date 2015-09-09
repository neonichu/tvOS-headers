//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/NSObject-Protocol.h>

@class NSString;
@protocol MTLCommandBuffer, MTLDevice;

@protocol MTLCommandQueue <NSObject>
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (void)insertDebugCaptureBoundary;
- (id <MTLCommandBuffer>)commandBufferWithUnretainedReferences;
- (id <MTLCommandBuffer>)commandBuffer;
@end

