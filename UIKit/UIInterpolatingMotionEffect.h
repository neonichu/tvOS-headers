//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIMotionEffect.h>

@class NSString;

@interface UIInterpolatingMotionEffect : UIMotionEffect
{
    double _horizontalAccelerationBoostFactor;
    double _verticalAccelerationBoostFactor;
    NSString *_keyPath;
    long long _type;
    id _minimumRelativeValue;
    id _maximumRelativeValue;
}

@property(retain, nonatomic) id maximumRelativeValue; // @synthesize maximumRelativeValue=_maximumRelativeValue;
@property(retain, nonatomic) id minimumRelativeValue; // @synthesize minimumRelativeValue=_minimumRelativeValue;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (void)_setType:(long long)arg1;
- (void)_setKeyPath:(id)arg1;
- (void)_setVerticalAccelerationBoostFactor:(double)arg1;
- (double)_verticalAccelerationBoostFactor;
- (void)_setHorizontalAccelerationBoostFactor:(double)arg1;
- (double)_horizontalAccelerationBoostFactor;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (id)init;
- (id)initWithKeyPath:(id)arg1 type:(long long)arg2;

@end

