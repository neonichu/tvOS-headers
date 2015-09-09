//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSArray, NSError, SSPurchaseRequest, SUPurchaseBatch, SUPurchaseManager;

@protocol SUPurchaseManagerDelegate <NSObject>

@optional
- (SUPurchaseBatch *)purchaseManager:(SUPurchaseManager *)arg1 purchaseBatchForPurchases:(NSArray *)arg2;
- (SUPurchaseBatch *)purchaseManager:(SUPurchaseManager *)arg1 purchaseBatchForItems:(NSArray *)arg2;
- (void)purchaseManagerWillBeginUpdates:(SUPurchaseManager *)arg1;
- (void)purchaseManagerDidEndUpdates:(SUPurchaseManager *)arg1;
- (void)purchaseManager:(SUPurchaseManager *)arg1 didFinishPurchaseRequest:(SSPurchaseRequest *)arg2 withError:(NSError *)arg3;
- (void)purchaseManager:(SUPurchaseManager *)arg1 willAddPurchases:(NSArray *)arg2;
- (void)purchaseManager:(SUPurchaseManager *)arg1 failedToAddPurchases:(NSArray *)arg2;
- (void)purchaseManager:(SUPurchaseManager *)arg1 didAddPurchases:(NSArray *)arg2;
@end

