//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPUFoundation/MPUReportingEvent-Protocol.h>

@class NSString, SSVPlayActivityEvent;

@interface MPUReportingPlaybackSessionIDChangeEvent : NSObject <MPUReportingEvent>
{
    SSVPlayActivityEvent *_playActivityEvent;
    NSString *_playbackSessionID;
}

@property(copy, nonatomic) NSString *playbackSessionID; // @synthesize playbackSessionID=_playbackSessionID;
@property(copy, nonatomic) SSVPlayActivityEvent *playActivityEvent; // @synthesize playActivityEvent=_playActivityEvent;
- (void).cxx_destruct;
- (unsigned long long)reportingEventType;
- (_Bool)isValidReportingEvent;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

