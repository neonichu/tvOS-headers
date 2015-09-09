//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSFastEnumeration-Protocol.h>

@class NSMutableArray;

@interface GKBehavior : NSObject <NSFastEnumeration>
{
    NSMutableArray *_goals;
    NSMutableArray *_weights;
}

+ (id)behaviorWithWeightedGoals:(id)arg1;
+ (id)behaviorWithGoals:(id)arg1 andWeights:(id)arg2;
+ (id)behaviorWithGoals:(id)arg1;
+ (id)behaviorWithGoal:(id)arg1 weight:(float)arg2;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setWeight:(float)arg1 forGoal:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeAllGoals;
- (float)weightForGoal:(id)arg1;
- (id)initWithWeightedGoals:(id)arg1;
- (id)initWithGoals:(id)arg1 andWeights:(id)arg2;
- (id)initWithGoals:(id)arg1;
- (id)initWithGoal:(id)arg1 weight:(float)arg2;
- (id)init;
-     // Error parsing type: 32@0:8d16@24, name: getTotalForce:agent:
- (void)removeGoal:(id)arg1;
@property(readonly) long long goalCount;

@end

