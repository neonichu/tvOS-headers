//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertyAction.h>

@class CNContactContentViewController, CNMutableContact;
@protocol CNContactContentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyLinkedCardsAction : CNPropertyAction
{
    id <CNContactContentViewControllerDelegate> _contactDelegate;
    CNContactContentViewController *_contactController;
    CNMutableContact *_linkedContact;
}

@property(retain) CNMutableContact *linkedContact; // @synthesize linkedContact=_linkedContact;
@property(retain) CNContactContentViewController *contactController; // @synthesize contactController=_contactController;
@property __weak id <CNContactContentViewControllerDelegate> contactDelegate; // @synthesize contactDelegate=_contactDelegate;
- (void).cxx_destruct;
- (void)setPreferredForName;
- (void)setPreferredForImage;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

@end

