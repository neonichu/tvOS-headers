//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import <PassKit/PKPaymentServiceDelegate-Protocol.h>

@class CLInUseAssertion, NSArray, NSObject, NSString, PKFieldProperties, PKPassGroupsViewController, PKPaymentService, _UIBackdropView;
@protocol OS_dispatch_group;

@interface PKPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentServiceDelegate>
{
    PKPassGroupsViewController *_passGroupsViewController;
    PKPaymentService *_paymentService;
    PKFieldProperties *_fieldProperties;
    NSArray *_fieldPassUniqueIdentifiers;
    NSString *_passUniqueIdentifier;
    _UIBackdropView *_backdropView;
    CLInUseAssertion *_passbookForegroundAssertion;
    NSObject<OS_dispatch_group> *_fieldPropertiesLookupGroup;
    long long _presentationSource;
    _Bool _backlightActive;
    _Bool _processHomeButtonEvents;
}

+ (_Bool)_isSecureForRemoteViewService;
+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (id)groupsControllerWithSource:(long long)arg1;
- (void)_contactlessInterfaceSessionDidAuthorize:(id)arg1;
- (void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1;
- (_Bool)_notificationIsFromChildViewController:(id)arg1;
- (void)_dismissForSource:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dismissIfRestricted;
- (void)_presentHomeButtonDoubleTapAlertIfNecessary;
- (void)_setupGroupController;
- (void)handleHomeButtonPressed;
- (void)setUserInfo:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)_willAppearInRemoteViewController;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

