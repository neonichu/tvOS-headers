//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraKit/CMKNebulaDaemonTimelapseProtocolLimited-Protocol.h>

@class NSString;

@protocol CMKNebulaDaemonTimelapseProtocol <CMKNebulaDaemonTimelapseProtocolLimited>
- (void)stopTimelapseWithUUID:(NSString *)arg1;
- (void)finishCaptureForTimelapseWithUUID:(NSString *)arg1;
- (void)updateTimelapseWithUUID:(NSString *)arg1;
- (void)resumeTimelapseWithUUID:(NSString *)arg1;
- (void)startTimelapseWithUUID:(NSString *)arg1;
@end

