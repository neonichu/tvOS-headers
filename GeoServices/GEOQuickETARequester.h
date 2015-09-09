//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEODirectionsRouteRequest, GEOETARequest, GEOQuickETARequest, NSString;

@interface GEOQuickETARequester : NSObject
{
    GEOQuickETARequest *_request;
    GEOETARequest *_simpleETARequest;
    GEODirectionsRouteRequest *_directionsETARequest;
    NSString *_loggingFacility;
}

@property(copy, nonatomic) NSString *loggingFacility; // @synthesize loggingFacility=_loggingFacility;
- (void)cancel;
- (void)calculateETAFromAPI:(_Bool)arg1 WithResponseHandler:(CDUnknownBlockType)arg2;
- (void)calculateETAWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)_calculateRoutingETAWithHandler:(CDUnknownBlockType)arg1;
- (void)_calculateSimpleETAFromAPI:(_Bool)arg1 WithHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

@end

