//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface _HDSessionAchievementState : NSObject
{
    NSArray *_sortedSessions;
    NSDictionary *_sortedSessionsByActivityType;
    NSDictionary *_bestCaloriesSessionsByActivityType;
    NSDictionary *_initialSessionCountByActivityType;
}

@property(retain, nonatomic) NSDictionary *initialSessionCountByActivityType; // @synthesize initialSessionCountByActivityType=_initialSessionCountByActivityType;
@property(retain, nonatomic) NSDictionary *bestCaloriesSessionsByActivityType; // @synthesize bestCaloriesSessionsByActivityType=_bestCaloriesSessionsByActivityType;
@property(retain, nonatomic) NSDictionary *sortedSessionsByActivityType; // @synthesize sortedSessionsByActivityType=_sortedSessionsByActivityType;
@property(retain, nonatomic) NSArray *sortedSessions; // @synthesize sortedSessions=_sortedSessions;
- (void).cxx_destruct;

@end

