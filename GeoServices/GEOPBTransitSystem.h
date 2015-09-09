//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitNamedItem-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitArtwork, GEOStyleAttributes, NSString;

@interface GEOPBTransitSystem : PBCodable <GEOTransitNamedItem, NSCopying>
{
    unsigned long long _muid;
    GEOPBTransitArtwork *_artwork;
    unsigned int _brandIndex;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _systemIndex;
    NSString *_website;
    struct {
        unsigned int muid:1;
        unsigned int brandIndex:1;
        unsigned int systemIndex:1;
    } _has;
}

@property(retain, nonatomic) NSString *nameDisplayString; // @synthesize nameDisplayString=_nameDisplayString;
@property(retain, nonatomic) GEOPBTransitArtwork *artwork; // @synthesize artwork=_artwork;
@property(nonatomic) unsigned int brandIndex; // @synthesize brandIndex=_brandIndex;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) NSString *website; // @synthesize website=_website;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(nonatomic) unsigned int systemIndex; // @synthesize systemIndex=_systemIndex;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasNameDisplayString;
@property(readonly, nonatomic) _Bool hasArtwork;
@property(nonatomic) _Bool hasBrandIndex;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
@property(readonly, nonatomic) _Bool hasWebsite;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) _Bool hasSystemIndex;
- (void)dealloc;
- (id)geoTransitSystem;
- (id)bestName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

