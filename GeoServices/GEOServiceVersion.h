//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOServiceVersion : PBCodable <NSCopying>
{
    unsigned int _minimumVersion;
    NSMutableArray *_versionDomains;
    struct {
        unsigned int minimumVersion:1;
    } _has;
}

@property(nonatomic) unsigned int minimumVersion; // @synthesize minimumVersion=_minimumVersion;
@property(retain, nonatomic) NSMutableArray *versionDomains; // @synthesize versionDomains=_versionDomains;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMinimumVersion;
- (id)versionDomainAtIndex:(unsigned long long)arg1;
- (unsigned long long)versionDomainsCount;
- (void)addVersionDomain:(id)arg1;
- (void)clearVersionDomains;
- (void)dealloc;

@end

