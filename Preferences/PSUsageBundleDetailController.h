//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSEditableListController.h>

@interface PSUsageBundleDetailController : PSEditableListController
{
}

+ (void)setupSpecifier:(id)arg1 forMediaGroups:(id)arg2;
+ (id)mediaGroups;
- (id)specifiers;
- (id)sizeForSpecifier:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateSizesAfterDeletingSize:(float)arg1 shouldPop:(_Bool)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)size:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (_Bool)needsToShowToolbarInPrefsAppRoot;
- (void)loadView;

@end

