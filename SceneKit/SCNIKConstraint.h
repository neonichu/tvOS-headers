//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNConstraint.h>

@class NSMutableDictionary, SCNNode;

@interface SCNIKConstraint : SCNConstraint
{
    SCNNode *_chainRootNode;
    struct SCNVector3 _ikTarget;
    NSMutableDictionary *_jointsPerNode;
}

+ (_Bool)supportsSecureCoding;
+ (id)inverseKinematicsConstraintWithChainRootNode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNIKConstraint:(id)arg1;
- (void)_customEncodingOfSCNIKConstraint:(id)arg1;
- (void)_didDecodeSCNIKConstraint:(id)arg1;
- (double)maxAllowedRotationAngleForJoint:(id)arg1;
- (void)setMaxAllowedRotationAngle:(double)arg1 forJoint:(id)arg2;
- (id)jointForNode:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) struct SCNVector3 targetPosition;
- (void)setChainRootNode:(id)arg1;
@property(readonly, nonatomic) SCNNode *chainRootNode;
- (id)initWithChainRootNode:(id)arg1;
- (void)dealloc;
- (id)init;

@end

