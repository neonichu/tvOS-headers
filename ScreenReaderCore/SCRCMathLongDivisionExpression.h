//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@class SCRCMathExpression;

__attribute__((visibility("hidden")))
@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression
{
    SCRCMathExpression *_divisor;
}

@property(retain, nonatomic) SCRCMathExpression *divisor; // @synthesize divisor=_divisor;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(_Bool)arg2;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

