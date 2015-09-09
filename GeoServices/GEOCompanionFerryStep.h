//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOCompanionManeuverStep-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOCompanionFerryStep : PBCodable <GEOCompanionManeuverStep, NSCopying>
{
    CDStruct_e02beb0c *_junctionElements;
    unsigned long long _junctionElementsCount;
    unsigned long long _junctionElementsSpace;
    int _junctionType;
    NSMutableArray *_maneuverNames;
    int _maneuverType;
    NSMutableArray *_signposts;
    CDStruct_efbf2325 _has;
}

@property(retain, nonatomic) NSMutableArray *signposts; // @synthesize signposts=_signposts;
@property(retain, nonatomic) NSMutableArray *maneuverNames; // @synthesize maneuverNames=_maneuverNames;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)setJunctionElements:(CDStruct_e02beb0c *)arg1 count:(unsigned long long)arg2;
- (CDStruct_e02beb0c)junctionElementAtIndex:(unsigned long long)arg1;
- (void)addJunctionElement:(CDStruct_e02beb0c)arg1;
- (void)clearJunctionElements;
@property(readonly, nonatomic) CDStruct_e02beb0c *junctionElements;
@property(readonly, nonatomic) unsigned long long junctionElementsCount;
@property(nonatomic) _Bool hasJunctionType;
@property(nonatomic) int junctionType; // @synthesize junctionType=_junctionType;
- (id)signpostAtIndex:(unsigned long long)arg1;
- (unsigned long long)signpostsCount;
- (void)addSignpost:(id)arg1;
- (void)clearSignposts;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)maneuverNamesCount;
- (void)addManeuverName:(id)arg1;
- (void)clearManeuverNames;
@property(nonatomic) _Bool hasManeuverType;
@property(nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
- (void)dealloc;
@property(readonly, nonatomic) int transportType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

