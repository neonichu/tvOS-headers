//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSVOperation.h>

@class NSDictionary, SSURLBag, SSVFairPlaySAPSession;

@interface SSVComplexOperation : SSVOperation
{
    SSVFairPlaySAPSession *_sapSession;
    SSURLBag *_urlBag;
    NSDictionary *_urlBagDictionary;
}

- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *URLBagDictionary;
@property(retain) SSVFairPlaySAPSession *SAPSession;
- (id)newLoadURLOperationWithRequest:(id)arg1;
- (void)configureWithURLBagDictionary:(id)arg1;
- (void)configureWithURLBag:(id)arg1;

@end

