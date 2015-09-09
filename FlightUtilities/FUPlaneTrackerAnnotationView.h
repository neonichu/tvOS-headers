//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

#import <FlightUtilities/MKAnnotation-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FUPlaneTrackerAnnotationView : MKAnnotationView <MKAnnotation>
{
    NSMutableArray *_viewAddedBlock;
    CDStruct_2c43369c _coordinate;
}

+ (id)defaultAnotation;
+ (Class)layerClass;
@property(retain) NSMutableArray *viewAddedBlock; // @synthesize viewAddedBlock=_viewAddedBlock;
@property(nonatomic) CDStruct_2c43369c coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (void)notifyWhenIsVisibleWithBlock:(CDUnknownBlockType)arg1;
- (void)didMoveToSuperview;
- (void)setPlaneImage:(id)arg1;
- (id)init;
- (void)setStartLatitude:(double)arg1 startLongitude:(double)arg2 endLatitude:(double)arg3 endLongitude:(double)arg4;
@property(readonly) CDStruct_2c43369c currentLocation;
@property(nonatomic) double currentProgress;
@property(nonatomic) CDStruct_2c43369c endLocation;
@property(nonatomic) CDStruct_2c43369c startLocation;
- (id)planeLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

