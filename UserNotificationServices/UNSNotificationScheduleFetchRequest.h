//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UserNotificationServices/NSSecureCoding-Protocol.h>

@class NSDate;

@interface UNSNotificationScheduleFetchRequest : NSObject <NSSecureCoding>
{
    _Bool _includeSnoozes;
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned long long _maxSize;
}

+ (_Bool)supportsSecureCoding;
@property unsigned long long maxSize; // @synthesize maxSize=_maxSize;
@property _Bool includeSnoozes; // @synthesize includeSnoozes=_includeSnoozes;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end

