//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>
#import <UIKit/UISearchControllerDelegate-Protocol.h>

@class NSArray, UIScrollView, UIView, _UIDocumentPickerSortOrderView;
@protocol _UIDocumentPickerServiceViewController;

@protocol _UIDocumentPickerContainedViewController <NSObject, UISearchControllerDelegate>
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(retain, nonatomic) NSArray *indexPathsForSelectedItems;
@property(nonatomic, getter=isEditing) _Bool editing;
- (void)scrollSortViewToVisible;
- (void)setServiceViewController:(id <_UIDocumentPickerServiceViewController>)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPinnedHeaderView:(UIView *)arg1 animated:(_Bool)arg2;
- (void)setSortView:(_UIDocumentPickerSortOrderView *)arg1;
@end
