//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface FUPlaneTrackerAnnotationLayer : CALayer
{
    CALayer *_planeImageLayer;
    CDStruct_2c43369c _startLocation;
    CDStruct_2c43369c _endLocation;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
@property(nonatomic) __weak CALayer *planeImageLayer; // @synthesize planeImageLayer=_planeImageLayer;
@property(nonatomic) CDStruct_2c43369c endLocation; // @synthesize endLocation=_endLocation;
@property(nonatomic) CDStruct_2c43369c startLocation; // @synthesize startLocation=_startLocation;
- (void).cxx_destruct;
- (double)defaultHeadingForStartPosition:(CDStruct_2c43369c)arg1 endPosition:(CDStruct_2c43369c)arg2 positionPercentage:(double)arg3;
- (CDStruct_2c43369c)geodesicLocationForStartPosition:(CDStruct_2c43369c)arg1 endPosition:(CDStruct_2c43369c)arg2 positionPercentage:(double)arg3;
@property(readonly) CDStruct_2c43369c currentLocation;
- (void)updatePlaneStateForProgress:(double)arg1;
- (void)display;
- (id)actionForKey:(id)arg1;
- (id)init;
- (void)setPlaneImage:(id)arg1;

// Remaining properties
@property(nonatomic) double currentProgress; // @dynamic currentProgress;

@end

