//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMFoundation/IMPerfProfilerBehavior-Protocol.h>

@class NSString;

@interface IMPerfProfilerDefaultBehavior : NSObject <IMPerfProfilerBehavior>
{
}

+ (id)instance;
- (void)perfProfiler:(id)arg1 measurementDidFinish:(struct IMPerfMeasurement_t *)arg2 withSink:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

