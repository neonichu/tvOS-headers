//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVKit/TVTableViewDelegate-Protocol.h>

@class NSArray, NSString, TVOptionDialogListDataSource, TVTableView, UILabel, UIView;

@interface TVOptionDialogViewController : UIViewController <TVTableViewDelegate>
{
    TVOptionDialogListDataSource *_listDataSource;
    NSArray *_menuItems;
    UIView *_headerView;
    NSString *_descriptionText;
    UILabel *_descriptionLabel;
    TVTableView *_listView;
}

@property(retain, nonatomic) TVTableView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (void).cxx_destruct;
- (double)_listWidth;
- (id)_createDataSource;
- (void)setListDataSource:(id)arg1;
- (id)listDataSource;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)preferredFocusedItem;
- (void)viewDidLayoutSubviews;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

