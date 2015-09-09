//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthKit/AKAppleIDAuthenticationContext.h>

#import <AuthKitUI/AKAppleIDAuthenticationUIProvider-Protocol.h>
#import <AuthKitUI/AKBasicLoginAlertControllerDelegate-Protocol.h>

@class AKAppleIDServerResourceLoadDelegate, AKAppleIDServerUIDataHarvester, AKBasicLoginAlertController, NSString, RUIObjectModel, RemoteUIController, UINavigationController, UIViewController;
@protocol AKAppleIDAuthenticationInAppContextDelegate;

@interface AKAppleIDAuthenticationInAppContext : AKAppleIDAuthenticationContext <AKBasicLoginAlertControllerDelegate, AKAppleIDAuthenticationUIProvider>
{
    AKBasicLoginAlertController *_basicLoginViewController;
    UINavigationController *_navController;
    RemoteUIController *_remoteUIController;
    CDUnknownBlockType _serverUICompletion;
    AKAppleIDServerResourceLoadDelegate *_serverUIDelegate;
    AKAppleIDServerUIDataHarvester *_serverUIHelper;
    RUIObjectModel *_currentRemoteOM;
    _Bool _isPresentingServerUI;
    UIViewController *_presentingViewController;
    id <AKAppleIDAuthenticationInAppContextDelegate> _delegate;
}

@property(nonatomic) __weak id <AKAppleIDAuthenticationInAppContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)willPresentModalNavigationController:(id)arg1;
- (void)didReceiveObjectModel:(id)arg1;
- (void)basicLoginAlertControllerDidDismiss:(id)arg1;
- (void)basicLoginAlertControllerWillDismiss:(id)arg1;
- (void)basicLoginAlertControllerDidPresent:(id)arg1;
- (id)serverDataHarvester;
- (id)_navController;
- (id)_remoteUIController;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(int *)arg3;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentServerProvidedUIWithURLRequest:(id)arg1 delegate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissKeepUsingUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentKeepUsingUIForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cleanUpBasicLogin;
- (void)_cleanUpBasicLoginWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)_assertValidPresentingViewController;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

