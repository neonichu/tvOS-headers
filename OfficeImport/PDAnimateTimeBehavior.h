//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/PDAnimateBehavior.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PDAnimateTimeBehavior : PDAnimateBehavior
{
    NSString *mTo;
    NSString *mFrom;
    NSString *mBy;
    _Bool mHasCalcMode;
    int mCalcMode;
    _Bool mHasValueType;
    int mValueType;
}

- (void)setValueType:(int)arg1;
- (int)valueType;
- (_Bool)hasValueType;
- (void)setCalcMode:(int)arg1;
- (int)calcMode;
- (_Bool)hasCalcMode;
- (void)setBy:(id)arg1;
- (id)by;
- (void)setFrom:(id)arg1;
- (id)from;
- (void)setTo:(id)arg1;
- (id)to;
- (void)dealloc;
- (id)init;

@end

