//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNPhysicsField.h>

@interface SCNPhysicsNoiseField : SCNPhysicsField
{
    double _smoothness;
    double _animationSpeed;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)supportsDirection;
- (_Bool)supportsOffset;
@property(nonatomic) double animationSpeed;
@property(nonatomic) double smoothness;
-     // Error parsing type: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}16@0:8, name: _createField
- (id)init;

@end

