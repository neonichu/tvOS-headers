//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

#import <EventKitUI/EKEventAttachmentCellControllerDelegate-Protocol.h>
#import <EventKitUI/EKEventAttachmentEditViewControllerDelegate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EKEventAttachmentsEditItem : EKEventEditItem <EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate>
{
    NSArray *_cellControllers;
}

- (void).cxx_destruct;
- (id)owningEventForAttachmentEditViewController:(id)arg1;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (id)parentViewControllerForAttachmentCellController:(id)arg1;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (unsigned long long)numberOfSubitems;
- (_Bool)_shouldCondenseIntoSingleItem;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)dealloc;
- (void)refreshFromCalendarItemAndStore;
- (void)_cleanUpCellControllers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

