//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XBApplicationController : NSObject
{
}

+ (id)sharedInstance;
- (void)_captureLaunchImageForApplication:(id)arg1 withCompatibilityInfo:(id)arg2 firstImageIsReady:(CDUnknownBlockType)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(CDUnknownBlockType)arg2;
- (void)_removeLaunchImagesMatchingPredicate:(id)arg1 forApplications:(id)arg2 forgettingApps:(_Bool)arg3;
- (void)_removeCachedLaunchImagesForApplications:(id)arg1 forgettingApps:(_Bool)arg2;
- (void)resetEverything;
- (void)removeAllGeneratedLaunchImagesAndSnapshots;
- (void)removeAllGeneratedLaunchImages;
- (id)allSplashBoardSystemApplications;
- (id)allSplashBoardApplications;
- (id)_allApplications;
- (id)_allApplicationsFilteredBySystem:(_Bool)arg1 bySplashBoard:(_Bool)arg2;
- (void)_migrateDataIfNeeded;

@end

