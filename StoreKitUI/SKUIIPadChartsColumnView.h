//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIViewController;

@interface SKUIIPadChartsColumnView : UIView
{
    struct UIEdgeInsets _contentInset;
    NSArray *_contentViewControllers;
    long long _selectedViewControllerIndex;
}

@property(copy, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)_addSelectedViewController;
- (void)layoutSubviews;
- (void)setSelectedViewControllerIndex:(long long)arg1;
@property(readonly, nonatomic) UIViewController *selectedViewController;

@end

