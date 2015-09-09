//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotificationsUI/NCDefaultDateLabel.h>

#import <NotificationsUI/NCRelativeDateTimerDelegate-Protocol.h>

@class NCRelativeDateTimer, NSString;

@interface NCRelativeDateLabel : NCDefaultDateLabel <NCRelativeDateTimerDelegate>
{
    NCRelativeDateTimer *_relativeDateTimer;
    unsigned long long _value;
    int _resolution;
    long long _comparedToNow;
}

- (void)timerFiredWithValue:(unsigned long long)arg1 forResolution:(int)arg2 comparedToNow:(long long)arg3;
- (id)constructLabelString;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
