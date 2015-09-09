//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOComposedRoute, NSHashTable, NSString;

@interface VKRouteContext : NSObject
{
    GEOComposedRoute *_route;
    unsigned char useType;
    long long _inspectedLegIndex;
    long long _inspectedStepIndex;
    struct PolylineCoordinate _routeOffset;
    long long _currentLegIndex;
    long long _currentStepIndex;
    _Bool _snappingToTransitLines;
    CDStruct_2c43369c _puckLocation;
    float _puckRadius;
    unsigned long long _puckSnappedStopID;
    NSString *_locale;
    NSString *_accessPointEntryName;
    NSString *_accessPointExitName;
    _Bool _hasContextChangedForLabels;
    NSHashTable *_labelObservers;
    _Bool _hasContextChangedForRouteLine;
    NSHashTable *_routeLineObservers;
    unsigned char _useType;
}

@property(retain, nonatomic) NSString *accessPointExitName; // @synthesize accessPointExitName=_accessPointExitName;
@property(retain, nonatomic) NSString *accessPointEntryName; // @synthesize accessPointEntryName=_accessPointEntryName;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) unsigned long long puckSnappedStopID; // @synthesize puckSnappedStopID=_puckSnappedStopID;
@property(nonatomic) float puckRadius; // @synthesize puckRadius=_puckRadius;
@property(nonatomic) CDStruct_c3b9c2ee puckLocation; // @synthesize puckLocation=_puckLocation;
@property(nonatomic) long long inspectedStepIndex; // @synthesize inspectedStepIndex=_inspectedStepIndex;
@property(nonatomic) long long inspectedLegIndex; // @synthesize inspectedLegIndex=_inspectedLegIndex;
@property(nonatomic) _Bool snappingToTransitLines; // @synthesize snappingToTransitLines=_snappingToTransitLines;
@property(nonatomic) long long currentStepIndex; // @synthesize currentStepIndex=_currentStepIndex;
@property(nonatomic) long long currentLegIndex; // @synthesize currentLegIndex=_currentLegIndex;
@property(nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(readonly, nonatomic) unsigned char useType; // @synthesize useType=_useType;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (id).cxx_construct;
- (void)_setContextChangedForRouteLine;
- (void)_setContextChangedForLabels;
- (void)resetNotificationsForObserverType:(unsigned char)arg1;
- (void)removeObserver:(id)arg1 withType:(unsigned char)arg2;
- (void)addObserver:(id)arg1 withType:(unsigned char)arg2;
- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1;

@end

