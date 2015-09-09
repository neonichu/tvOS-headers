//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSSetupController.h>

#import <CommunicationsSetupUI/CNFRegFirstRunDelegate-Protocol.h>

@class CNFRegController, NSString, _UIBackdropView;
@protocol CNFRegWizardControllerDelegate;

@interface CNFRegWizardController : PSSetupController <CNFRegFirstRunDelegate>
{
    CNFRegController *_regController;
    long long _serviceType;
    id <CNFRegWizardControllerDelegate> _firstRunDelegate;
    id _resignListener;
    id _resumeListener;
    struct {
        unsigned int automaticKeyboardWasDisabled:1;
        unsigned int shouldListenForSuspension:1;
        unsigned int canStartNested:1;
        unsigned int canShowSplashScreen:1;
        unsigned int canShowDisabledScreen:1;
        unsigned int hideLearnMoreButton:1;
        unsigned int showSplashOnSignin:1;
        unsigned int skipReloadOnNextViewWillAppear:1;
        unsigned int allowCancel:1;
        unsigned int allowSMS:1;
        unsigned int shouldTerminateInBackground:1;
    } _wizardFlags;
    _UIBackdropView *_backdropView;
}

+ (void)setSupportsAutoRotation:(_Bool)arg1;
+ (void)setGlobalAppearanceStyle:(long long)arg1;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
@property(nonatomic) id <CNFRegWizardControllerDelegate> firstRunDelegate; // @synthesize firstRunDelegate=_firstRunDelegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldTerminateInBackground; // @dynamic shouldTerminateInBackground;
@property(nonatomic) _Bool showSplashOnSignin;
@property(nonatomic) _Bool hideLearnMoreButton; // @dynamic hideLearnMoreButton;
@property(nonatomic) _Bool allowSMS;
@property(nonatomic) _Bool allowCancel;
@property(nonatomic) _Bool shouldListenForSuspension; // @dynamic shouldListenForSuspension;
- (void)setSkipReloadOnNextViewWillAppear:(_Bool)arg1;
- (_Bool)skipReloadOnNextViewWillAppear;
@property(nonatomic) _Bool canShowDisabledScreen; // @dynamic canShowDisabledScreen;
@property(nonatomic) _Bool canShowSplashScreen;
@property(nonatomic) _Bool canStartNested;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_doCancel;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned long long)arg2;
- (void)dismissFinished:(_Bool)arg1;
- (void)dismissWithState:(unsigned long long)arg1;
- (void)_applicationDidEnterBackground;
- (void)_applicationDidFinishLaunching;
- (void)_restrictionsChanged;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)_stopListeningForResignResume;
- (void)_startListeningForResignResume;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerWithTransition:(int)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)_updateNavigationBarHiddenForCurrentState;
- (void)_updateNavigationBarHiddenForPop;
- (void)_updateNavigationBarHiddenForPush;
- (void)_updateNavigationBarTitle;
- (void)setupController;
- (void)viewDidLoad;
- (_Bool)shouldShowFirstRunController;
- (id)controllersToShow;
- (id)controllersToShow:(_Bool)arg1;
- (id)controllerClassesToShow:(_Bool)arg1;
- (void)_checkRestrictions;
- (int)_firstRunState:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithServiceTypes:(long long)arg1;
- (id)initWithRegController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

