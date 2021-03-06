//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSDictionary, NSObject;
@protocol OS_xpc_object;

@protocol VCMediaStreamProtocol <NSObject>
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (void)setRtcpTimeOutEnabled:(_Bool)arg1;
- (void)setRtpTimeOutEnabled:(_Bool)arg1;
- (void)setRtcpEnabled:(_Bool)arg1;
- (long long)streamDirection;
- (void)setStreamDirection:(long long)arg1;
- (void)setPause:(_Bool)arg1;
- (void)stop;
- (void)start;
- (_Bool)setStreamConfig:(NSDictionary *)arg1 withError:(id *)arg2;
- (NSDictionary *)setLocalParticipantInfo:(NSDictionary *)arg1 networkSockets:(NSObject<OS_xpc_object> *)arg2 withError:(id *)arg3;
@end

