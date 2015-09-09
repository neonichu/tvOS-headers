//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOTileGroup : PBCodable <NSCopying>
{
    CDStruct_d66e66b9 *_hybridUnavailableRegions;
    unsigned long long _hybridUnavailableRegionsCount;
    unsigned long long _hybridUnavailableRegionsSpace;
    CDStruct_3f74b7eb *_regionalResourceIndexs;
    unsigned long long _regionalResourceIndexsCount;
    unsigned long long _regionalResourceIndexsSpace;
    CDStruct_9f2792e4 _attributionIndexs;
    CDStruct_9f2792e4 _fontIndexs;
    CDStruct_9f2792e4 _iconIndexs;
    CDStruct_9f2792e4 _styleSheetIndexs;
    CDStruct_9f2792e4 _textureIndexs;
    CDStruct_9f2792e4 _xmlIndexs;
    CDStruct_c0454aff *_tileSets;
    unsigned long long _tileSetsCount;
    unsigned long long _tileSetsSpace;
    unsigned int _attributionBadgeIndex;
    unsigned int _identifier;
    struct {
        unsigned int attributionBadgeIndex:1;
    } _has;
}

@property(nonatomic) unsigned int attributionBadgeIndex; // @synthesize attributionBadgeIndex=_attributionBadgeIndex;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setHybridUnavailableRegions:(CDStruct_d66e66b9 *)arg1 count:(unsigned long long)arg2;
- (CDStruct_d66e66b9)hybridUnavailableRegionAtIndex:(unsigned long long)arg1;
- (void)addHybridUnavailableRegion:(CDStruct_d66e66b9)arg1;
- (void)clearHybridUnavailableRegions;
@property(readonly, nonatomic) CDStruct_d66e66b9 *hybridUnavailableRegions;
@property(readonly, nonatomic) unsigned long long hybridUnavailableRegionsCount;
- (void)setAttributionIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)attributionIndexAtIndex:(unsigned long long)arg1;
- (void)addAttributionIndex:(unsigned int)arg1;
- (void)clearAttributionIndexs;
@property(readonly, nonatomic) unsigned int *attributionIndexs;
@property(readonly, nonatomic) unsigned long long attributionIndexsCount;
@property(nonatomic) _Bool hasAttributionBadgeIndex;
- (void)setXmlIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)xmlIndexAtIndex:(unsigned long long)arg1;
- (void)addXmlIndex:(unsigned int)arg1;
- (void)clearXmlIndexs;
@property(readonly, nonatomic) unsigned int *xmlIndexs;
@property(readonly, nonatomic) unsigned long long xmlIndexsCount;
- (void)setRegionalResourceIndexs:(CDStruct_3f74b7eb *)arg1 count:(unsigned long long)arg2;
- (CDStruct_3f74b7eb)regionalResourceIndexAtIndex:(unsigned long long)arg1;
- (void)addRegionalResourceIndex:(CDStruct_3f74b7eb)arg1;
- (void)clearRegionalResourceIndexs;
@property(readonly, nonatomic) CDStruct_3f74b7eb *regionalResourceIndexs;
@property(readonly, nonatomic) unsigned long long regionalResourceIndexsCount;
- (void)setIconIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)iconIndexAtIndex:(unsigned long long)arg1;
- (void)addIconIndex:(unsigned int)arg1;
- (void)clearIconIndexs;
@property(readonly, nonatomic) unsigned int *iconIndexs;
@property(readonly, nonatomic) unsigned long long iconIndexsCount;
- (void)setFontIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)fontIndexAtIndex:(unsigned long long)arg1;
- (void)addFontIndex:(unsigned int)arg1;
- (void)clearFontIndexs;
@property(readonly, nonatomic) unsigned int *fontIndexs;
@property(readonly, nonatomic) unsigned long long fontIndexsCount;
- (void)setTextureIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)textureIndexAtIndex:(unsigned long long)arg1;
- (void)addTextureIndex:(unsigned int)arg1;
- (void)clearTextureIndexs;
@property(readonly, nonatomic) unsigned int *textureIndexs;
@property(readonly, nonatomic) unsigned long long textureIndexsCount;
- (void)setStyleSheetIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)styleSheetIndexAtIndex:(unsigned long long)arg1;
- (void)addStyleSheetIndex:(unsigned int)arg1;
- (void)clearStyleSheetIndexs;
@property(readonly, nonatomic) unsigned int *styleSheetIndexs;
@property(readonly, nonatomic) unsigned long long styleSheetIndexsCount;
- (void)setTileSets:(CDStruct_c0454aff *)arg1 count:(unsigned long long)arg2;
- (CDStruct_c0454aff)tileSetAtIndex:(unsigned long long)arg1;
- (void)addTileSet:(CDStruct_c0454aff)arg1;
- (void)clearTileSets;
@property(readonly, nonatomic) CDStruct_c0454aff *tileSets;
@property(readonly, nonatomic) unsigned long long tileSetsCount;
- (void)dealloc;

@end

