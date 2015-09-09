//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDPhotoFilter : PBCodable <NSCopying>
{
    CDStruct_43c37391 *_photoSizeFilters;
    unsigned long long _photoSizeFiltersCount;
    unsigned long long _photoSizeFiltersSpace;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setPhotoSizeFilters:(CDStruct_43c37391 *)arg1 count:(unsigned long long)arg2;
- (CDStruct_43c37391)photoSizeFilterAtIndex:(unsigned long long)arg1;
- (void)addPhotoSizeFilter:(CDStruct_43c37391)arg1;
- (void)clearPhotoSizeFilters;
@property(readonly, nonatomic) CDStruct_43c37391 *photoSizeFilters;
@property(readonly, nonatomic) unsigned long long photoSizeFiltersCount;
- (void)dealloc;

@end

