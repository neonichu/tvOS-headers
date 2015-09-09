//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODIHNodeInfo : NSObject
{
    int mTreeDepth;
    int mRow;
    struct ODIHRange mXRange;
    _Bool mConnectToVerticalSide;
    int mExtraRowsBetweenParentAndSelf;
    float mXOffsetRelativeToParent;
    struct ODIHRangeVector *mXRanges;
}

- (struct ODIHRangeVector *)xRanges;
- (void)addToXOffsetRelativeToParent:(float)arg1;
- (void)setXOffsetRelativeToParent:(float)arg1;
- (float)xOffsetRelativeToParent;
- (void)setExtraRowsBetweenParentAndSelf:(int)arg1;
- (int)extraRowsBetweenParentAndSelf;
- (void)setConnectToVerticalSide:(_Bool)arg1;
- (_Bool)connectToVerticalSide;
- (void)setRow:(int)arg1;
- (int)row;
- (void)setTreeDepth:(int)arg1;
- (int)treeDepth;
- (void)setXRange:(struct ODIHRange)arg1;
- (struct ODIHRange)xRange;
- (void)dealloc;
- (id)init;

@end

