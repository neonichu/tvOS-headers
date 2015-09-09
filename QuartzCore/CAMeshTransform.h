//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuartzCore/NSCoding-Protocol.h>
#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSMutableCopying-Protocol.h>

@class NSString;

@interface CAMeshTransform : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
    void *_impl;
    unsigned long long _normalization;
    long long _subdivisionSteps;
}

+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
+ (void)CAMLParserStartElement:(id)arg1;
+ (id)meshTransformWithVertexCount:(unsigned long long)arg1 vertices:(const struct CAMeshVertex *)arg2 faceCount:(unsigned long long)arg3 faces:(const struct CAMeshFace *)arg4 depthNormalization:(id)arg5;
- (id)meshTransformForLayer:(id)arg1;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_subdivideToDepth:(long long)arg1;
- (id)_data;
- (_Bool)_constructWithData:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct Object *)CA_copyRenderValue;
@property(readonly) int subdivisionSteps;
@property(readonly, copy) NSString *depthNormalization;
- (struct CAMeshFace)faceAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long faceCount;
- (struct CAMeshVertex)vertexAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long vertexCount;
- (id)_initWithMeshTransform:(id)arg1;
- (id)initWithVertexCount:(unsigned long long)arg1 vertices:(const struct CAMeshVertex *)arg2 faceCount:(unsigned long long)arg3 faces:(const struct CAMeshFace *)arg4 depthNormalization:(id)arg5;
- (id)_init;
- (id)init;
- (void)dealloc;

@end

