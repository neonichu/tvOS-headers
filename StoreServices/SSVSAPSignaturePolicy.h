//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray;

@interface SSVSAPSignaturePolicy : NSObject <NSCopying>
{
    long long _policyType;
    NSArray *_signatureComponents;
}

@property(readonly, copy, nonatomic) NSArray *signatureComponents; // @synthesize signatureComponents=_signatureComponents;
@property(readonly, nonatomic) long long policyType; // @synthesize policyType=_policyType;
- (void).cxx_destruct;
- (id)_dataToSignWithDataSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2;
- (id)dataToSignWithURLRequest:(id)arg1;
- (id)dataToSignWithRequestProperties:(id)arg1;
- (id)initWithSignedActionsDictionary:(id)arg1;
- (id)initWithPolicyType:(long long)arg1 signatureComponents:(id)arg2;
- (id)initWithPolicyType:(long long)arg1;

@end

