//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Social/SLRemoteSession.h>

@class ACAccountStore;

@interface VURemoteSession : SLRemoteSession
{
    ACAccountStore *_accountStore;
}

+ (void)refreshPowerAssertion;
+ (void)decrementPowerAssertion;
+ (void)incrementPowerAssertion;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;

@end

