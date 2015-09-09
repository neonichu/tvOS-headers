//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDAggregateDataCollector.h>

@class CMPedometer;

@interface HDPedometerDataCollector : HDAggregateDataCollector
{
    CMPedometer *_pedometer;
}

+ (Class)sensorDatumClass;
+ (id)createCollectorsForCurrentHardware:(id)arg1;
- (void).cxx_destruct;
- (id)_queue_pedometer;
- (id)pedometer;
- (void)setPedometer:(id)arg1;
- (id)quantitySampleFromPedometerData:(id)arg1 toPedometerData:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)stopPerformingUpdatesWithErrorEncountered:(_Bool)arg1;
- (id)hkObjectsFromSensorData:(id)arg1 baseSensorDatum:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)fetchHistoricalSensorDataSinceDatum:(id)arg1 databaseIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginUpdatesFromDatum:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithHealthDaemon:(id)arg1;

@end

