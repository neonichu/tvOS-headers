//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSData, NSString;

@interface AASecondaryAuthenticationResponse : AAResponse
{
    NSString *_secondFactorToken;
    NSData *_buddyML;
}

@property(readonly, nonatomic) NSData *buddyML; // @synthesize buddyML=_buddyML;
@property(readonly, nonatomic) NSString *secondFactorToken; // @synthesize secondFactorToken=_secondFactorToken;
- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

