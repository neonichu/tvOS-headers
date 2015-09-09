//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, VKMapView;

__attribute__((visibility("hidden")))
@interface VKPerformanceTest : NSObject
{
    VKMapView *_mapView;
    _Bool _running;
    int _loopCounter;
    int _resultCount;
    struct VKPerformanceTestResult_struct *_results;
    NSString *_outputHeader;
}

+ (void)runWithMapView:(id)arg1 outputHeader:(id)arg2;
- (void)printResults;
- (void)runTest:(int)arg1 step:(int)arg2;
- (void)tick:(int)arg1;
- (void)abort;
- (void)loop;
- (void)dealloc;
- (id)initWithMapView:(id)arg1 outputHeader:(id)arg2;

@end

