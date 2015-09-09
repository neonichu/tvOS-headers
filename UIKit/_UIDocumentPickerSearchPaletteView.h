//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UISearchBarDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, UISearchController, _UIDocumentPickerContainerViewController, _UIDocumentPickerSearchContainerModel;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSearchPaletteView : UIView <UISearchBarDelegate>
{
    UISearchController *_searchController;
    _UIDocumentPickerSearchContainerModel *_searchModel;
    _UIDocumentPickerContainerViewController *_resultsController;
    NSLayoutConstraint *_searchFieldLeftConstraint;
    NSLayoutConstraint *_searchFieldRightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *searchFieldRightConstraint; // @synthesize searchFieldRightConstraint=_searchFieldRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *searchFieldLeftConstraint; // @synthesize searchFieldLeftConstraint=_searchFieldLeftConstraint;
@property(retain, nonatomic) _UIDocumentPickerContainerViewController *resultsController; // @synthesize resultsController=_resultsController;
@property(retain, nonatomic) _UIDocumentPickerSearchContainerModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchCanceled:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)setServiceViewController:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

