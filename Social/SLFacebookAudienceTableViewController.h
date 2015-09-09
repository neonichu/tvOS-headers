//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <Social/SLFacebookAudienceViewController-Protocol.h>

@class NSArray, SLFacebookPostPrivacySetting, UINavigationItem;
@protocol SLFacebookAudienceViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SLFacebookAudienceTableViewController : UITableViewController <SLFacebookAudienceViewController>
{
    NSArray *_privacySettings;
    SLFacebookPostPrivacySetting *_selectedSetting;
    id <SLFacebookAudienceViewControllerDelegate> _selectionDelegate;
    UINavigationItem *_navigationItem;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_privacySettingForIndexPath:(id)arg1;
- (void)setCurrentPrivacySetting:(id)arg1;
- (void)setPrivacySettings:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (id)initWithStyle:(long long)arg1;

@end

