//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GKTVSettingsSupport : NSObject
{
}

+ (id)sharedSupport;
- (void)dumpLogs;
- (void)markLogsWithMessage:(id)arg1;
@property(nonatomic, getter=isLoggingEnabled) _Bool loggingEnabled;
@property(nonatomic) _Bool shouldAllowNearbyMultiplayer;
@property(nonatomic) _Bool shouldAllowGameInvites;
@property(nonatomic) _Bool shouldUseSandboxServer;
@property(readonly) _Bool shouldShowSandboxSeverSwitch;
- (_Bool)isTestFlightInstalled;
@property(readonly) _Bool isDevelopmentDevice;
- (_Bool)isInternalBuild;

@end

