//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, UITabBar, UITabBarItem;

@protocol UITabBarDelegate <NSObject>

@optional
- (void)tabBar:(UITabBar *)arg1 didEndCustomizingItems:(NSArray *)arg2 changed:(_Bool)arg3;
- (void)tabBar:(UITabBar *)arg1 willEndCustomizingItems:(NSArray *)arg2 changed:(_Bool)arg3;
- (void)tabBar:(UITabBar *)arg1 didBeginCustomizingItems:(NSArray *)arg2;
- (void)tabBar:(UITabBar *)arg1 willBeginCustomizingItems:(NSArray *)arg2;
- (void)tabBar:(UITabBar *)arg1 didSelectItem:(UITabBarItem *)arg2;
@end

