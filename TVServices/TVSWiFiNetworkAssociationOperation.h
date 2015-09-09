//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSString, NSUUID, TVSWiFiInterface, TVSWiFiNetwork;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TVSWiFiNetworkAssociationOperation : NSOperation
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    TVSWiFiInterface *_interface;
    TVSWiFiNetwork *_network;
    NSString *_password;
    NSUUID *_token;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) NSUUID *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)_interface;
- (_Bool)_isDirected;
- (void)cancel;
- (void)operationCompletedWithResult:(id)arg1 error:(id)arg2;
- (void)attemptAssociation;
- (void)main;
- (id)initWithInterface:(id)arg1 network:(id)arg2 password:(id)arg3;

@end

