//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSString;

@interface RadioManagedSkipHistory : NSManagedObject
{
}

@property(nonatomic) long long stationID;
@property(copy, nonatomic) NSString *stationHash;
@property(copy, nonatomic) NSArray *skipTimestamps;
@property(copy, nonatomic) NSString *skipIdentifier;

@end

