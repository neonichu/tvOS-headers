//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class PKPaymentAuthorizationPresentationController;

@protocol PKPaymentAuthorizationPresentationObserver <NSObject>

@optional
- (void)paymentAuthorizationPresentationController:(PKPaymentAuthorizationPresentationController *)arg1 didAdjustToSize:(struct CGSize)arg2;
- (void)paymentAuthorizationPresentationController:(PKPaymentAuthorizationPresentationController *)arg1 willAdjustToSize:(struct CGSize)arg2;
@end

