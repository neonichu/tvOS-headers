//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKitExtensions/NSObject-Protocol.h>

@class HKAchievement, NSArray, NSDate;

@protocol HKExtendedServerInterface <NSObject>
- (void)runAchievementsFixupAsDryRun:(_Bool)arg1 completion:(void (^)(NSArray *, _Bool, NSError *))arg2;
- (void)addAchievement:(HKAchievement *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)markAchievementAsViewed:(HKAchievement *)arg1 completion:(void (^)(HKAchievement *, NSError *))arg2;
- (void)fetchNumberOfUnviewedAchievementsWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)markAchievementsAlerted:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)fetchUnalertedAchievementsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchAchievementsWithCompletedDateBetweenStart:(NSDate *)arg1 end:(NSDate *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)registerForAchievementNotificationsAndFetchUnalertedCountWithCompletion:(void (^)(long long, NSError *))arg1;
@end

