//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSObject-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSSet, NSURLResponse, NSURLSession, NSURLSessionTask;

@protocol NSURLSessionAppleIDContext <NSObject, NSCopying, NSSecureCoding>
- (NSSet *)relevantHTTPStatusCodes;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 getAppleIDHeadersForResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(_Bool, NSDictionary *))arg4;
@end

