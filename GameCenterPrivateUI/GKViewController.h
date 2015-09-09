//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GKColorPalette;

@interface GKViewController : UIViewController
{
    _Bool _shouldUpdateContentOnlyWhenAuthenticated;
    GKViewController *_rootViewController;
    GKColorPalette *_colorPalette;
    long long _gkFocusBubbleType;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(nonatomic) long long gkFocusBubbleType; // @synthesize gkFocusBubbleType=_gkFocusBubbleType;
@property(nonatomic) _Bool shouldUpdateContentOnlyWhenAuthenticated; // @synthesize shouldUpdateContentOnlyWhenAuthenticated=_shouldUpdateContentOnlyWhenAuthenticated;
@property(retain, nonatomic) GKColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(retain, nonatomic) GKViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)popToRootViewControllerAnimated:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)displayUsingSplitNavigationBar;
- (void)loadView;
- (void)dealloc;

@end

