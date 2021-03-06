//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhysicsKit/NSCoding-Protocol.h>

@class NSMutableArray;
@protocol PKPhysicsContactDelegate;

@interface PKPhysicsWorld : NSObject <NSCoding>
{
    struct b2World *_world;
    struct b2Vec2 _gravity;
    _Bool _doSleep;
    double _accumulatedDt;
    struct PKContactListener _contactListener;
    float _speed;
    NSMutableArray *_bodies;
    NSMutableArray *_joints;
    NSMutableArray *_postStepBlocks;
    struct PKDebugDrawPacket drawPacket;
}

+ (id)world;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3;
- (struct CGVector)evalForce:(unsigned int)arg1 point:(struct CGPoint)arg2;
-     // Error parsing type: 32@0:816, name: sampleFieldsAt:
- (struct CGVector)sampleFields:(struct CGPoint)arg1;
- (id)sampleFields:(struct CGRect)arg1 categories:(unsigned int)arg2 dataSize:(struct CGSize)arg3;
- (void)removeAllFields;
- (void)removeField:(id)arg1;
- (void)addField:(id)arg1;
- (void)removeAllJoints;
- (void)removeJoint:(id)arg1;
- (void)addJoint:(id)arg1;
- (void)removeAllBodies;
- (void)removeBody:(id)arg1;
- (void)addBody:(id)arg1;
- (id)joints;
- (id)bodies;
@property(nonatomic) id <PKPhysicsContactDelegate> contactDelegate;
- (id)collisionDelegate;
- (void)setCollisionDelegate:(id)arg1;
@property(nonatomic) struct CGVector gravity;
- (_Bool)hasFields;
- (_Bool)hasBodies;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)__init__;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) double velocityThreshold;
@property(nonatomic) double speed;
- (id)bodyAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
- (id)bodyInRect:(struct CGRect)arg1;
- (id)bodyAtPoint:(struct CGPoint)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateBodiesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateBodiesAtPoint:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) struct PKCAether *aether;
- (const struct PKDebugDrawPacket *)debugDrawPacket;
- (void)debugDraw:(float)arg1 matrix:(union _GLKMatrix4)arg2 showsPhysics:(_Bool)arg3 showsOutlineInterior:(_Bool)arg4 showsFields:(_Bool)arg5;
- (void)_runBlockOutsideOfTimeStep:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool _doSleep;
@property(retain, nonatomic) NSMutableArray *_bodies;
@property(nonatomic) struct b2Vec2 _gravity;
@property(readonly, nonatomic) struct b2World *_world;

@end

