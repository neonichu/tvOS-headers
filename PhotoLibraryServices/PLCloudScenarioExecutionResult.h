//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PLCloudScenarioExecutionResult : NSObject
{
    _Bool _duplicateScenario;
    NSMutableArray *_failedOperations;
    NSMutableArray *_successfullOperations;
}

@property(retain, nonatomic) NSMutableArray *successfullOperations; // @synthesize successfullOperations=_successfullOperations;
@property(retain, nonatomic) NSMutableArray *failedOperations; // @synthesize failedOperations=_failedOperations;
@property(nonatomic) _Bool duplicateScenario; // @synthesize duplicateScenario=_duplicateScenario;
- (void)dealloc;
- (id)init;

@end

