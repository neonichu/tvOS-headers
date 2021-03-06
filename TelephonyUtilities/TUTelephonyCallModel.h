//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/TUCallModel.h>

@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TUTelephonyCallModel : TUCallModel
{
    _Bool _networkCanTakeCallsPrivate;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_callManagementState;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool networkCanTakeCallsPrivate; // @synthesize networkCanTakeCallsPrivate=_networkCanTakeCallsPrivate;
@property(retain, nonatomic) NSDictionary *callManagementState; // @synthesize callManagementState=_callManagementState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
@property(readonly, nonatomic) int expectedOutgoingCallSubType;
@property(readonly, nonatomic, getter=isWiFiEmergencyCallingAllowed) _Bool wiFiEmergencyCallingAllowed;
@property(readonly, nonatomic, getter=isWiFiCallingCurrentlyAvailable) _Bool wiFiCallingCurrentlyAvailable;
- (_Bool)isSendToVoicemailAllowed;
- (_Bool)isHoldAndAnswerAllowed;
- (_Bool)isEndAndAnswerAllowed;
- (_Bool)isHardPauseAvailable;
- (_Bool)isTakingCallsPrivateAllowed;
- (_Bool)_isAmbiguousCallList;
- (_Bool)_isAmbiguousMultiPartyCall;
- (int)ambiguityState;
- (_Bool)isAddCallAllowed;
- (_Bool)isHoldAllowed;
- (_Bool)isMergeable;
- (_Bool)isSwappable;
- (void)updateNetworkCanTakeCallsPrivate;
- (void)updateCallManagementState;
- (id)audioModeForCall:(id)arg1;
- (id)audioCategoryForCall:(id)arg1;
- (void)dealloc;
- (id)init;

@end

