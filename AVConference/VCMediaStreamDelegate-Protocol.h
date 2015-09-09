//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSArray, NSData, NSError;
@protocol VCMediaStreamProtocol;

@protocol VCMediaStreamDelegate <NSObject>
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didResumeStream:(_Bool)arg2 error:(NSError *)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didPauseStream:(_Bool)arg2 error:(NSError *)arg3;
- (void)vcMediaStreamDidStop:(id <VCMediaStreamProtocol>)arg1;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didStartStream:(_Bool)arg2 error:(NSError *)arg3;

@optional
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 updateFrequencyLevel:(NSData *)arg2 isInputMeter:(_Bool)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveRTCPPackets:(NSArray *)arg2;
- (void)vcMediaStreamDidRTCPTimeOut:(id <VCMediaStreamProtocol>)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id <VCMediaStreamProtocol>)arg1;
@end

