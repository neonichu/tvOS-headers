//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCoding-Protocol.h>
#import <iTunesStore/NSCopying-Protocol.h>

@class NSArray, NSData, NSDictionary, NSInputStream, NSLock, NSString, NSURL, SSMutableURLRequestProperties;

@interface ISURLRequest : NSObject <NSCoding, NSCopying>
{
    NSLock *_lock;
    SSMutableURLRequestProperties *_properties;
}

+ (id)requestWithURL:(id)arg1;
- (id)requestProperties;
@property(retain) NSArray *URLs;
@property long long URLBagType;
@property double timeoutInterval;
- (void)setValue:(id)arg1 forQueryStringParameter:(id)arg2;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
@property(retain) NSDictionary *queryStringDictionary;
@property(retain) NSString *HTTPMethod;
@property(retain) NSInputStream *HTTPBodyStream;
@property(retain) NSData *HTTPBody;
@property long long expectedContentLength;
@property(retain) NSDictionary *customHeaders;
@property unsigned long long cachePolicy;
@property(retain) NSString *appleClientApplication;
@property long long allowedRetryCount;
@property(readonly) NSURL *primaryURL;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithRequestProperties:(id)arg1;
- (id)init;
- (id)_initCommon;

@end

