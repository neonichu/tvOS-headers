//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTrigger.h>

@class NSDate, NSDateComponents, NSString, NSTimeZone, NSTimer;

@interface HMDTimerTrigger : HMDTrigger
{
    NSDate *_fireDate;
    NSTimeZone *_fireDateTimeZone;
    NSDateComponents *_fireRepeatInterval;
    NSString *_timerID;
    NSDate *_currentFireDate;
    NSTimer *_timer;
}

+ (_Bool)supportsSecureCoding;
+ (id)validateWholeMinuteDate:(id)arg1 onCalendar:(id)arg2;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDate *currentFireDate; // @synthesize currentFireDate=_currentFireDate;
@property(retain, nonatomic) NSString *timerID; // @synthesize timerID=_timerID;
@property(copy, nonatomic) NSDateComponents *fireRepeatInterval; // @synthesize fireRepeatInterval=_fireRepeatInterval;
@property(copy, nonatomic) NSTimeZone *fireDateTimeZone; // @synthesize fireDateTimeZone=_fireDateTimeZone;
@property(copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getCalendar;
- (void)_closestDatesForStartDate:(id)arg1 earliestDate:(id)arg2 timeZone:(id)arg3 deliveryRepeatInterval:(id)arg4 returnDateBefore:(id *)arg5 returnDateAfter:(id *)arg6;
- (void)_timerTriggered;
- (id)_nextFireDate;
- (void)activate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleUpdateTimerTriggerPropertiesRequest:(id)arg1;
- (void)_registerForMessages;
- (void)_stopTimer;
- (void)_startTimerWithFireDate:(id)arg1;
- (id)validateRecurrence:(id)arg1;
- (void)nsTimerTriggered:(id)arg1;
- (void)timerTriggered;
- (void)dealloc;
- (void)invalidate;
- (void)completeConfiguration;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4;

@end

