//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface CPLEngineResourceDownloadTaskGroup : NSObject
{
    NSMutableSet *_activeTasks;
}

@property(readonly, nonatomic) NSSet *activeTasks; // @synthesize activeTasks=_activeTasks;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
- (void)taskDidComplete:(id)arg1;
- (_Bool)isTrackingTask:(id)arg1;
- (id)initWithTasks:(id)arg1;

@end

