//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLRenderPipelineDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor
{
    struct MTLRenderPipelineDescriptorPrivate _private;
}

- (id)serializedVertexData;
- (id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 error:(id *)arg2;
- (id)serializeFragmentData;
- (void)validateWithDevice:(id)arg1;
- (void)setStencilAttachmentPixelFormat:(unsigned long long)arg1;
- (unsigned long long)stencilAttachmentPixelFormat;
- (void)setDepthAttachmentPixelFormat:(unsigned long long)arg1;
- (unsigned long long)depthAttachmentPixelFormat;
- (id)colorAttachments;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (const struct MTLRenderPipelineDescriptorPrivate *)_descriptorPrivate;
- (id)vertexDescriptor;
- (void)setVertexDescriptor:(id)arg1;
- (id)fragmentFunction;
- (void)setFragmentFunction:(id)arg1;
- (id)vertexFunction;
- (void)setVertexFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)fastBlendDescriptorAtIndex:(unsigned long long)arg1;
- (void)reset;
- (void)setVertexEnabled:(_Bool)arg1;
- (_Bool)isVertexEnabled;
- (void)setRasterizationEnabled:(_Bool)arg1;
- (_Bool)isRasterizationEnabled;
- (void)setAlphaToOneEnabled:(_Bool)arg1;
- (_Bool)isAlphaToOneEnabled;
- (void)setAlphaToCoverageEnabled:(_Bool)arg1;
- (_Bool)isAlphaToCoverageEnabled;
- (void)setSampleCoverage:(float)arg1;
- (float)sampleCoverage;
- (void)setSampleMask:(unsigned long long)arg1;
- (unsigned long long)sampleMask;
- (void)setSampleCount:(unsigned long long)arg1;
- (unsigned long long)sampleCount;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

