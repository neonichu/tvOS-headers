//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@interface SCNAction : NSObject <NSCopying, NSSecureCoding>
{
    struct SCNCAction *_caction;
}

+ (id)actionNamed:(id)arg1;
+ (id)customActionWithDuration:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;
+ (id)javaScriptActionWithScript:(id)arg1 duration:(double)arg2;
+ (id)runAction:(id)arg1 onChildNodeWithName:(id)arg2;
+ (id)runBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
+ (id)runBlock:(CDUnknownBlockType)arg1;
+ (id)performSelector:(SEL)arg1 onTarget:(id)arg2;
+ (id)removeFromParentNode;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;
+ (id)waitForDuration:(double)arg1;
+ (id)playAudioSource:(id)arg1 waitForCompletion:(_Bool)arg2;
+ (id)unhide;
+ (id)hide;
+ (id)fadeOpacityTo:(double)arg1 duration:(double)arg2;
+ (id)fadeOpacityBy:(double)arg1 duration:(double)arg2;
+ (id)fadeOutWithDuration:(double)arg1;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)repeatActionForever:(id)arg1;
+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;
+ (id)group:(id)arg1;
+ (id)sequence:(id)arg1;
+ (id)scaleTo:(double)arg1 duration:(double)arg2;
+ (id)scaleBy:(double)arg1 duration:(double)arg2;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(_Bool)arg5;
+ (id)rotateToAxisAngle:(struct SCNVector4)arg1 duration:(double)arg2;
+ (id)rotateByAngle:(double)arg1 aroundAxis:(struct SCNVector3)arg2 duration:(double)arg3;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)moveTo:(struct SCNVector3)arg1 duration:(double)arg2;
+ (id)moveBy:(struct SCNVector3)arg1 duration:(double)arg2;
+ (id)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (_Bool)supportsSecureCoding;
+ (void)setEditingModeEnabled:(_Bool)arg1;
+ (_Bool)editingModeEnabled;
- (void)dealloc;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
@property(nonatomic) double speed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)parameters;
- (_Bool)isRelative;
- (_Bool)isCustom;
@property(nonatomic) long long timingMode;
- (void)setDurationRange:(double)arg1;
- (double)durationRange;
@property(nonatomic) double duration;
- (struct SCNCAction *)caction;
@property(nonatomic) CDUnknownBlockType timingFunction;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setKey:(id)arg1;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (void)wasRemovedFromTarget:(id)arg1 atTime:(double)arg2;
- (void)wasAddedToTarget:(id)arg1 atTime:(double)arg2;
- (double)ratioForTime:(double)arg1;
- (void)setFinished:(_Bool)arg1;
- (_Bool)finished;
- (void)timeJumpWithTarget:(id)arg1 timeOffset:(double)arg2;
- (void)willResumeWithTarget:(id)arg1 atTime:(double)arg2;
- (void)wasPausedWithTarget:(id)arg1 atTime:(double)arg2;
- (void)setCppAction:(void *)arg1;

@end

