//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@protocol CalendarPublishingActivityDelegate;

@interface CalendarPublishingActivityViewController : UIActivityViewController
{
    id <CalendarPublishingActivityDelegate> _activityDelegate;
}

@property __weak id <CalendarPublishingActivityDelegate> activityDelegate; // @synthesize activityDelegate=_activityDelegate;
- (void).cxx_destruct;
- (void)_prepareActivity:(id)arg1;
- (_Bool)_shouldShowSystemActivity:(id)arg1;

@end

