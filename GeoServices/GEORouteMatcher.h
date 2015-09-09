//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOComposedRoute;

@interface GEORouteMatcher : NSObject
{
    GEOComposedRoute *_route;
}

- (_Bool)_shouldConsiderCourseForLocation:(id)arg1;
- (double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (void)_considerCandidateMatch:(id)arg1;
- (void)_startRouteMatch;
- (id)_candidateForSegment:(const CDStruct_4d790470 *)arg1 location:(id)arg2;
- (void)_forEachSegmentNearLocation:(id)arg1 previousRouteMatch:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)matchToClosestPointOnRouteWithLocation:(id)arg1;
- (id)matchToRouteWithLocation:(id)arg1 previousRouteMatch:(id)arg2;
- (id)matchToRouteWithLocation:(id)arg1;
- (void)dealloc;
- (id)initWithRoute:(id)arg1;

@end

