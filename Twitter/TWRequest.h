//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSDictionary, NSURL, SLTwitterRequest;

@interface TWRequest : NSObject
{
    SLTwitterRequest *_request;
}

- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
- (id)signedURLRequest;
- (void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3;
@property(retain, nonatomic) ACAccount *account;
@property(readonly, nonatomic) NSDictionary *parameters;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) long long requestMethod;
- (void)dealloc;
- (id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3;

@end

