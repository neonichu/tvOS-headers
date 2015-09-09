//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOComposedWalkingRouteStep.h>

@class NSArray;

@interface GEOComposedWalkingUncertainArrivalRouteStep : GEOComposedWalkingRouteStep
{
    NSArray *_aggregatedGEOSteps;
    unsigned int _aggregatedStepsDistance;
    unsigned int _aggregatedStepsDuration;
}

- (unsigned int)_calculateAggregatedStepsDistance;
- (unsigned int)distance;
- (unsigned int)_calculateAggregatedStepsDuration;
- (unsigned int)duration;
- (_Bool)isUncertainArrival;
- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1 aggregatedGEOSteps:(id)arg2 stepIndex:(unsigned long long)arg3 pointRange:(struct _NSRange)arg4 maneuverPointRange:(struct _NSRange)arg5;

@end

