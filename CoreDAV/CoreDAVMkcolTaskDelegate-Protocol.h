//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskDelegate-Protocol.h>

@class CoreDAVMkcolTask, NSArray, NSError;

@protocol CoreDAVMkcolTaskDelegate <CoreDAVTaskDelegate>

@optional
- (void)mkcolTask:(CoreDAVMkcolTask *)arg1 parsedPropStats:(NSArray *)arg2 error:(NSError *)arg3;
@end

