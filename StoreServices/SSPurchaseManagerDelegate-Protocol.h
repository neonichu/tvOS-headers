//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/NSObject-Protocol.h>

@class NSArray, SSPurchaseManager;

@protocol SSPurchaseManagerDelegate <NSObject>

@optional
- (void)purchaseManager:(SSPurchaseManager *)arg1 didFinishPurchasesWithResponses:(NSArray *)arg2;
@end

