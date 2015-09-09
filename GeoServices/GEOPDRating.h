//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDRating : PBCodable <NSCopying>
{
    double _maxScore;
    double _score;
    int _numRatingsUsedForScore;
    int _ratingType;
    struct {
        unsigned int maxScore:1;
        unsigned int score:1;
        unsigned int numRatingsUsedForScore:1;
        unsigned int ratingType:1;
    } _has;
}

+ (id)ratingForPlaceData:(id)arg1 type:(int)arg2;
@property(nonatomic) int numRatingsUsedForScore; // @synthesize numRatingsUsedForScore=_numRatingsUsedForScore;
@property(nonatomic) double score; // @synthesize score=_score;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNumRatingsUsedForScore;
@property(nonatomic) _Bool hasMaxScore;
@property(nonatomic) double maxScore; // @synthesize maxScore=_maxScore;
@property(nonatomic) _Bool hasScore;
@property(nonatomic) _Bool hasRatingType;
@property(nonatomic) int ratingType; // @synthesize ratingType=_ratingType;

@end

