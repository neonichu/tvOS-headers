//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccountUI/NSObject-Protocol.h>

@class CDPRemoteDeviceSecretValidator, NSArray;

@protocol AAUICDPRemoteSecretChallengeHandler <NSObject>
@property(nonatomic) _Bool shouldShowCancelButton;
@property(copy, nonatomic) CDUnknownBlockType challengeResponseHandler;
- (id)initWithDevices:(NSArray *)arg1 validator:(CDPRemoteDeviceSecretValidator *)arg2;
@end

