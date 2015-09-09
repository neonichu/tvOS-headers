//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIMotionEffect.h>

@interface _UITiltMotionEffect : UIMotionEffect
{
    double _maximumHorizontalTiltAngle;
    double _maximumVerticalTiltAngle;
    double _rotatingSphereRadius;
}

@property(nonatomic) double rotatingSphereRadius; // @synthesize rotatingSphereRadius=_rotatingSphereRadius;
@property(nonatomic) double maximumVerticalTiltAngle; // @synthesize maximumVerticalTiltAngle=_maximumVerticalTiltAngle;
@property(nonatomic) double maximumHorizontalTiltAngle; // @synthesize maximumHorizontalTiltAngle=_maximumHorizontalTiltAngle;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;

@end

