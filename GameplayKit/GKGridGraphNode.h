//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKGraphNode.h>

@interface GKGridGraphNode : GKGraphNode
{
    struct GKCGridGraphNode *_cGridGraphNode;
    // Error parsing type: , name: _gridPosition
}

+ (id)nodeWithGridPosition: /* Error: Ran out of types for this method. */;
// Error parsing type for property gridPosition:
// Property attributes: T,N,V_gridPosition

- (float)costToNode:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (id)initWithGridPosition: /* Error: Ran out of types for this method. */;
- (id)init;
- (struct GKCGraphNode *)makeCGraphNode;
- (struct GKCGridGraphNode *)cGridGraphNode;

@end

