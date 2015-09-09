//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, PKPaymentRequest;

@interface PKPaymentAuthorizationRequest : NSObject
{
    NSData *_credential;
    NSData *_nonceData;
    PKPaymentRequest *_paymentRequest;
}

@property(readonly, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property(retain, nonatomic) NSData *nonceData; // @synthesize nonceData=_nonceData;
@property(retain, nonatomic) NSData *credential; // @synthesize credential=_credential;
- (void)dealloc;
- (id)initWithPaymentRequest:(id)arg1;

@end

