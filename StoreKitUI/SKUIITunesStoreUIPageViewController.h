//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUStorePageViewController.h>

@class NSString, SKProductPageViewController, SUBarButtonItem;

@interface SKUIITunesStoreUIPageViewController : SUStorePageViewController
{
    SUBarButtonItem *_cancelButtonItem;
    NSString *_cancelButtonTitle;
    SKProductPageViewController *_productPageViewController;
    _Bool _showsCancelButton;
}

@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(nonatomic) __weak SKProductPageViewController *productPageViewController; // @synthesize productPageViewController=_productPageViewController;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
- (void).cxx_destruct;
- (void)_storeSheetCancelButtonAction:(id)arg1;
- (id)_cancelButtonItem;
- (void)_addCancelButtonToNavigationItem:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)resetNavigationItem:(id)arg1;
- (_Bool)presentDialogForError:(id)arg1 pendUntilVisible:(_Bool)arg2;
- (void)handleFailureWithError:(id)arg1;
- (void)dealloc;

@end

