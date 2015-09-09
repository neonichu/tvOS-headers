//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSMutableArray, NSString, NSTimer, PKPaymentDeviceProvisioningData, PKSecureElement;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKPaymentDevice : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSTimer *_timer;
    NSObject<OS_dispatch_source> *_locationFixTimeout;
    PKSecureElement *_secureElement;
    PKPaymentDeviceProvisioningData *_provisioningData;
    NSMutableArray *_provisioningCompletions;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    _Bool _skipLocationCheck;
}

+ (id)clientInfoHTTPHeader;
@property(nonatomic) _Bool skipLocationCheck; // @synthesize skipLocationCheck=_skipLocationCheck;
- (void)configurationDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queueConnectionToTrustedServiceManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_executeProvisioningCompletionHandlers;
- (void)_finishLocationFixWithLocation:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)deleteApplicationWithAID:(id)arg1;
- (void)setRegistrationRegionMap:(id)arg1;
- (void)provisioningDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)configurationData;
- (id)rewrapDataWithDeviceIdentifier:(id)arg1;
- (void)signData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)registrationDataWithAuthToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithCallbackQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

