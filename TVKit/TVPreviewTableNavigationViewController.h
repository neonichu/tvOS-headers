//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVPreviewTableViewController.h>

@class NSArray, NSAttributedString, TVListTabsHeaderView, TVListTumblerHeaderView;
@protocol TVPreviewTableNavigationDelegate;

@interface TVPreviewTableNavigationViewController : TVPreviewTableViewController
{
    id <TVPreviewTableNavigationDelegate> _delegate;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedSubtitle;
    unsigned long long _navigationType;
    unsigned long long _textAnimation;
    NSArray *_navigationItems;
    unsigned long long _selectedItemIndex;
    TVListTumblerHeaderView *_tumblerHeaderView;
    TVListTabsHeaderView *_tabHeaderView;
}

+ (id)defaultTabTextAttributes;
+ (id)defaultSubtitleTextAttributes;
+ (id)defaultTitleTextAttributes;
@property(retain, nonatomic) TVListTabsHeaderView *tabHeaderView; // @synthesize tabHeaderView=_tabHeaderView;
@property(retain, nonatomic) TVListTumblerHeaderView *tumblerHeaderView; // @synthesize tumblerHeaderView=_tumblerHeaderView;
@property(nonatomic) unsigned long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
@property(copy, nonatomic) NSArray *navigationItems; // @synthesize navigationItems=_navigationItems;
@property(nonatomic) unsigned long long textAnimation; // @synthesize textAnimation=_textAnimation;
@property(readonly, nonatomic) unsigned long long navigationType; // @synthesize navigationType=_navigationType;
@property(copy, nonatomic) NSAttributedString *attributedSubtitle; // @synthesize attributedSubtitle=_attributedSubtitle;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(nonatomic) __weak id <TVPreviewTableNavigationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateHeaderWithNavigationItem:(id)arg1 oldIndex:(unsigned long long)arg2 newIndex:(unsigned long long)arg3;
- (id)_tabHeaderSegmentedControl;
- (id)_existingHeaderView;
- (id)headerView;
- (void)_createHeaderView;
- (void)_navigateRight;
- (void)_navigateLeft;
- (id)_currentItem;
- (unsigned long long)_maxIndex;
- (void)_rightSwipe:(id)arg1;
- (void)_leftSwipe:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNavigationType:(unsigned long long)arg1;

@end

