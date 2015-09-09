//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSRequest.h>

@class NSArray, NSNumber;

@interface SSRentalCheckinRequest : SSRequest
{
    NSNumber *_accountIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
}

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithConnectionResponseBlock:(CDUnknownBlockType)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly) NSArray *sinfs;
@property(readonly) NSNumber *rentalKeyIdentifier;
@property(readonly) NSNumber *accountIdentifier;
- (void)dealloc;
- (id)initWithSinfs:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)init;

@end

