//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKTrafficSegmentsAlongRoute : NSObject
{
    struct vector<TrafficSegment, std::__1::allocator<TrafficSegment>> _segments;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct TrafficSegment *)segmentAtIndex:(unsigned long long)arg1;
- (BOOL)segmentSpeedAtIndex:(unsigned long long)arg1;
- (unsigned long long)segmentCount;
- (void)addSegmentAt:(struct PolylineCoordinate)arg1 forColor:(BOOL)arg2;
- (void)reset;

@end

