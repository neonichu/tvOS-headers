//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@class ICSDateValue, NSString;

@interface ICSAttendeeComment : ICSProperty
{
}

- (_Bool)shouldObscureValue;
- (id)parametersToObscure;
@property(retain, nonatomic) ICSDateValue *x_calendarserver_dtstamp;
@property(retain, nonatomic) NSString *x_calendarserver_attendee_ref;
- (void)setComment:(id)arg1;
- (id)initWithComment:(id)arg1;

@end
