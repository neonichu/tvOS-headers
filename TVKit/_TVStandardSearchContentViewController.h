//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, _TVStandardSearchContentView;

@interface _TVStandardSearchContentViewController : UIViewController
{
    NSArray *_superviewConstraints;
    UIViewController *_resultsViewController;
    _TVStandardSearchContentView *_contentView;
}

@property(retain, nonatomic) _TVStandardSearchContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIViewController *resultsViewController; // @synthesize resultsViewController=_resultsViewController;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;

@end

