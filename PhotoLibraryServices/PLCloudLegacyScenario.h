//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSProgress;

@interface PLCloudLegacyScenario : NSObject
{
    NSArray *_operations;
    NSProgress *_progress;
    unsigned long long _priority;
}

@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSArray *operations; // @synthesize operations=_operations;
- (void)requestCancel;
- (void)dealloc;

@end

