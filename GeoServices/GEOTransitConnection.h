//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOTransitConnection : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _fromRideIndexs;
    CDStruct_9f2792e4 _toRideIndexs;
    NSMutableArray *_steps;
}

@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)stepAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepsCount;
- (void)addStep:(id)arg1;
- (void)clearSteps;
- (void)setToRideIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)toRideIndexAtIndex:(unsigned long long)arg1;
- (void)addToRideIndex:(unsigned int)arg1;
- (void)clearToRideIndexs;
@property(readonly, nonatomic) unsigned int *toRideIndexs;
@property(readonly, nonatomic) unsigned long long toRideIndexsCount;
- (void)setFromRideIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)fromRideIndexAtIndex:(unsigned long long)arg1;
- (void)addFromRideIndex:(unsigned int)arg1;
- (void)clearFromRideIndexs;
@property(readonly, nonatomic) unsigned int *fromRideIndexs;
@property(readonly, nonatomic) unsigned long long fromRideIndexsCount;
- (void)dealloc;

@end

