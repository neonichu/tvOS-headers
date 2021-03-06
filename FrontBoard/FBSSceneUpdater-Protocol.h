//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSScene, FBSSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneLayer, FBSSceneTransitionContext, NSSet, NSString;
@protocol FBSSceneUpdaterDelegate;

@protocol FBSSceneUpdater <NSObject>
- (void)scene:(FBSScene *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)scene:(FBSScene *)arg1 didUpdateClientSettings:(FBSSceneClientSettings *)arg2 withDiff:(FBSSceneClientSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)scene:(FBSScene *)arg1 didDetachLayer:(FBSSceneLayer *)arg2;
- (void)scene:(FBSScene *)arg1 didUpdateLayer:(FBSSceneLayer *)arg2;
- (void)scene:(FBSScene *)arg1 didAttachLayer:(FBSSceneLayer *)arg2;
- (_Bool)willObserveLayersManually;
- (void)unregisterDelegateForSceneID:(NSString *)arg1;
- (void)registerDelegate:(id <FBSSceneUpdaterDelegate>)arg1 forSceneID:(NSString *)arg2;
@end

