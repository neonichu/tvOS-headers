//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKAnnotationTrackingCameraController.h>

__attribute__((visibility("hidden")))
@interface VKMapAnnotationTrackingCameraController : VKAnnotationTrackingCameraController
{
}

- (void)_rotateToHeadingAnimated:(_Bool)arg1 duration:(double)arg2;
- (void)_goToAnnotationAnimated:(_Bool)arg1 duration:(double)arg2 isInitial:(_Bool)arg3;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
- (double)_minTrackingCameraDistance;
- (double)_zoomLevelForCameraPosition:(struct VKPoint)arg1;

@end

