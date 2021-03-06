//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL, SSVSAPSignaturePolicy;

@interface SSVURLBagInterpreter : NSObject <NSCopying>
{
    NSMutableDictionary *_cachedBagValues;
    NSArray *_subscriptionSignedActions;
    SSVSAPSignaturePolicy *_subscriptionSignaturePolicy;
    NSURL *_mescalPrimingURL;
}

@property(readonly, copy, nonatomic) NSURL *mescalPrimingURL; // @synthesize mescalPrimingURL=_mescalPrimingURL;
- (void).cxx_destruct;
- (id)_valueForKey:(id)arg1 withClass:(Class)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)valueForURLBagKey:(id)arg1;
- (id)URLForURLBagKey:(id)arg1;
@property(readonly, copy, nonatomic) NSString *storeFrontSuffix;
- (_Bool)shouldSendAnonymousMachineIdentifierForURL:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *mescalSignedResponses;
@property(readonly, copy, nonatomic) NSDictionary *mescalSignedRequests;
@property(readonly, copy, nonatomic) NSDictionary *mescalSignedActions;
- (id)mescalSignaturePolicyForResponseURL:(id)arg1;
- (id)mescalSignaturePolicyForRequestURL:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *mescalSetupURL;
@property(readonly, copy, nonatomic) NSURL *mescalCertificateURL;
@property(readonly, copy, nonatomic) NSArray *AMDDomains;
- (id)initWithURLBagDictionary:(id)arg1;
- (id)initWithURLBag:(id)arg1;

@end

