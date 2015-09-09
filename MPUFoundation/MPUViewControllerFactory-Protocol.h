//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/NSObject-Protocol.h>

@class MPMediaQuery, MPUDataSource, MPUViewControllerConfiguration, NSString, UIViewController;

@protocol MPUViewControllerFactory <NSObject>
+ (UIViewController *)viewControllerForIdentifier:(NSString *)arg1 withDataSource:(MPUDataSource *)arg2;
+ (UIViewController *)viewControllerForIdentifier:(NSString *)arg1 withQuery:(MPMediaQuery *)arg2;
+ (UIViewController *)viewControllerForIdentifier:(NSString *)arg1;
+ (void)registerViewControllerIdentifier:(NSString *)arg1 withConfigurationBlock:(MPUViewControllerConfiguration * (^)(void))arg2;
+ (void)registerViewControllerIdentifier:(NSString *)arg1 withConfiguration:(MPUViewControllerConfiguration *)arg2;
+ (MPUDataSource *)dataSourceForViewControllerIdentifier:(NSString *)arg1 withQuery:(MPMediaQuery *)arg2;
+ (MPUDataSource *)dataSourceForViewControllerIdentifier:(NSString *)arg1;
+ (MPUViewControllerConfiguration *)configurationForViewControllerIdentifier:(NSString *)arg1;
@end

