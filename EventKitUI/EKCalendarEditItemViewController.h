//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

#import <EventKitUI/EKCalendarChooserDelegate-Protocol.h>

@class EKCalendar, EKCalendarChooser, EKEventStore, NSString;

__attribute__((visibility("hidden")))
@interface EKCalendarEditItemViewController : EKEditItemViewController <EKCalendarChooserDelegate>
{
    EKEventStore *_store;
    EKCalendarChooser *_chooser;
    EKCalendar *_selectedCalendar;
    unsigned long long _entityType;
    _Bool _limitToSource;
}

@property(nonatomic) _Bool limitToSource; // @synthesize limitToSource=_limitToSource;
- (void).cxx_destruct;
- (void)calendarChooserSelectionDidChange:(id)arg1;
- (struct CGSize)preferredContentSize;
@property(retain, nonatomic) EKCalendar *selectedCalendar;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 entityType:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

