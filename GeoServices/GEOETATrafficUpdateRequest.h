//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOLocation, GEORouteAttributes, GEORouteSummaryAttributes, GEOTFTrafficSnapshot, NSData, NSMutableArray;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying>
{
    CDStruct_612aec5b _sessionID;
    CDStruct_4db06779 _clientTimepoint;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_destinationWaypointTypeds;
    NSData *_directionsResponseID;
    unsigned int _previouslyRejectedRerouteSavings;
    int _rerouteStatus;
    GEORouteAttributes *_routeAttributes;
    GEORouteSummaryAttributes *_routeSummaryAttributes;
    NSMutableArray *_routes;
    NSMutableArray *_serviceTags;
    NSData *_sessionState;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    _Bool _includeBetterRouteSuggestion;
    _Bool _useClientTimepointAsNow;
    _Bool _useLiveTrafficAsFallback;
    struct {
        unsigned int sessionID:1;
        unsigned int clientTimepoint:1;
        unsigned int previouslyRejectedRerouteSavings:1;
        unsigned int rerouteStatus:1;
        unsigned int includeBetterRouteSuggestion:1;
        unsigned int useClientTimepointAsNow:1;
        unsigned int useLiveTrafficAsFallback:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(retain, nonatomic) GEORouteSummaryAttributes *routeSummaryAttributes; // @synthesize routeSummaryAttributes=_routeSummaryAttributes;
@property(retain, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property(nonatomic) unsigned int previouslyRejectedRerouteSavings; // @synthesize previouslyRejectedRerouteSavings=_previouslyRejectedRerouteSavings;
@property(retain, nonatomic) NSMutableArray *destinationWaypointTypeds; // @synthesize destinationWaypointTypeds=_destinationWaypointTypeds;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets; // @synthesize additionalEnabledMarkets=_additionalEnabledMarkets;
@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(retain, nonatomic) GEOLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(readonly, nonatomic) _Bool hasRouteSummaryAttributes;
@property(nonatomic) _Bool hasRerouteStatus;
@property(nonatomic) int rerouteStatus; // @synthesize rerouteStatus=_rerouteStatus;
@property(readonly, nonatomic) _Bool hasSessionState;
@property(nonatomic) _Bool hasPreviouslyRejectedRerouteSavings;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationWaypointTypedsCount;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)clearDestinationWaypointTypeds;
@property(readonly, nonatomic) _Bool hasAdditionalEnabledMarkets;
@property(nonatomic) _Bool hasSessionID;
@property(readonly, nonatomic) _Bool hasDirectionsResponseID;
@property(readonly, nonatomic) _Bool hasClientCapabilities;
- (id)routeAtIndex:(unsigned long long)arg1;
- (unsigned long long)routesCount;
- (void)addRoute:(id)arg1;
- (void)clearRoutes;
@property(nonatomic) _Bool hasIncludeBetterRouteSuggestion;
@property(nonatomic) _Bool includeBetterRouteSuggestion; // @synthesize includeBetterRouteSuggestion=_includeBetterRouteSuggestion;
@property(readonly, nonatomic) _Bool hasRouteAttributes;
@property(readonly, nonatomic) _Bool hasCurrentUserLocation;
- (void)dealloc;
@property(nonatomic) _Bool hasUseClientTimepointAsNow;
@property(nonatomic) _Bool useClientTimepointAsNow;
@property(nonatomic) _Bool hasClientTimepoint;
@property(nonatomic) CDStruct_4db06779 clientTimepoint;
@property(nonatomic) _Bool hasUseLiveTrafficAsFallback;
@property(nonatomic) _Bool useLiveTrafficAsFallback;
@property(retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property(readonly, nonatomic) _Bool hasTrafficSnapshot;

@end

