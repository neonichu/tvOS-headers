//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSDictionary, NSString;

@interface TVS2SVerificationOperation : ISOperation
{
    NSString *_customerTitle;
    NSString *_customerMessage;
    NSArray *_devices;
    NSDictionary *_URLs;
    NSDictionary *_selectedDevice;
    NSDictionary *_sendCodeLocalization;
}

@property(retain, nonatomic) NSDictionary *sendCodeLocalization; // @synthesize sendCodeLocalization=_sendCodeLocalization;
@property(retain, nonatomic) NSDictionary *selectedDevice; // @synthesize selectedDevice=_selectedDevice;
@property(retain, nonatomic) NSDictionary *URLs; // @synthesize URLs=_URLs;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) NSString *customerMessage; // @synthesize customerMessage=_customerMessage;
@property(retain, nonatomic) NSString *customerTitle; // @synthesize customerTitle=_customerTitle;
- (void).cxx_destruct;
- (id)_copyVerifyResponseWithCode:(id)arg1 fromDevice:(id)arg2 error:(id *)arg3;
- (id)_copySendCodeResponseForDevice:(id)arg1 error:(id *)arg2;
- (id)_copyDevicesResponseWithError:(id *)arg1;
- (_Bool)_verify2SVCode:(id)arg1 error:(id *)arg2;
- (_Bool)_sendCodeToDevice:(id)arg1 error:(id *)arg2 showDialogs:(_Bool)arg3;
- (_Bool)_sendCodeToSelectedDevice;
- (void)_displayDeviceListWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_copy2SVCodeFromUser;
- (id)_copyDeviceFromUser;
- (void)run;
- (void)setSerializedURLs:(id)arg1;
- (void)presentFailureAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentCodeEntryAlertWithTitle:(id)arg1 message:(id)arg2 newCodeLabel:(id)arg3 submitLabel:(id)arg4 newCodeRequestHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)presentDevicesAlertWithTitle:(id)arg1 message:(id)arg2 deviceList:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

