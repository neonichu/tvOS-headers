//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFAutocompleteResultsTableViewController, MFComposeRecipient;

@protocol MFAutocompleteResultsTableViewControllerDelegate <NSObject>

@optional
- (void)autocompleteResultsController:(MFAutocompleteResultsTableViewController *)arg1 didRequestInfoAboutRecipient:(MFComposeRecipient *)arg2;
- (void)autocompleteResultsController:(MFAutocompleteResultsTableViewController *)arg1 didSelectRecipient:(MFComposeRecipient *)arg2 atIndex:(unsigned long long)arg3;
- (void)autocompleteResultsController:(MFAutocompleteResultsTableViewController *)arg1 didSelectRecipient:(MFComposeRecipient *)arg2;
@end

