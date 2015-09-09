//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSInvocation, PLGeoLocationShiftResult, PLGeoLocationShifter;

@protocol PLGeoLocationShifterDelegate <NSObject>
- (NSDictionary *)locationShifter:(PLGeoLocationShifter *)arg1 locationCoordinatesForAssetIDs:(NSArray *)arg2;
- (void)locationShifter:(PLGeoLocationShifter *)arg1 requestsInvocation:(NSInvocation *)arg2;
- (void)locationShifterDidFinish:(PLGeoLocationShifter *)arg1;
- (void)locationShifter:(PLGeoLocationShifter *)arg1 didShiftWithResult:(PLGeoLocationShiftResult *)arg2;
@end

