//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Parsec/PRSQueryTask.h>

@class PRSSearchCompletionResultSet;

@interface PRSDictationQueryTask : PRSQueryTask
{
    PRSSearchCompletionResultSet *_results;
}

@property(retain, nonatomic) PRSSearchCompletionResultSet *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3 feedback:(id)arg4 results:(id)arg5;
- (id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3;

@end

