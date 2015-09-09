//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDStatisticsBuilder.h>

@class HDDiscreteCollectionCalculator;

@interface HDDiscreteStatisticsBuilder : HDStatisticsBuilder
{
    HDDiscreteCollectionCalculator *_collectionCalculator;
    long long _anchor;
}

- (void).cxx_destruct;
- (void)_setDataCount:(long long)arg1 inStatistics:(id)arg2 forSource:(id)arg3;
- (void)_addSample:(id)arg1 toStatistics:(id)arg2;
- (id)_getQuantitiesBySourceForProperty:(id)arg1 functions:(id)arg2 predicate:(id)arg3 unit:(id)arg4 healthDaemon:(id)arg5 database:(id)arg6;
- (id)_statisticsForPredicate:(id)arg1 shouldStopProcessing:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)updateStatistics:(id)arg1 withSamples:(id)arg2 error:(id *)arg3;
- (id)updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 anchor:(id)arg3 error:(id *)arg4;
- (void)_setupStatistics:(id)arg1 withStats:(const CDStruct_23c51cd0 *)arg2 unit:(id)arg3 collectionCalculator:(id)arg4 sourceManager:(id)arg5;
- (id)_statQuantityBySourceFromIdsAndStats:(id)arg1 unit:(id)arg2 sourceManager:(id)arg3;
- (id)_statisticsArrayWithStartDate:(id)arg1 endDate:(id)arg2 timePeriods:(id)arg3 shouldStopProcessing:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (id)_initialStatisticsForCollection:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sampleCount:(long long)arg4 shouldStopProcessing:(CDUnknownBlockType)arg5 error:(id *)arg6;
- (id)_initialStatisticsForStartDate:(id)arg1 endDate:(id)arg2 shouldStopProcessing:(CDUnknownBlockType)arg3 error:(id *)arg4;

@end

