//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>

@interface CLLocationMatchInfoInternal : NSObject <NSCopying>
{
    long long fMatchQuality;
    CDStruct_2c43369c fMatchCoordinate;
    double fMatchCourse;
    int fMatchFormOfWay;
    int fMatchRoadClass;
    _Bool fMatchShifted;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(CDStruct_c3b9c2ee)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(_Bool)arg6;

@end

