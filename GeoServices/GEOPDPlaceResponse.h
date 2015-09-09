//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceGlobalResult, NSMutableArray, NSString;

@interface GEOPDPlaceResponse : PBCodable <NSCopying>
{
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    GEOPDPlaceGlobalResult *_globalResult;
    NSMutableArray *_placeResults;
    int _requestType;
    NSMutableArray *_spokenLanguages;
    int _status;
    struct {
        unsigned int requestType:1;
        unsigned int status:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *spokenLanguages; // @synthesize spokenLanguages=_spokenLanguages;
@property(retain, nonatomic) NSString *displayRegion; // @synthesize displayRegion=_displayRegion;
@property(retain, nonatomic) NSMutableArray *displayLanguages; // @synthesize displayLanguages=_displayLanguages;
@property(retain, nonatomic) NSMutableArray *placeResults; // @synthesize placeResults=_placeResults;
@property(retain, nonatomic) GEOPDPlaceGlobalResult *globalResult; // @synthesize globalResult=_globalResult;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)spokenLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenLanguagesCount;
- (void)addSpokenLanguage:(id)arg1;
- (void)clearSpokenLanguages;
@property(readonly, nonatomic) _Bool hasDisplayRegion;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLanguagesCount;
- (void)addDisplayLanguage:(id)arg1;
- (void)clearDisplayLanguages;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeResultsCount;
- (void)addPlaceResult:(id)arg1;
- (void)clearPlaceResults;
@property(readonly, nonatomic) _Bool hasGlobalResult;
@property(nonatomic) _Bool hasRequestType;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)dealloc;
- (id)_disambiguationLabels;
- (id)initWithPlace:(id)arg1 forRequestType:(int)arg2;

@end

