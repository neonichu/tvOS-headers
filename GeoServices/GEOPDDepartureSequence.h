//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOPDDepartureSequence : PBCodable <NSCopying>
{
    unsigned long long _lineId;
    CDStruct_43c37391 *_operatingHours;
    unsigned long long _operatingHoursCount;
    unsigned long long _operatingHoursSpace;
    unsigned long long _stopId;
    NSMutableArray *_departureFrequencys;
    NSMutableArray *_departures;
    NSString *_directionNameString;
    NSString *_headsignString;
    struct {
        unsigned int lineId:1;
        unsigned int stopId:1;
    } _has;
}

@property(retain, nonatomic) NSString *headsignString; // @synthesize headsignString=_headsignString;
@property(retain, nonatomic) NSString *directionNameString; // @synthesize directionNameString=_directionNameString;
@property(retain, nonatomic) NSMutableArray *departureFrequencys; // @synthesize departureFrequencys=_departureFrequencys;
@property(retain, nonatomic) NSMutableArray *departures; // @synthesize departures=_departures;
@property(nonatomic) unsigned long long stopId; // @synthesize stopId=_stopId;
@property(nonatomic) unsigned long long lineId; // @synthesize lineId=_lineId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasHeadsignString;
@property(readonly, nonatomic) _Bool hasDirectionNameString;
- (void)setOperatingHours:(CDStruct_43c37391 *)arg1 count:(unsigned long long)arg2;
- (CDStruct_43c37391)operatingHoursAtIndex:(unsigned long long)arg1;
- (void)addOperatingHours:(CDStruct_43c37391)arg1;
- (void)clearOperatingHours;
@property(readonly, nonatomic) CDStruct_43c37391 *operatingHours;
@property(readonly, nonatomic) unsigned long long operatingHoursCount;
- (id)departureFrequencyAtIndex:(unsigned long long)arg1;
- (unsigned long long)departureFrequencysCount;
- (void)addDepartureFrequency:(id)arg1;
- (void)clearDepartureFrequencys;
- (id)departureAtIndex:(unsigned long long)arg1;
- (unsigned long long)departuresCount;
- (void)addDeparture:(id)arg1;
- (void)clearDepartures;
@property(nonatomic) _Bool hasStopId;
@property(nonatomic) _Bool hasLineId;
- (void)dealloc;

@end

