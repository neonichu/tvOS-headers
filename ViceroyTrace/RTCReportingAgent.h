//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, RTCReporting;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RTCReportingAgent : NSObject
{
    RTCReporting *_reportingObject;
    int _client;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    NSArray *_backends;
}

@property(copy) NSArray *backends; // @synthesize backends=_backends;
@property NSObject<OS_dispatch_queue> *reportingQueue; // @synthesize reportingQueue=_reportingQueue;
@property int client; // @synthesize client=_client;
@property(retain) RTCReporting *reportingObject; // @synthesize reportingObject=_reportingObject;
- (void)releaseReportingObject;
- (void)dealloc;
- (id)initWithCallID:(unsigned int)arg1 clientType:(int)arg2;

@end

