//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/MFMailComposeViewControllerDelegate-Protocol.h>
#import <iTunesStoreUI/SUClientDelegate-Protocol.h>
#import <iTunesStoreUI/SUPurchaseManagerDelegate-Protocol.h>
#import <iTunesStoreUI/SUTabBarControllerDelegate-Protocol.h>
#import <iTunesStoreUI/UIApplicationDelegate-Protocol.h>

@class ISOperation, MFMailComposeViewController, NSArray, NSDictionary, NSString, NSURL, SUClient, SUSectionsResponse, SUTabBarController, UINavigationController, UIWindow;

@interface SUStoreController : NSObject <SUClientDelegate, SUPurchaseManagerDelegate, SUTabBarControllerDelegate, UIApplicationDelegate, MFMailComposeViewControllerDelegate>
{
    SUClient *_client;
    SUSectionsResponse *_lastBackgroundSectionsResponse;
    SUSectionsResponse *_lastSectionsResponse;
    NSURL *_launchURL;
    ISOperation *_loadSectionsOperation;
    NSString *_localStoreFrontAtLastSuspend;
    id _locationObserver;
    NSArray *_overlayConfigurations;
    _Bool _reloadForStorefrontChangeAfterAccountSetup;
    _Bool _reloadSectionsOnNextLaunch;
    NSString *_synchedStoreFrontAtLastSuspend;
    SUTabBarController *_tabBarController;
    MFMailComposeViewController *_mailComposeViewController;
    NSDictionary *_storeFrontLanguages;
}

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
- (void)presentMailComposeViewController:(id)arg1 animated:(_Bool)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (_Bool)isComposingEmail;
- (void)dismissMailComposeViewControllerAnimated:(_Bool)arg1;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)composeEmailByRestoringAutosavedMessage;
- (_Bool)_showWildcatAccountViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_saveArchivedNavigationPath;
- (id)_resumableViewController;
- (void)_reloadWithSectionsResponse:(id)arg1;
- (void)_reloadOverlayConfigurations;
- (_Bool)_isAccountViewControllerVisible;
- (void)_handleSearchURL:(id)arg1;
- (void)_handleAccountURL:(id)arg1;
- (void)_defaultHandleApplicationURLRequestProperties:(id)arg1;
- (void)_cancelSuspendAfterDialogsDismissed;
- (void)_retrySectionsAfterNetworkTransition;
- (_Bool)_reloadForStorefrontChange;
- (void)_presentSectionFetchUI;
- (_Bool)_loadSectionsAllowingCache:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_handleSectionsLoadFailedWithError:(id)arg1;
- (void)_handleFinishedLoadSectionsOperation:(id)arg1;
- (void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1;
- (void)_cancelLoadSectionsOperation;
- (void)setupUI;
- (void)handleApplicationURL:(id)arg1;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(_Bool)arg3;
- (void)purchaseManagerWillBeginUpdates:(id)arg1;
- (void)purchaseManagerDidEndUpdates:(id)arg1;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
- (id)topViewControllerForClient:(id)arg1;
- (id)downloadQueueForClient:(id)arg1 downloadKinds:(id)arg2;
- (_Bool)client:(id)arg1 presentModalViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)client:(id)arg1 openInternalURL:(id)arg2;
- (void)_storeFrontChangedNotification:(id)arg1;
- (void)_selectFooterSectionNotification:(id)arg1;
- (void)_mainThreadStoreFrontChangedNotification:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (void)_dialogDidFinishNotification:(id)arg1;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)_accountControllerDisappearedNotification:(id)arg1;
- (id)newScriptInterface;
@property(readonly, nonatomic) UINavigationController *topNavigationController;
@property(readonly, nonatomic) SUTabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
- (id)storeContentLanguage;
@property(readonly, nonatomic) NSString *defaultPNGNameForSuspend;
- (void)tearDownUI;
- (_Bool)showDialogForCapabilities:(id)arg1 mismatches:(id)arg2;
- (_Bool)selectSectionWithIdentifier:(id)arg1;
- (_Bool)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;
- (_Bool)presentOverlayBackgroundViewController:(id)arg1;
- (void)presentExternalURLViewController:(id)arg1;
- (void)prepareForSuspend;
- (id)overlayConfigurationForStorePage:(id)arg1;
- (id)overlayBackgroundViewController;
- (_Bool)matchesClientApplication:(id)arg1;
- (_Bool)libraryContainsItemIdentifier:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isTabBarControllerLoaded) _Bool tabBarControllerLoaded;
@property(readonly, nonatomic, getter=isStoreEnabled) _Bool storeEnabled;
- (void)exitStoreWithReason:(long long)arg1;
- (void)exitStoreAfterDialogsDismiss;
- (void)endPurchaseBatch;
- (void)dismissOverlayBackgroundViewController;
- (double)defaultImageSnapshotExpiration;
- (id)copySuspendSettings;
- (void)connect;
- (void)cancelAllOperations;
- (void)beginPurchaseBatch;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

