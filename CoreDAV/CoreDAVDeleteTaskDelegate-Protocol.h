//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskDelegate-Protocol.h>

@class CoreDAVDeleteTask, NSError;

@protocol CoreDAVDeleteTaskDelegate <CoreDAVTaskDelegate>

@optional
- (void)deleteTask:(CoreDAVDeleteTask *)arg1 completedWithError:(NSError *)arg2;
@end

