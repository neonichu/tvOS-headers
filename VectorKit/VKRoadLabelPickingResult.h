//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, VKLabelFeatureMarker;

__attribute__((visibility("hidden")))
@interface VKRoadLabelPickingResult : NSObject
{
    VKLabelFeatureMarker *_labelFeatureMarker;
    float _closestApproach;
    struct CGVector _direction;
}

@property(readonly, nonatomic) struct CGVector direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) float closestApproach; // @synthesize closestApproach=_closestApproach;
@property(readonly, nonatomic) VKLabelFeatureMarker *labelFeatureMarker; // @synthesize labelFeatureMarker=_labelFeatureMarker;
@property(readonly, nonatomic) NSString *name;
- (id)description;
- (void)dealloc;
- (id)initWithFeature:(id)arg1 closestApproach:(float)arg2 direction:(struct CGVector)arg3;

@end
