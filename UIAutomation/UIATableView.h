//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIAutomation/UIAScrollView.h>

@class UIAElementArray;

@interface UIATableView : UIAScrollView
{
    UIAElementArray *_cells;
}

+ (id)toManyRelationshipKeys;
+ (id)_moreToManyRelationshipKeys;
+ (Class)_classForSimpleUIAXElement:(id)arg1;
- (id)visibleGroups;
- (id)visibleCells;
- (id)groups;
- (id)cells;
- (id)cellCount;
- (id)lastVisibleCellIndex;
- (id)firstVisibleCellIndex;
- (id)value;
- (void)_emptyCaches;

@end

