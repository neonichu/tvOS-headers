//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEORouteHypothesisIncident : NSObject <NSSecureCoding>
{
    int _routeIncidentType;
    int _routeIncidentSignificance;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int routeIncidentSignificance; // @synthesize routeIncidentSignificance=_routeIncidentSignificance;
@property(readonly, nonatomic) int routeIncidentType; // @synthesize routeIncidentType=_routeIncidentType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncidentType:(int)arg1 incidentSignificance:(int)arg2;

@end

