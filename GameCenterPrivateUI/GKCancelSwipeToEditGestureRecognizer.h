//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

@class GKCollectionViewCell;

@interface GKCancelSwipeToEditGestureRecognizer : UITapGestureRecognizer
{
    GKCollectionViewCell *_currentEditingCell;
}

@property(retain, nonatomic) GKCollectionViewCell *currentEditingCell; // @synthesize currentEditingCell=_currentEditingCell;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

