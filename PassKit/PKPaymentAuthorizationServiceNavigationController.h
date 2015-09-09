//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationServiceViewController;
@protocol UIViewControllerTransitioningDelegate;

@interface PKPaymentAuthorizationServiceNavigationController : UINavigationController
{
    PKPaymentAuthorizationLayout *_layout;
    PKPaymentAuthorizationServiceViewController *_authorizationViewController;
    id <UIViewControllerTransitioningDelegate> _paymentTransitioningDelegate;
}

@property(retain, nonatomic) id <UIViewControllerTransitioningDelegate> paymentTransitioningDelegate; // @synthesize paymentTransitioningDelegate=_paymentTransitioningDelegate;
@property(retain, nonatomic) PKPaymentAuthorizationServiceViewController *authorizationViewController; // @synthesize authorizationViewController=_authorizationViewController;
- (void)_setPreferredContentSizeFromChildContentContainer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

