//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOLogMessage, NSObject;
@protocol GEOLogAdaptor, OS_dispatch_queue;

@protocol GEOLogAdaptor <NSObject>
- (NSObject<OS_dispatch_queue> *)adaptorQueue;
- (void)flushLogs;
- (void)queueLogMessage:(GEOLogMessage *)arg1;
- (_Bool)acceptsLogMessageOfType:(int)arg1 subType:(int)arg2;

@optional
- (void)adaptorDidGetRemoved:(id <GEOLogAdaptor>)arg1;
- (void)adaptorWillGetRemoved:(id <GEOLogAdaptor>)arg1;
- (void)adaptorDidGetAdded:(id <GEOLogAdaptor>)arg1;
- (void)adaptorWillGetAdded:(id <GEOLogAdaptor>)arg1;
@end

