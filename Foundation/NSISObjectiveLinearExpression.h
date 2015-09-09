//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSISRowBody-Protocol.h>

@class NSMutableArray, NSString;

@interface NSISObjectiveLinearExpression : NSObject <NSISRowBody>
{
    struct __CFDictionary *_priorityMap;
    NSMutableArray *_variablesSortedByPriorityVectors;
    struct __CFData *_constant;
}

- (void)verifyInternalIntegrity;
- (void)leadingPriority:(double *)arg1 andValue:(double *)arg2 forVariable:(id)arg3;
- (id)restrictedVariableWithCoefficientOfLargestNegativeMagnitude;
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(CDUnknownBlockType)arg4 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg5;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;
- (void)addExpression:(id)arg1 priority:(double)arg2 times:(double)arg3 processVariableNewToReceiver:(CDUnknownBlockType)arg4 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg5;
- (void)addVariable:(id)arg1 priority:(double)arg2 times:(double)arg3 processVariableNewToReceiver:(CDUnknownBlockType)arg4 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg5;
- (void)addVariable:(id)arg1 priority:(double)arg2 times:(double)arg3;
- (void)setPriorityVector:(struct __CFData *)arg1 forKnownAbsentVariable:(id)arg2;
- (void)removeVariable:(id)arg1;
- (struct __CFData *)priorityVectorForVariable:(id)arg1;
- (unsigned long long)variableCount;
- (void)enumerateVariables:(CDUnknownBlockType)arg1;
- (_Bool)constantTermIsZero;
- (void)incrementConstantWithPriorityVector:(struct __CFData *)arg1 timesScalarCoefficient:(double)arg2;
- (void)incrementConstantWithPriority:(double)arg1 value:(double)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithLinearExpression:(id)arg1 priority:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

