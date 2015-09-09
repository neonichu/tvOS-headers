//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSArray, NSUUID;
@protocol GEOMapItem;

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding>
{
    double _latitude;
    double _longitude;
    double _uncertainty;
    double _confidence;
    NSUUID *_identifier;
    long long _type;
    id <GEOMapItem> _geoMapItem;
    NSArray *_visits;
}

+ (_Bool)supportsSecureCoding;
+ (id)locationOfInterestSourceToString:(long long)arg1;
+ (id)locationOfInterestTypeToString:(long long)arg1;
@property(readonly, nonatomic) NSArray *visits; // @synthesize visits=_visits;
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem; // @synthesize geoMapItem=_geoMapItem;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (id)mapItem;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 confidence:(double)arg4 identifier:(id)arg5 type:(long long)arg6 geoMapItem:(id)arg7 visits:(id)arg8;
- (long long)frequencyCompare:(id)arg1;
- (long long)recentCompare:(id)arg1;
- (id)localizedAllVisitsDescription;
- (id)localizedLastVisitDescription;
- (id)relativeNameToMapItem:(id)arg1;
- (id)preciseName;
- (id)name;

@end

