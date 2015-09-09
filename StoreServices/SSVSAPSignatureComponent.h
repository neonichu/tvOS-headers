//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSString;

@interface SSVSAPSignatureComponent : NSObject <NSCopying>
{
    long long _componentType;
    NSString *_key;
}

@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) long long componentType; // @synthesize componentType=_componentType;
- (void).cxx_destruct;
- (id)_dataToSignWithDataSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2;
- (id)dataToSignWithURLRequest:(id)arg1;
- (id)dataToSignWithRequestProperties:(id)arg1;
- (id)initWithComponentType:(long long)arg1 key:(id)arg2;

@end
