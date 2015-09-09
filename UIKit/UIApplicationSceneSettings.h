//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSSceneSettings.h>

#import <UIKit/UIApplicationSceneSettings-Protocol.h>

@class NSNumber, NSString;

@interface UIApplicationSceneSettings : FBSSceneSettings <UIApplicationSceneSettings>
{
}

- (_Bool)isUISubclass;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool idleModeEnabled;
@property(readonly, nonatomic) _Bool canShowAlerts;
@property(readonly, nonatomic) _Bool deviceOrientationEventsEnabled;
@property(readonly, retain, nonatomic) NSNumber *forcedStatusBarHidden;
@property(readonly, retain, nonatomic) NSNumber *forcedStatusBarStyle;
@property(readonly, nonatomic) unsigned long long deactivationReasons;
@property(readonly, nonatomic) int statusBarStyleOverridesToSuppress;
@property(readonly, nonatomic) _Bool underLock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

