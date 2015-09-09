//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>

@class NSArray, NSString, SCNOrderedDictionary;

@interface SCNConstraint : NSObject <NSCopying, NSSecureCoding, SCNAnimatable>
{
    struct __C3DConstraint *_constraintRef;
    SCNOrderedDictionary *_animations;
    _Bool _enabled;
    double _influenceFactor;
}

+ (_Bool)supportsSecureCoding;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (void *)__CFObject;
- (_Bool)isPausedOrPausedByInheritance;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)finalizeDecodeConstraint:(id)arg1;
@property(nonatomic) double influenceFactor;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (void)setConstraintRef:(struct __C3DConstraint *)arg1;
- (struct __C3DConstraint *)constraintRef;
- (void)setName:(id)arg1;
- (id)name;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

