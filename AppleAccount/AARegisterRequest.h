//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAAuthenticateRequest.h>

@class NSMutableDictionary;

@interface AARegisterRequest : AAAuthenticateRequest
{
    NSMutableDictionary *_additionalCookieHeaders;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)urlRequest;
- (void)addCookieHeaders:(id)arg1;
- (id)urlString;
- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;

@end

