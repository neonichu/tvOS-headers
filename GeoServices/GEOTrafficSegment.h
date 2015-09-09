//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOTrafficSegment : PBCodable <NSCopying>
{
    int _speed;
    int _vertexCount;
    int _vertexOffset;
    int _width;
    struct {
        unsigned int speed:1;
        unsigned int width:1;
    } _has;
}

@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) int vertexCount; // @synthesize vertexCount=_vertexCount;
@property(nonatomic) int vertexOffset; // @synthesize vertexOffset=_vertexOffset;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasWidth;
@property(nonatomic) _Bool hasSpeed;
@property(nonatomic) int speed; // @synthesize speed=_speed;

@end

