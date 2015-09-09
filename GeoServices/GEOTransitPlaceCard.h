//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTransitDepartureSequenceUsage, NSString;

@interface GEOTransitPlaceCard : PBCodable <NSCopying>
{
    NSString *_incidentType;
    int _transitCategory;
    GEOTransitDepartureSequenceUsage *_transitDepartureSequenceUsage;
    NSString *_transitSystemName;
    struct {
        unsigned int transitCategory:1;
    } _has;
}

@property(retain, nonatomic) NSString *incidentType; // @synthesize incidentType=_incidentType;
@property(retain, nonatomic) GEOTransitDepartureSequenceUsage *transitDepartureSequenceUsage; // @synthesize transitDepartureSequenceUsage=_transitDepartureSequenceUsage;
@property(retain, nonatomic) NSString *transitSystemName; // @synthesize transitSystemName=_transitSystemName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasIncidentType;
@property(readonly, nonatomic) _Bool hasTransitDepartureSequenceUsage;
@property(readonly, nonatomic) _Bool hasTransitSystemName;
@property(nonatomic) _Bool hasTransitCategory;
@property(nonatomic) int transitCategory; // @synthesize transitCategory=_transitCategory;
- (void)dealloc;

@end

