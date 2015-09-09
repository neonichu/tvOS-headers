//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSDate, NSSet, NSString;
@protocol GEOTransitSystem;

@protocol GEOMapItemTransitSchedule <NSObject>
@property(readonly, nonatomic) unsigned long long numAdditionalDepartures;
@property(readonly, nonatomic) NSDate *lastFullScheduleValidDate;
@property(readonly, nonatomic) NSArray *departureSequences;
- (NSArray *)sequencesForSystem:(id <GEOTransitSystem>)arg1 excludingLines:(NSSet *)arg2 direction:(NSString *)arg3 validForDateFromBlock:(NSDate * (^)(id <GEOTransitDepartureSequence>))arg4;
- (NSArray *)directionsForSystem:(id <GEOTransitSystem>)arg1 excludingLines:(NSSet *)arg2 validForDateFromBlock:(NSDate * (^)(id <GEOTransitDepartureSequence>))arg3 hasSequencesWithNoDirection:(out _Bool *)arg4;
- (NSArray *)departureSequencesForSystem:(id <GEOTransitSystem>)arg1 excludingLines:(NSSet *)arg2 direction:(NSString *)arg3 validForDateFromBlock:(NSDate * (^)(id <GEOTransitDepartureSequence>))arg4;
@end

