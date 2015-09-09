//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEORating : PBCodable <NSCopying>
{
    double _maxScore;
    double _score;
    int _numberOfRatings;
    int _numberOfReviews;
    NSString *_provider;
    NSMutableArray *_reviews;
    NSString *_uRL;
    struct {
        unsigned int maxScore:1;
        unsigned int score:1;
        unsigned int numberOfRatings:1;
        unsigned int numberOfReviews:1;
    } _has;
}

@property(nonatomic) int numberOfReviews; // @synthesize numberOfReviews=_numberOfReviews;
@property(retain, nonatomic) NSMutableArray *reviews; // @synthesize reviews=_reviews;
@property(retain, nonatomic) NSString *uRL; // @synthesize uRL=_uRL;
@property(retain, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(nonatomic) int numberOfRatings; // @synthesize numberOfRatings=_numberOfRatings;
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
@property(nonatomic) _Bool hasNumberOfReviews;
- (id)reviewAtIndex:(unsigned long long)arg1;
- (unsigned long long)reviewsCount;
- (void)addReview:(id)arg1;
- (void)clearReviews;
@property(readonly, nonatomic) _Bool hasURL;
@property(readonly, nonatomic) _Bool hasProvider;
@property(nonatomic) _Bool hasNumberOfRatings;
@property(nonatomic) _Bool hasMaxScore;
@property(nonatomic) double maxScore; // @synthesize maxScore=_maxScore;
@property(nonatomic) _Bool hasScore;
- (void)dealloc;
- (id)initWithSampleSizeForUserRatingScore:(unsigned int)arg1 normalizedUserRatingScore:(float)arg2;

@end

