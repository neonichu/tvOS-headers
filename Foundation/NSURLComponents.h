//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface NSURLComponents : NSObject <NSCopying>
{
}

+ (id)componentsWithString:(id)arg1;
+ (id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(copy) NSArray *queryItems;
@property(readonly) struct _NSRange rangeOfFragment;
@property(readonly) struct _NSRange rangeOfQuery;
@property(readonly) struct _NSRange rangeOfPath;
@property(readonly) struct _NSRange rangeOfPort;
@property(readonly) struct _NSRange rangeOfHost;
@property(readonly) struct _NSRange rangeOfPassword;
@property(readonly) struct _NSRange rangeOfUser;
@property(readonly) struct _NSRange rangeOfScheme;
@property(copy) NSString *percentEncodedFragment;
@property(copy) NSString *percentEncodedQuery;
@property(copy) NSString *percentEncodedPath;
@property(copy) NSString *percentEncodedHost;
@property(copy) NSString *percentEncodedPassword;
@property(copy) NSString *percentEncodedUser;
@property(copy) NSString *fragment;
@property(copy) NSString *query;
@property(copy) NSString *path;
@property(copy) NSNumber *port;
@property(copy) NSString *host;
@property(copy) NSString *password;
@property(copy) NSString *user;
@property(copy) NSString *scheme;
@property(readonly, copy) NSString *string;
- (id)URLRelativeToURL:(id)arg1;
@property(readonly, copy) NSURL *URL;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

