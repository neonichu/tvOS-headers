//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/PKPaymentDataItem.h>

@class CNContact, NSString;

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem
{
}

+ (long long)dataType;
- (_Bool)isValidWithError:(id *)arg1;
@property(readonly, nonatomic) _Bool isShippingEditable;
@property(readonly, nonatomic) NSString *shippingType;
@property(readonly, nonatomic) CNContact *shippingAddress;

@end

