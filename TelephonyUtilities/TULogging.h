//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TULogging : NSObject
{
}

+ (void)endLoggingSession;
+ (void)checkpointLoggingSession:(id)arg1;
+ (void)pulseLoggingSession;
+ (void)beginLoggingSessionAsInitiator:(_Bool)arg1;
+ (_Bool)sendDirectoryToCrashReporter:(id)arg1 error:(id *)arg2;
+ (void)unregisterForShouldLogChangedNotification;
+ (void)registerForShouldLogChangedNotification;
+ (void)_logType:(id)arg1 topic:(id)arg2 category:(id)arg3 severity:(int)arg4 asSession:(_Bool)arg5 backtrace:(_Bool)arg6 format:(id)arg7 args:(struct __va_list_tag [1])arg8;
+ (void)logType:(id)arg1 topic:(id)arg2 category:(id)arg3 severity:(int)arg4 asSession:(_Bool)arg5 backtrace:(_Bool)arg6 format:(id)arg7;
+ (void)logType:(id)arg1 topic:(id)arg2 category:(id)arg3 severity:(int)arg4 backtrace:(_Bool)arg5 format:(id)arg6;
+ (void)logType:(id)arg1 topic:(id)arg2 category:(id)arg3 backtrace:(_Bool)arg4 format:(id)arg5;
+ (_Bool)shouldLogType:(id)arg1;
+ (void)disablePhoneLogging;
+ (void)enablePhoneLogging;
+ (_Bool)isWalkaboutEnabled;

@end

