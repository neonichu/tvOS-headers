//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalDAV/CoreDAVTaskDelegate-Protocol.h>

@class CoreDAVPropPatchTask, NSArray, NSError;

@protocol CoreDAVPropPatchTaskDelegate <CoreDAVTaskDelegate>

@optional
- (void)propPatchTask:(CoreDAVPropPatchTask *)arg1 parsedResponses:(NSArray *)arg2 error:(NSError *)arg3;
@end

