//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOClientCapabilities : PBCodable <NSCopying>
{
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    NSString *_hardwareModel;
    int _maxManeuverTypeSupported;
    int _maxRouteIncidentSupported;
    unsigned int _maxTrafficSpeedSupported;
    _Bool _internalInstall;
    struct {
        unsigned int maxManeuverTypeSupported:1;
        unsigned int maxRouteIncidentSupported:1;
        unsigned int maxTrafficSpeedSupported:1;
        unsigned int internalInstall:1;
    } _has;
}

@property(retain, nonatomic) NSString *displayRegion; // @synthesize displayRegion=_displayRegion;
@property(retain, nonatomic) NSMutableArray *displayLanguages; // @synthesize displayLanguages=_displayLanguages;
@property(nonatomic) _Bool internalInstall; // @synthesize internalInstall=_internalInstall;
@property(retain, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property(retain, nonatomic) NSString *appMinorVersion; // @synthesize appMinorVersion=_appMinorVersion;
@property(retain, nonatomic) NSString *appMajorVersion; // @synthesize appMajorVersion=_appMajorVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMaxRouteIncidentSupported;
@property(nonatomic) int maxRouteIncidentSupported; // @synthesize maxRouteIncidentSupported=_maxRouteIncidentSupported;
@property(nonatomic) _Bool hasMaxTrafficSpeedSupported;
@property(nonatomic) unsigned int maxTrafficSpeedSupported; // @synthesize maxTrafficSpeedSupported=_maxTrafficSpeedSupported;
@property(readonly, nonatomic) _Bool hasDisplayRegion;
- (id)displayLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLanguagesCount;
- (void)addDisplayLanguages:(id)arg1;
- (void)clearDisplayLanguages;
@property(nonatomic) _Bool hasInternalInstall;
@property(nonatomic) _Bool hasMaxManeuverTypeSupported;
@property(nonatomic) int maxManeuverTypeSupported; // @synthesize maxManeuverTypeSupported=_maxManeuverTypeSupported;
@property(readonly, nonatomic) _Bool hasHardwareModel;
@property(readonly, nonatomic) _Bool hasAppMinorVersion;
@property(readonly, nonatomic) _Bool hasAppMajorVersion;
- (void)dealloc;

@end

