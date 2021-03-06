//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>
#import <ModelIO/NSFastEnumeration-Protocol.h>

@class MDLVertexDescriptor, NSMutableArray, NSURL;
@protocol MDLMeshBufferAllocator;

@interface MDLAsset : NSObject <NSCopying, NSFastEnumeration>
{
    NSURL *_URL;
    NSMutableArray *_objects;
    double _frameInterval;
    double _startTime;
    double _endTime;
    id <MDLMeshBufferAllocator> _bufferAllocator;
    MDLVertexDescriptor *_vertexDescriptor;
}

+ (_Bool)canImportFileExtension:(id)arg1;
+ (_Bool)canExportFileExtension:(id)arg1;
@property(readonly, retain, nonatomic) MDLVertexDescriptor *vertexDescriptor; // @synthesize vertexDescriptor=_vertexDescriptor;
@property(readonly, retain, nonatomic) id <MDLMeshBufferAllocator> bufferAllocator; // @synthesize bufferAllocator=_bufferAllocator;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double frameInterval; // @synthesize frameInterval=_frameInterval;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (_Bool)exportAssetToURL:(id)arg1;
- (_Bool)exportAssetToURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3 preserveTopology:(_Bool)arg4 error:(id *)arg5;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct)boundingBoxAtTime:(double)arg1;
@property(readonly, nonatomic) struct boundingBox;
@property(readonly, nonatomic) struct MDLAABB _bounds;
@property(readonly, retain, nonatomic) NSURL *URL;

@end

