//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertySimpleEditingCell.h>

#import <ContactsUI/CNContactPickerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNPropertyRelatedNameEditingCell : CNPropertySimpleEditingCell <CNContactPickerDelegate>
{
}

- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)performAccessoryAction;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

