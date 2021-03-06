//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AVKit/AVNowPlayingInfoPanelFilmStripDelegate-Protocol.h>
#import <AVKit/UITabBarControllerDelegate-Protocol.h>

@class AVNowPlayingInfoPanelAudioViewController, AVNowPlayingInfoPanelCollection, AVNowPlayingInfoPanelFilmStrip, AVNowPlayingInfoPanelItemList, AVNowPlayingInfoPanelMainDescription, AVNowPlayingInfoTabBarController, NSArray, NSString, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView, UIVisualEffectView;
@protocol AVNowPlayingInfoPanelFilmStripDelegate, AVNowPlayingInfoProtocol, AVNowPlayingInfoViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVNowPlayingInfoViewController : UIViewController <AVNowPlayingInfoPanelFilmStripDelegate, UITabBarControllerDelegate>
{
    id <AVNowPlayingInfoPanelFilmStripDelegate> _chaptersDelegate;
    NSArray *_availablePanelIdentifiersCached;
    _Bool _focusToTabBar;
    UIView *_dividerLine;
    NSArray *_panelIdentifiers;
    UIViewController *_externalClientViewController;
    id <AVNowPlayingInfoViewControllerDelegate> _infoViewControllerDelegate;
    AVNowPlayingInfoPanelCollection *_panels;
    UIViewController<AVNowPlayingInfoProtocol> *_activePanel;
    AVNowPlayingInfoTabBarController *_tabBarController;
    UIView *_tabBarContainer;
    UISwipeGestureRecognizer *_swipeUpRecognizer;
    UISwipeGestureRecognizer *_swipeDownRecognizer;
    UITapGestureRecognizer *_menuButtonRecognizer;
    UIVisualEffectView *_backdropView;
    UIVisualEffectView *_vibrantContainer;
    UIView *_dimmedBackground;
}

+ (id)allPanelIdentifiers;
@property(retain, nonatomic) UIView *dimmedBackground; // @synthesize dimmedBackground=_dimmedBackground;
@property(retain, nonatomic) UIVisualEffectView *vibrantContainer; // @synthesize vibrantContainer=_vibrantContainer;
@property(retain, nonatomic) UIVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UITapGestureRecognizer *menuButtonRecognizer; // @synthesize menuButtonRecognizer=_menuButtonRecognizer;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeDownRecognizer; // @synthesize swipeDownRecognizer=_swipeDownRecognizer;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeUpRecognizer; // @synthesize swipeUpRecognizer=_swipeUpRecognizer;
@property(retain, nonatomic) UIView *tabBarContainer; // @synthesize tabBarContainer=_tabBarContainer;
@property(retain, nonatomic) AVNowPlayingInfoTabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain, nonatomic) UIViewController<AVNowPlayingInfoProtocol> *activePanel; // @synthesize activePanel=_activePanel;
@property(retain, nonatomic) AVNowPlayingInfoPanelCollection *panels; // @synthesize panels=_panels;
@property(nonatomic) __weak id <AVNowPlayingInfoViewControllerDelegate> infoViewControllerDelegate; // @synthesize infoViewControllerDelegate=_infoViewControllerDelegate;
@property(retain, nonatomic) UIViewController *externalClientViewController; // @synthesize externalClientViewController=_externalClientViewController;
@property(readonly, nonatomic) NSArray *panelIdentifiers; // @synthesize panelIdentifiers=_panelIdentifiers;
- (void).cxx_destruct;
- (void)skipToPreviousItem;
- (void)skipToNextItem;
- (void)navigateRight;
- (void)navigateLeft;
- (void)filmStrip:(id)arg1 didSelectFrameIndex:(unsigned long long)arg2;
- (id)filmStrip:(id)arg1 titleForFrame:(unsigned long long)arg2;
- (id)filmStrip:(id)arg1 imageForFrameIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfFramesForFilmStrip:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (id)chaptersDelegate;
- (void)setChaptersFilmStripDelegate:(id)arg1;
- (void)didHighlightTab:(unsigned long long)arg1;
- (void)didSelectTab:(unsigned long long)arg1;
- (_Bool)shouldUpdateFocusFromView:(id)arg1 toView:(id)arg2 heading:(unsigned long long)arg3;
- (id)preferredFocusedView;
- (void)menuButtonGesture:(id)arg1;
- (void)swipeGesture:(id)arg1;
- (void)dismiss;
- (_Bool)isVisible;
- (void)activatePanel:(id)arg1;
- (void)deactivatePanel;
- (void)focusTabBar;
- (void)focusCurrentPanel;
- (void)focusPanelForIdentifier:(id)arg1;
- (_Bool)userInteractionAllowedByPanel:(id)arg1;
- (void)selectPanelForIdentifier:(id)arg1;
@property(readonly) AVNowPlayingInfoPanelAudioViewController *audioCombinedOptionsPanel;
@property(readonly) AVNowPlayingInfoPanelItemList *subtitleOptionsPanel;
@property(readonly) AVNowPlayingInfoPanelFilmStrip *chaptersPanel;
@property(readonly) AVNowPlayingInfoPanelMainDescription *descriptionPanel;
- (id)panelForViewController:(id)arg1;
- (id)panelForIdentifier:(id)arg1;
- (void)_resizeBackdropViewForPanel:(id)arg1;
- (void)removeFromParentViewController;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (struct CGSize)currentPreferredContentSize;
- (double)currentPanelHeight;
- (id)currentPanel;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)resizeForCurrentPanel;
- (void)centerActivePanel;
- (void)centerPanel:(id)arg1;
- (void)centerTabBar;
- (void)loadView;
- (void)loadPanels;
- (void)instantiatePanels;
- (void)_updatePanelAvailability;
@property(readonly, nonatomic) NSArray *availablePanelIdentifiers;
- (_Bool)_tvTabBarShouldAutohide;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

