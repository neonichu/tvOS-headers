//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIMenuViewControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUIPopupMenuDelegate-Protocol.h>
#import <StoreKitUI/SKUISortDataRequestDelegate-Protocol.h>
#import <StoreKitUI/UIPopoverControllerDelegate-Protocol.h>

@class NSMutableIndexSet, NSString, SKUIMenuPageComponent, SKUIMenuViewController, SKUIPillsControl, SKUIPopupMenuHeaderView, UIBarButtonItem, UIPopoverController;

@interface SKUIMenuPageSection : SKUIStorePageSection <SKUIMenuViewControllerDelegate, SKUIPopupMenuDelegate, SKUISortDataRequestDelegate, UIPopoverControllerDelegate>
{
    UIBarButtonItem *_cancelMenuItem;
    SKUIPillsControl *_pillsControl;
    SKUIMenuViewController *_moreListMenuViewController;
    UIPopoverController *_moreListPopoverController;
    SKUIPopupMenuHeaderView *_popupHeaderView;
    long long _selectedIndex;
    NSMutableIndexSet *_sortRequestIndexSet;
}

- (void).cxx_destruct;
- (void)_showPopoverController;
- (void)_showMoreList;
- (void)_showMenuViewController;
- (void)_setSelectedIndex:(long long)arg1;
- (void)_restorePreviousSelection;
- (id)_popupHeaderView;
- (id)_pillsControl;
- (id)_newMenuViewController;
- (void)_loadSortDataIfNecessaryForMenuIndex:(long long)arg1 reason:(long long)arg2;
- (void)_dismissMenuViewController;
- (id)_contentChildView;
- (void)_pillAction:(id)arg1;
- (void)_cancelMenuAction:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)sortDataRequest:(id)arg1 didFinishWithLockups:(id)arg2;
- (void)popupMenuHeader:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)willAppearInContext:(id)arg1;
- (struct UIEdgeInsets)sectionContentInset;
- (long long)numberOfCells;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIMenuPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

