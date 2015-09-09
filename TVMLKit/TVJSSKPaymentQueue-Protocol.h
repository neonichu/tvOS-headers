//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/JSExport-Protocol.h>

@class JSValue, NSArray, NSString, TVJSSKPayment, TVJSSKPaymentTransaction;

@protocol TVJSSKPaymentQueue <JSExport>
+ (NSString *)appStoreReceipt;
+ (_Bool)canMakePayments;
+ (id)defaultQueue;
@property(readonly, nonatomic) NSArray *transactions;
- (void)removeTransactionObserver:(JSValue *)arg1;
- (void)addTransactionObserver:(JSValue *)arg1;
- (void)finishTransaction:(TVJSSKPaymentTransaction *)arg1;
- (void)restoreCompletedTransactionsWithApplicationUsername:(NSString *)arg1;
- (void)restoreCompletedTransactions;
- (void)addPayment:(TVJSSKPayment *)arg1;
@end

