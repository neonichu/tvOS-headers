//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSDate;
@protocol GEOServerFormattedString;

@protocol GEOServiceGap <NSObject>
@property(readonly, nonatomic) id <GEOServerFormattedString> displayMessagFormatString;
@property(readonly, nonatomic) unsigned long long routeListInsertBeforeIndex;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@end

