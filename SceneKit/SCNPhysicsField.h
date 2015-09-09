//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class SCNNode, SCNPhysicsWorld;

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding>
{
    struct SCNVector3 _halfExtent;
    double _strength;
    double _falloffExponent;
    double _minimumDistance;
    _Bool _active;
    long long _scope;
    _Bool _usesEllipsoidalExtent;
    _Bool _exclusive;
    struct SCNVector3 _offset;
    struct SCNVector3 _direction;
    unsigned long long _categoryBitMask;
    SCNPhysicsWorld *_world;
    SCNNode *_node;
    // Error parsing type: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}, name: _field
}

+ (_Bool)supportsSecureCoding;
+ (double)_displayScaleFactor;
+ (void)_setDisplayScaleFactor:(double)arg1;
+ (id)magneticField;
+ (id)electricField;
+ (id)springField;
+ (id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)linearGravityField;
+ (id)radialGravityField;
+ (id)vortexField;
+ (id)customFieldWithEvaluationBlock:(CDUnknownBlockType)arg1;
+ (id)dragField;
+ (id)field;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct SCNVector3)evalAtLocation:(struct SCNVector3)arg1;
-     // Error parsing type: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}16@0:8, name: _handle
- (id)_owner;
- (void)_setWorld:(id)arg1;
- (void)_setOwner:(id)arg1;
- (void)_removeOwner;
- (_Bool)supportsOffset;
- (_Bool)supportsDirection;
@property(nonatomic) struct SCNVector3 direction;
@property(nonatomic) struct SCNVector3 offset;
@property(nonatomic, getter=isExclusive) _Bool exclusive;
@property(nonatomic) _Bool usesEllipsoidalExtent;
@property(nonatomic) struct SCNVector3 halfExtent;
@property(nonatomic) long long scope;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) double minimumDistance;
@property(nonatomic) double falloffExponent;
@property(nonatomic) unsigned long long categoryBitMask;
@property(nonatomic) double strength;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupCommonProperties;
-     // Error parsing type: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}16@0:8, name: _createField
- (void)dealloc;
- (id)init;
- (void)_commonInit;

@end

