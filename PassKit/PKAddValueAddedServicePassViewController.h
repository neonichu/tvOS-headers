//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import <PassKit/PKGroupsControllerDelegate-Protocol.h>
#import <PassKit/PKPassGroupStackViewDatasource-Protocol.h>
#import <PassKit/PKPassGroupStackViewDelegate-Protocol.h>
#import <PassKit/UIScrollViewDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, PKGroupsController, PKPassGroupStackView, UIImageView, UINavigationBar;

@interface PKAddValueAddedServicePassViewController : SBUIRemoteAlertServiceViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, UIScrollViewDelegate>
{
    NSDictionary *_userInfo;
    PKGroupsController *_groupsController;
    UINavigationBar *_navigationBar;
    PKPassGroupStackView *_cardStackView;
    NSMutableArray *_localPasses;
    NSMutableArray *_localPassDatas;
    long long _presentationState;
    long long _previousBarStyle;
    UIImageView *_statusBarGradient;
    _Bool _haveStartedCardAnimation;
    _Bool _viewAppeared;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (_Bool)_isSecureForRemoteViewService;
- (id)genericTitleWithCount:(unsigned long long)arg1;
- (id)styleTitleUsingPass:(id)arg1 count:(unsigned long long)arg2;
- (void)updateNavTitle;
- (void)updateSettings;
- (void)updateAddButton;
- (void)updateCancelButton;
- (void)addCard:(id)arg1;
- (void)cancelCard:(id)arg1;
- (void)_ingestValueAddedPasses:(id)arg1;
- (void)_ingestionDidFinishWithResult:(int)arg1;
- (void)_dismiss;
- (void)handleHomeButtonPressed;
- (unsigned long long)indexOfSeparationGroup;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)numberOfGroups;
- (id)groupAtIndex:(unsigned long long)arg1;
- (void)loadGroups;
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(_Bool)arg3;
- (unsigned long long)suppressedContent;
- (_Bool)passesGrowWhenFlipped;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setUserInfo:(id)arg1;
- (void)animateInCardIfNeeded;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)_willAppearInRemoteViewController;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;
- (void)tearDown;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

