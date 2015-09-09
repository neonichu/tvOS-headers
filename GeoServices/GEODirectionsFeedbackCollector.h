//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEODirectionsFeedback, GEODirectionsFeedbackCollection, NSMutableSet;

@interface GEODirectionsFeedbackCollector : NSObject
{
    GEODirectionsFeedback *_currentDirectionsFeedback;
    GEODirectionsFeedbackCollection *_currentFeedbackCollection;
    NSMutableSet *_routeIDs;
    double _currentDirectionsNavigationStartTime;
    double _currentDirectionsNavigationEndTime;
}

@property(retain, nonatomic) NSMutableSet *routeIDs; // @synthesize routeIDs=_routeIDs;
@property(retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback; // @synthesize currentDirectionsFeedback=_currentDirectionsFeedback;
@property(retain, nonatomic) GEODirectionsFeedbackCollection *currentFeedbackCollection; // @synthesize currentFeedbackCollection=_currentFeedbackCollection;
- (void)endFeedbackSession;
- (void)setAudioFeedback:(CDStruct_f580248a *)arg1;
- (void)setFinalLocation:(id)arg1 asArrival:(_Bool)arg2;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (void)addRouteID:(id)arg1 routeIndex:(unsigned int)arg2 stepID:(unsigned int)arg3 completeStep:(_Bool)arg4;
- (void)setupFeedbackSessionWithResponseID:(id)arg1;
- (void)startFeedbackSessionForResponseID:(id)arg1;
- (void)startFeedbackSession;
- (void)_updateFeedbackSessionWithResponseID:(id)arg1;
- (void)reset;
- (void)dealloc;

@end

