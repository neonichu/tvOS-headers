//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOComposedRoute, GEODirectionsRouteRequest, NSDictionary;

@protocol GEODirectionServiceTicket <NSObject>
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, nonatomic) GEOComposedRoute *originalRoute;
@property(readonly, nonatomic) _Bool isReroute;
@property(readonly, nonatomic) GEODirectionsRouteRequest *request;
- (void)cancel;
- (void)submitWithHandler:(void (^)(GEODirectionsRouteResponse *, NSError *, struct *))arg1 networkActivity:(void (^)(_Bool))arg2;
@end

