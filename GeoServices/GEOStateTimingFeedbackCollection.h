//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOStateTimingFeedbackCollection : PBCodable <NSCopying>
{
    CDStruct_612aec5b _sessionID;
    double _durationInOldState;
    double _sessionRelativeTimestamp;
    NSMutableArray *_stateTransitions;
    struct {
        unsigned int sessionID:1;
        unsigned int durationInOldState:1;
        unsigned int sessionRelativeTimestamp:1;
    } _has;
}

@property(nonatomic) double sessionRelativeTimestamp; // @synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp;
@property(nonatomic) double durationInOldState; // @synthesize durationInOldState=_durationInOldState;
@property(retain, nonatomic) NSMutableArray *stateTransitions; // @synthesize stateTransitions=_stateTransitions;
@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSessionRelativeTimestamp;
@property(nonatomic) _Bool hasDurationInOldState;
- (id)stateTransitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)stateTransitionsCount;
- (void)addStateTransition:(id)arg1;
- (void)clearStateTransitions;
@property(nonatomic) _Bool hasSessionID;
- (void)dealloc;

@end

