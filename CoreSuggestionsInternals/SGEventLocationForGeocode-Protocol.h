//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/NSObject-Protocol.h>

@class NSData, NSString;

@protocol SGEventLocationForGeocode <NSObject>
- (id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(NSData *)arg4;
- (NSData *)geocodeHandle;
- (double)geocodeAccuracy;
- (double)geocodeLongitude;
- (double)geocodeLatitude;
- (_Bool)geocodeIsEnd;
- (_Bool)geocodeIsStart;
- (NSString *)geocodeAddress;
- (NSString *)geocodeLabel;
@end

