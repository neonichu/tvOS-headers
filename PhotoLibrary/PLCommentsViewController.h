//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotoLibrary/PLCloudCommentsChangeObserver-Protocol.h>
#import <PhotoLibrary/PLDismissableViewController-Protocol.h>
#import <PhotoLibrary/PLPhotoCommentEntryViewDelegate-Protocol.h>
#import <PhotoLibrary/UITableViewDataSource-Protocol.h>
#import <PhotoLibrary/UITableViewDelegate-Protocol.h>

@class CAGradientLayer, NSCache, NSString, PLCloudSharedComment, PLManagedAsset, PLPhotoCommentEntryView, UIBarButtonItem, UIImageView, UITableView, UIView, _UIBackdropView;
@protocol PLCommentsViewControllerDelegate;

@interface PLCommentsViewController : UIViewController <PLCloudCommentsChangeObserver, PLPhotoCommentEntryViewDelegate, PLDismissableViewController, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UIView *_tableContainerView;
    PLManagedAsset *_asset;
    CAGradientLayer *_maskLayer;
    PLPhotoCommentEntryView *_entryView;
    PLCloudSharedComment *_justInsertedComment;
    _Bool _justTappedSmileButton;
    _Bool _editMode;
    _Bool _temporaryKeyboardHideReshow;
    _Bool _shouldAdjustInitialScrollPosition;
    double _keyboardOverlap;
    id <PLCommentsViewControllerDelegate> _commentsControllerDelegate;
    UIView *_containerView;
    NSCache *_commentsHeightCache;
    UIImageView *_gradientView;
    _UIBackdropView *_backdropView;
    UIBarButtonItem *_cancelButton;
    _Bool _isCompact;
    _Bool _shouldUseCompactCommentSeparators;
    struct CGRect _availableBounds;
}

@property(nonatomic) _Bool shouldUseCompactCommentSeparators; // @synthesize shouldUseCompactCommentSeparators=_shouldUseCompactCommentSeparators;
@property(nonatomic) struct CGRect availableBounds; // @synthesize availableBounds=_availableBounds;
@property(nonatomic) _Bool isCompact; // @synthesize isCompact=_isCompact;
@property(nonatomic) _Bool editMode; // @synthesize editMode=_editMode;
@property(retain, nonatomic) PLCloudSharedComment *justInsertedComment; // @synthesize justInsertedComment=_justInsertedComment;
@property(retain, nonatomic) PLManagedAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) id <PLCommentsViewControllerDelegate> commentsControllerDelegate; // @synthesize commentsControllerDelegate=_commentsControllerDelegate;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_stopWatchingKeyboard;
- (void)_startWatchingKeyboard;
- (void)_postCommentValidated:(id)arg1;
- (void)cancelCurrentAction:(id)arg1;
- (void)cancelDeleteMode:(id)arg1;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)_fontSizesDidChange:(id)arg1;
- (void)cloudCommentsDidChange:(id)arg1;
- (void)_smileButtonTapped:(id)arg1;
- (_Bool)checkAndAlertMaxLikesReached;
- (void)_addCommentButtonTapped:(id)arg1;
- (_Bool)_checkAndAlertMaxCommentsReachedWhenFinalizing:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)scrollToComment:(id)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)commentCellHeightForWidth:(double)arg1;
- (long long)postCommentSection;
- (long long)textCommentSection;
- (long long)assetOwnerCommentSection;
- (long long)smileCommentSection;
- (_Bool)shouldShowCommentPostingUI;
- (_Bool)showAssetOwnerSection;
- (void)photoCommentEntryViewDidEndEditing:(id)arg1;
- (void)photoCommentEntryViewWillBeginEditing:(id)arg1;
- (void)photoCommentEntryViewHeightDidChange:(id)arg1;
- (_Bool)_adjustTextEntrySize;
- (void)_adjustInitialScrollPosition:(_Bool)arg1;
- (id)_firstUnreadCloudComment;
- (id)currentEntryView;
- (_Bool)shouldUseTextEntryCell;
@property(retain, nonatomic) NSString *draftComment;
- (void)setRasterization:(_Bool)arg1;
@property(readonly, nonatomic) UIBarButtonItem *cancelButton;
- (void)setEditMode:(_Bool)arg1 shouldBecomeFirstResponder:(_Bool)arg2;
- (void)updateViewLayoutWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)_updateLayerMaskWithBoundsChange;
@property(readonly, nonatomic) UITableView *commentsTableView;
- (void)loadView;
- (void)updateForSizeChange;
- (struct CGSize)_preferredViewSizeInContainerSize:(struct CGSize)arg1 forInterfaceOrientation:(long long)arg2 tableViewSize:(struct CGSize *)arg3;
- (double)_tableViewHeightForWidth:(double)arg1 interfaceOrientation:(long long)arg2;
- (double)_heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

