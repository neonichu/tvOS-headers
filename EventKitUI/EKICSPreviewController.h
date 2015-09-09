//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKitUI/EKEventViewDelegatePrivate-Protocol.h>

@class EKEvent, EKEventStore, EKEventViewController, EKICSPreviewModel, NSString, UIViewController;
@protocol EKICSPreviewControllerDelegate;

@interface EKICSPreviewController : NSObject <EKEventViewDelegatePrivate>
{
    EKICSPreviewModel *_model;
    EKEventStore *_eventStore;
    EKEventViewController *_currentImport;
    UIViewController *_contentViewController;
    _Bool _importing;
    _Bool _hasCustomCancelButton;
    long long _cancelButtonType;
    EKEvent *_eventFromUID;
    _Bool _allowsImport;
    _Bool _allowsEditing;
    _Bool _allowsSubitems;
    _Bool _allowsInvalidProperties;
    _Bool _allowsToDos;
    int _eventUID;
    id <EKICSPreviewControllerDelegate> _previewDelegate;
    unsigned long long _actionsState;
}

@property(readonly, nonatomic) int eventUID; // @synthesize eventUID=_eventUID;
@property(nonatomic) _Bool allowsToDos; // @synthesize allowsToDos=_allowsToDos;
@property(nonatomic) _Bool allowsInvalidProperties; // @synthesize allowsInvalidProperties=_allowsInvalidProperties;
@property(nonatomic) unsigned long long actionsState; // @synthesize actionsState=_actionsState;
@property(nonatomic) _Bool allowsSubitems; // @synthesize allowsSubitems=_allowsSubitems;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic) _Bool allowsImport; // @synthesize allowsImport=_allowsImport;
@property(nonatomic) __weak id <EKICSPreviewControllerDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;
- (void).cxx_destruct;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (_Bool)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
- (_Bool)eventViewControllerShouldDismissSelf:(id)arg1;
- (void)importEventFromController:(id)arg1 intoCalendar:(id)arg2;
- (void)importAllIntoCalendar:(id)arg1;
- (void)calendarChooserDidCancel:(id)arg1;
- (void)calendarChooserDidFinish:(id)arg1;
- (void)importAllRequested:(id)arg1;
- (void)eventViewControllerDidRequestAddToCalendar:(id)arg1;
- (void)presentCalendarChooserForController:(id)arg1;
- (void)icsPreviewListControllerDidRequestImportAll:(id)arg1;
- (void)icsPreviewListController:(id)arg1 didSelectEvent:(id)arg2;
- (void)removeCancelButton;
- (void)setCancelButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)_updateCancelButton;
- (void)_createCancelButtonWithType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)popoverContentController;
- (id)viewController;
- (id)detailViewForEvent:(id)arg1 eventInRealStore:(_Bool)arg2 isUpdate:(_Bool)arg3;
@property(readonly, nonatomic) _Bool isImporting;
@property(readonly, nonatomic) unsigned long long unimportedEventCount;
@property(readonly, nonatomic) unsigned long long totalEventCount;
- (void)_databaseChanged:(id)arg1;
- (void)dealloc;
- (id)initWithEventUID:(int)arg1 eventStore:(id)arg2;
- (id)initWithData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithData:(id)arg1 eventStore:(id)arg2;
- (id)initWithURL:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1 eventStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

