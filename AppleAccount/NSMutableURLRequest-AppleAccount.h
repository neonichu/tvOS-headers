//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSMutableURLRequest.h>

@interface NSMutableURLRequest (AppleAccount)
- (void)aa_addLocationSharingAllowedHeader;
- (_Bool)aa_addDeviceProvisioningInfoHeadersWithDSIDFromReponse:(id)arg1;
- (void)aa_addLoggedInAppleIDHeaderWithAccount:(id)arg1;
- (void)aa_addDeviceIDHeader;
- (void)aa_addDeviceInternalDevHeaderIfEnabled;
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1 sendEmptyValues:(_Bool)arg2;
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1;
- (void)aa_addDeviceProvisioningInfoHeadersWithAccount:(id)arg1;
- (void)aa_addiTunesHeadersWithAccount:(id)arg1;
- (_Bool)aa_addGrandSlamAuthorizationHeaderWithAccount:(id)arg1 grandslamToken:(id)arg2;
- (void)aa_setXMLBodyWithParameters:(id)arg1 signingSession:(id)arg2;
- (void)aa_signBodyData:(id)arg1 withSigningSession:(id)arg2;
- (id)aa_setXMLBodyWithParameters:(id)arg1;
- (void)aa_setBodyWithParameters:(id)arg1;
- (_Bool)aa_addAuthTokenOrBasicAuthHeaderWithAccount:(id)arg1 preferUsingPassword:(_Bool)arg2;
- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)arg1 preferUsingPassword:(_Bool)arg2;
- (void)aa_addBasicAuthPasswordWithAccount:(id)arg1;
- (void)aa_addTokenAuthHeaderWithAccount:(id)arg1;
@end

