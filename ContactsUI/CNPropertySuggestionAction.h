//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertyAction.h>

@class CNContactSuggestionViewController;

__attribute__((visibility("hidden")))
@interface CNPropertySuggestionAction : CNPropertyAction
{
    long long _selectedChoice;
    CNContactSuggestionViewController *_suggestionViewController;
}

@property(retain, nonatomic) CNContactSuggestionViewController *suggestionViewController; // @synthesize suggestionViewController=_suggestionViewController;
@property(nonatomic) long long selectedChoice; // @synthesize selectedChoice=_selectedChoice;
- (void).cxx_destruct;
- (void)reject;
- (void)confirm;
- (_Bool)_confirmOrReject:(_Bool)arg1;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;

@end

