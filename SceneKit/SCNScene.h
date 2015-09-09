//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, SCNAuthoringEnvironment, SCNMaterialProperty, SCNNode, SCNPhysicsWorld, SCNSceneSource;

@interface SCNScene : NSObject <NSSecureCoding>
{
    struct __C3DScene *_scene;
    SCNSceneSource *_sceneSource;
    double _lastEvalTime;
    SCNPhysicsWorld *_physicsWorld;
    SCNNode *_rootNode;
    SCNMaterialProperty *_background;
    NSMutableDictionary *_userAttributes;
    double _fogStartDistance;
    double _fogEndDistance;
    double _fogDensityExponent;
    id _fogColor;
    _Bool _paused;
    _Bool _pausedForEditing;
    SCNAuthoringEnvironment *_authoringEnvironment;
}

+ (_Bool)supportsSecureCoding;
+ (SEL)jsConstructor;
+ (id)supportedFileUTIsForExport;
+ (id)supportedFileUTIsForImport;
+ (_Bool)canImportFileExtension:(id)arg1;
+ (_Bool)canImportFileUTI:(id)arg1;
+ (id)sceneWithSceneRef:(struct __C3DScene *)arg1;
+ (id)sceneWithData:(id)arg1 options:(id)arg2;
+ (id)sceneWithData:(id)arg1 atIndex:(long long)arg2 options:(id)arg3;
+ (id)sceneWithURL:(id)arg1 atIndex:(long long)arg2 options:(id)arg3;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2;
+ (id)sceneNamed:(id)arg1 options:(id)arg2;
+ (id)sceneNamed:(id)arg1 inDirectory:(id)arg2 options:(id)arg3;
+ (id)sceneNamed:(id)arg1;
+ (id)scene;
+ (id)sceneWithMDLAsset:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didEncodeSCNScene:(id)arg1;
- (void)_didDecodeSCNScene:(id)arg1;
- (void)_customDecodingOfSCNScene:(id)arg1;
- (void)_customEncodingOfSCNScene:(id)arg1;
- (id)initForJavascript:(id)arg1;
- (_Bool)isPausedForEditing;
- (void)setPausedForEditing:(_Bool)arg1;
- (_Bool)isPausedOrPausedByInheritance;
@property(nonatomic, getter=isPaused) _Bool paused;
- (id)particleSystems;
- (void)removeAllParticleSystems;
- (void)removeParticleSystem:(id)arg1;
- (void)addParticleSystem:(id)arg1 withTransform:(struct SCNMatrix4)arg2;
- (void)addSceneAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3;
- (void *)__CFObject;
- (id)valueForUndefinedKey:(id)arg1;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (void)unlock;
- (void)lock;
- (_Bool)writeToURL:(id)arg1 options:(id)arg2 delegate:(id)arg3 progressHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) double fogStartDistance;
@property(nonatomic) double fogDensityExponent;
@property(nonatomic) double fogEndDistance;
@property(retain, nonatomic) id fogColor;
@property(readonly, nonatomic) SCNMaterialProperty *background;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setPlaybackSpeed:(float)arg1;
- (float)playbackSpeed;
- (void)setFrameRate:(double)arg1;
- (double)frameRate;
- (void)setEndTime:(double)arg1;
- (double)endTime;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (id)_physicsWorldCreateIfNeeded:(_Bool)arg1;
@property(readonly, nonatomic) SCNPhysicsWorld *physicsWorld;
- (void)_scaleSceneBy:(double)arg1;
- (void)setRootNode:(id)arg1;
- (void)_setRootNode:(id)arg1;
@property(readonly, nonatomic) SCNNode *rootNode;
- (id)root;
- (id)sceneSource;
- (void)setSceneSource:(id)arg1;
- (struct __C3DScene *)sceneRef;
- (id)_scenes;
- (id)scene;
- (void)setLastEvalTime:(double)arg1;
- (double)lastEvalTime;
- (void)dealloc;
- (void)setUpAxis:(struct SCNVector3)arg1;
- (struct SCNVector3)upAxis;
- (void)_syncObjCModel;
- (id)initWithSceneRef:(struct __C3DScene *)arg1;
- (id)init;
- (_Bool)writeToURL:(id)arg1 options:(id)arg2;
- (id)debugQuickLookObjectWithPointOfView:(id)arg1;
- (id)debugQuickLookObject;

@end

