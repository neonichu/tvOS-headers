//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class NSOperationQueue, NSString, SKUIClientContext, SKUIDonationConfiguration, UIViewController;

@interface SKUIDonationViewController : UINavigationController
{
    NSString *_charityID;
    SKUIClientContext *_clientContext;
    SKUIDonationConfiguration *_donationConfiguration;
    NSOperationQueue *_operationQueue;
    UIViewController *_placeholderViewController;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) NSString *charityIdentifier; // @synthesize charityIdentifier=_charityID;
- (void).cxx_destruct;
- (void)_loadDonationConfiguration;
- (void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2;
- (void)_configurationDidLoadWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_cancelButtonAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithCharityIdentifier:(id)arg1;
- (id)_initSKUIDonationViewController;

@end

