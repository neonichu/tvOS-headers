//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableObject;

@interface HDCodableSample : PBCodable <NSCopying>
{
    long long _dataType;
    double _endDate;
    double _startDate;
    HDCodableObject *_object;
    struct {
        unsigned int dataType:1;
        unsigned int endDate:1;
        unsigned int startDate:1;
    } _has;
}

@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(retain, nonatomic) HDCodableObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;
@property(nonatomic) _Bool hasDataType;
@property(readonly, nonatomic) _Bool hasObject;
- (id)decodedCorrelationType;
- (id)decodedWorkoutType;
- (id)decodedCategoryType;
- (id)decodedQuantityType;
- (id)_decodedObjectTypeOfClass:(Class)arg1;
- (id)decodedEndDate;
- (id)decodedStartDate;

@end

