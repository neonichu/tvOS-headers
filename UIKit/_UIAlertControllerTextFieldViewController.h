//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class NSArray, NSMutableArray, UIAlertControllerVisualStyle, UICollectionViewFlowLayout;
@protocol _UIAlertControllerTextFieldViewControllerContaining;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextFieldViewController : UICollectionViewController
{
    NSMutableArray *textFieldViews;
    NSMutableArray *textFields;
    _Bool _textFieldsCanBecomeFirstResponder;
    UIAlertControllerVisualStyle *_visualStyle;
    UICollectionViewFlowLayout *_collectionViewLayout;
    _Bool _hidden;
    id <_UIAlertControllerTextFieldViewControllerContaining> _container;
}

@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) __weak id <_UIAlertControllerTextFieldViewControllerContaining> container; // @synthesize container=_container;
@property(readonly) NSArray *textFields; // @synthesize textFields;
- (void).cxx_destruct;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)updateTextFieldStyle;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(nonatomic) _Bool textFieldsCanBecomeFirstResponder;
- (void)removeAllTextFields;
- (long long)numberOfTextFields;
- (id)textFieldAtIndex:(long long)arg1;
- (void)_updatePreferredContentSize;
- (void)_returnKeyPressedInTextField:(id)arg1;
- (id)addTextFieldWithPlaceholder:(id)arg1 isSecure:(_Bool)arg2;
- (double)_bottomMarginForTextFields;
@property(nonatomic) UIAlertControllerVisualStyle *visualStyle;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

