//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass;

@interface PKPaymentVerificationChannelsRequest : PKPaymentWebServiceRequest
{
    PKPaymentPass *_pass;
}

@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3;
- (void)dealloc;

@end

