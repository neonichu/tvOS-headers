//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/NSObject-Protocol.h>

@class NSString, TVMediaQueryEvaluator;

@protocol TVMediaQueryEvaluatorDelegate <NSObject>
- (_Bool)evaluator:(TVMediaQueryEvaluator *)arg1 evaluteForMediaType:(NSString *)arg2 featureType:(NSString *)arg3 value:(id)arg4 result:(_Bool *)arg5;
@end

