//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePDF/CPObject.h>

@interface CPChunk : CPObject
{
    struct CGRect bounds;
    _Bool shrinksWithChildren;
    _Bool dirtyBounds;
    unsigned int position;
    long long insertionOrder;
}

+ (float)chooseReferenceFontSizeFrom:(float)arg1 and:(float)arg2;
- (double)rotationAngle;
- (void)setChunkPosition:(unsigned int)arg1;
- (unsigned int)chunkPosition;
- (void)translateObjectYBy:(double)arg1;
- (_Bool)intersectsChild:(struct CGRect)arg1;
- (void)setShrinksWithChildren:(_Bool)arg1;
- (_Bool)shrinksWithChildren;
- (_Bool)boundsEqualsRect:(struct CGRect)arg1 accuracy:(double)arg2;
- (_Bool)geometricallyContains:(id)arg1;
- (_Bool)overlapsVerticallyWith:(id)arg1;
- (_Bool)overlapsHorizontallyWith:(id)arg1;
- (void)orderedInsert:(id)arg1 usingSelector:(SEL)arg2;
- (int)clusterLevelHint;
- (struct CGSize)advance;
- (float)fontSize;
- (double)bottom;
- (double)top;
- (double)center;
- (double)right;
- (double)left;
- (long long)compareChunkPosition:(id)arg1;
- (long long)compareYDescendingX:(id)arg1;
- (long long)compareYDescending:(id)arg1;
- (long long)compareTopDescending:(id)arg1;
- (long long)compareYBounds:(id)arg1;
- (long long)compareY:(id)arg1;
- (long long)compareLinearBounds:(id)arg1;
- (long long)compareXBounds:(id)arg1;
- (long long)compareZDescending:(id)arg1;
- (long long)compareZ:(id)arg1;
- (long long)compareInsertionOrder:(id)arg1;
- (long long)compareX:(id)arg1;
- (long long)compareAnchorYDescending:(id)arg1;
- (long long)compareAnchorX:(id)arg1;
- (long long)compareAnchorY:(id)arg1;
- (void)sortUsingSelector:(SEL)arg1;
- (long long)insertionOrder;
- (void)setInsertionOrder:(long long)arg1;
- (void)resizeWith:(id)arg1;
- (void)fitBoundsToChildren;
- (float)referenceAdvanceWidth;
- (float)absoluteGapTo:(id)arg1;
- (float)advanceDeltaAfterSpace;
- (float)clusterGapTo:(id)arg1;
- (struct CGPoint)anchor;
- (void)setAnchor:(struct CGPoint)arg1;
- (id)describeBounds;
- (struct CGRect)renderedBounds;
- (struct CGRect)adjustToPointBoundary:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (void)setChildren:(id)arg1;
- (id)newTakeChildrenAmong:(id)arg1;
- (id)newTakeChildren;
- (void)removeAll;
- (void)remove:(id)arg1;
- (void)addChildrenOf:(id)arg1;
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;
- (void)add:(id)arg1;
- (float)opticalLeading;
- (void)accept:(id)arg1;
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

