//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOPBTransitIncident : PBCodable <NSCopying>
{
    unsigned long long _incidentMuid;
    NSMutableArray *_affectedEntitys;
    unsigned int _creationDatetime;
    unsigned int _endDatetime;
    int _iconEnum;
    NSString *_longDescriptionString;
    NSString *_messageForAllBlocking;
    NSString *_messageForIncidentType;
    NSString *_messageString;
    NSString *_shortDescriptionString;
    unsigned int _startDatetime;
    NSString *_titleString;
    unsigned int _updatedDatetime;
    _Bool _blocking;
    struct {
        unsigned int incidentMuid:1;
        unsigned int creationDatetime:1;
        unsigned int endDatetime:1;
        unsigned int iconEnum:1;
        unsigned int startDatetime:1;
        unsigned int updatedDatetime:1;
        unsigned int blocking:1;
    } _has;
}

@property(retain, nonatomic) NSString *messageForIncidentType; // @synthesize messageForIncidentType=_messageForIncidentType;
@property(retain, nonatomic) NSString *messageForAllBlocking; // @synthesize messageForAllBlocking=_messageForAllBlocking;
@property(retain, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) NSString *shortDescriptionString; // @synthesize shortDescriptionString=_shortDescriptionString;
@property(retain, nonatomic) NSString *longDescriptionString; // @synthesize longDescriptionString=_longDescriptionString;
@property(nonatomic) _Bool blocking; // @synthesize blocking=_blocking;
@property(retain, nonatomic) NSMutableArray *affectedEntitys; // @synthesize affectedEntitys=_affectedEntitys;
@property(nonatomic) unsigned int updatedDatetime; // @synthesize updatedDatetime=_updatedDatetime;
@property(nonatomic) unsigned int creationDatetime; // @synthesize creationDatetime=_creationDatetime;
@property(nonatomic) unsigned int endDatetime; // @synthesize endDatetime=_endDatetime;
@property(nonatomic) unsigned int startDatetime; // @synthesize startDatetime=_startDatetime;
@property(nonatomic) unsigned long long incidentMuid; // @synthesize incidentMuid=_incidentMuid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMessageForIncidentType;
@property(readonly, nonatomic) _Bool hasMessageForAllBlocking;
@property(readonly, nonatomic) _Bool hasMessageString;
@property(readonly, nonatomic) _Bool hasTitleString;
@property(readonly, nonatomic) _Bool hasShortDescriptionString;
@property(readonly, nonatomic) _Bool hasLongDescriptionString;
@property(nonatomic) _Bool hasBlocking;
- (id)affectedEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)affectedEntitysCount;
- (void)addAffectedEntity:(id)arg1;
- (void)clearAffectedEntitys;
@property(nonatomic) _Bool hasUpdatedDatetime;
@property(nonatomic) _Bool hasCreationDatetime;
@property(nonatomic) _Bool hasEndDatetime;
@property(nonatomic) _Bool hasStartDatetime;
@property(nonatomic) _Bool hasIconEnum;
@property(nonatomic) int iconEnum; // @synthesize iconEnum=_iconEnum;
@property(nonatomic) _Bool hasIncidentMuid;
- (void)dealloc;

@end

