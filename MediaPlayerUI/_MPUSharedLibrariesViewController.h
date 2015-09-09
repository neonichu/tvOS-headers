//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MPMediaLibrary, NSArray;

@interface _MPUSharedLibrariesViewController : UITableViewController
{
    MPMediaLibrary *_connectingMediaLibrary;
    NSArray *_sharedMediaLibraries;
    _Bool _showsLocalLibrary;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(nonatomic) _Bool showsLocalLibrary; // @synthesize showsLocalLibrary=_showsLocalLibrary;
- (void).cxx_destruct;
- (void)_updateConnectionProgress;
- (void)_updateConnectionProgressForCell:(id)arg1;
- (void)_updateNavigationPrompt;
- (void)_reloadSharedLibraries;
- (id)_sharedMediaLibraries;
- (void)_cancelConnectionAndDismiss;
- (void)_mediaLibraryConnectionProgressDidChangeNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_availableMediaLibrariesDidChangeNotification:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

