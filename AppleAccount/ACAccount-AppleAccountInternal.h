//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSString;

@interface ACAccount (AppleAccountInternal)
- (void)_aa_clearRawPassword;
@property(copy, nonatomic, setter=_aa_setRawPassword:) NSString *_aa_rawPassword;
- (void)aa_removeCerts;
- (void)aa_configureCerts;
- (void)_aa_setAltDSID:(id)arg1;
- (void)_aa_setAppleID:(id)arg1;
@end

