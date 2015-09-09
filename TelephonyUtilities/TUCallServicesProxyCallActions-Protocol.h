//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString, TUProxyCall;

@protocol TUCallServicesProxyCallActions <NSObject>
- (void)enteredBackgroundForAllCalls;
- (void)enteredForegroundForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)videoProxyCallFiltered:(TUProxyCall *)arg1;
- (void)updateCallWithProxy:(TUProxyCall *)arg1;
- (void)sendTelephonyDigits:(NSString *)arg1;
- (void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)pullHostedCallsFromPairedHostDevice;
- (void)pushHostedCallsToPairedClientDevice;
- (void)pushRelayingCallsToHostWithSourceIdentifier:(NSString *)arg1;
- (void)pullRelayingCallsFromClient;
- (void)disconnectAllCalls;
- (void)disconnectCurrentCallAndActivateHeld;
- (void)endHeldAndAnswerCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)endActiveAndAnswerCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)playDTMFToneForCallWithUniqueProxyIdentifier:(NSString *)arg1 key:(unsigned char)arg2;
- (void)swapCalls;
- (void)unconferenceCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)conferenceCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)disconnectCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)unholdCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)holdCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)answerCallWithUniqueProxyIdentifier:(NSString *)arg1 withSourceIdentifier:(NSString *)arg2;
@end

