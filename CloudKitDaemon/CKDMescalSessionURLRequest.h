//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDMescalSessionURLRequest : CKDURLRequest
{
    NSData *_mescalData;
    NSData *_sessionData;
}

@property(retain, nonatomic) NSData *sessionData; // @synthesize sessionData=_sessionData;
@property(retain, nonatomic) NSData *mescalData; // @synthesize mescalData=_mescalData;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)arg1;
- (_Bool)allowsAnonymousAccount;
- (_Bool)requiresDeviceID;
- (_Bool)requiresSignature;
- (id)requestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithSessionData:(id)arg1;

@end

