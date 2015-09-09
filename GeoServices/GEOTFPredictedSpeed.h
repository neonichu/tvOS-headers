//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTFPredictedSpeed : PBCodable <NSCopying>
{
    unsigned int _deltaMinutesInFuture;
    float _deltaSpeed;
    struct {
        unsigned int deltaMinutesInFuture:1;
        unsigned int deltaSpeed:1;
    } _has;
}

@property(nonatomic) float deltaSpeed; // @synthesize deltaSpeed=_deltaSpeed;
@property(nonatomic) unsigned int deltaMinutesInFuture; // @synthesize deltaMinutesInFuture=_deltaMinutesInFuture;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDeltaSpeed;
@property(nonatomic) _Bool hasDeltaMinutesInFuture;

@end

