//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/PKPaymentSetupTableViewController.h>

@class PKPass, PKPaymentWebService, PKTableHeaderView, PKWeakReference, UIImage;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupAutomaticPresentationController : PKPaymentSetupTableViewController
{
    PKPaymentWebService *_webService;
    unsigned long long _selectedIndex;
    PKTableHeaderView *_headerView;
    PKWeakReference *_setupDelegate;
    UIImage *_passSnapshot;
    CDUnknownBlockType _verificationRequestHandler;
    PKPass *_pass;
}

@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(copy, nonatomic) CDUnknownBlockType verificationRequestHandler; // @synthesize verificationRequestHandler=_verificationRequestHandler;
- (void)logAggDContextSpecificCheckpointForKey:(id)arg1;
- (id)_contextSpecificStringForAggDKey:(id)arg1;
@property(nonatomic) id <PKPaymentSetupViewControllerDelegate> setupDelegate;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)_showVerificationMethodsForPass:(id)arg1;
- (long long)_paymentPassState;
- (id)_buttonTitleForPaymentPassState:(long long)arg1;
- (void)_dismissView;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_saveSettings;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(long long)arg3;
- (id)initWithPass:(id)arg1;

@end

