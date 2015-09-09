//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMStopwatch : NSObject
{
    NSString *label;
    NSString *comment;
    double startTime;
    double endTime;
}

+ (id)illegalLabelCharacterSet;
+ (void)dumpBuffer:(id)arg1;
+ (void)eventWithLabel:(id)arg1;
+ (void)eventWithLabel:(id)arg1 comment:(id)arg2;
+ (id)stopwatchWithLabel:(id)arg1;
+ (void)initialize;
@property(nonatomic) double endTime; // @synthesize endTime;
@property(nonatomic) double startTime; // @synthesize startTime;
@property(copy, nonatomic) NSString *comment; // @synthesize comment;
@property(copy, nonatomic) NSString *label; // @synthesize label;
- (void).cxx_destruct;
- (id)descriptionAsData;
- (id)description;
- (void)stop;
- (void)stopWithComment:(id)arg1;
- (id)initWithLabel:(id)arg1;

@end

