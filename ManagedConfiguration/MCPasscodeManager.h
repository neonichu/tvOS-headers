//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MCPasscodeManager : NSObject
{
}

+ (id)hashForPasscode:(id)arg1 usingMethod:(int)arg2 salt:(id)arg3;
+ (id)characteristicsDictionaryFromPasscode:(id)arg1;
+ (_Bool)_passcodeCharacteristics:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 outError:(id *)arg3;
+ (_Bool)passcode:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 checkHistory:(_Bool)arg3 outError:(id *)arg4;
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1;
+ (int)unlockScreenTypeForRestrictions:(id)arg1 outSimplePasscodeType:(int *)arg2;
+ (int)unlockScreenTypeForRestrictions:(id)arg1;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1 outSimplePasscodeType:(int *)arg2;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1;
+ (int)defaultNewPasscodeEntrySimplePasscodeType;
+ (id)generateSalt;
+ (id)deviceLockedError;
+ (_Bool)isDeviceUnlocked;
+ (id)sharedManager;
- (void)passcodeExpiryDateCompletionBlock:(CDUnknownBlockType)arg1;
- (id)passcodeExpiryDateOutError:(id *)arg1;
- (_Bool)_checkPasscode:(id)arg1 againstHistoryWithRestrictions:(id)arg2 outError:(id *)arg3;
- (_Bool)isCurrentPasscodeCompliantOutError:(id *)arg1;
- (_Bool)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg1 outError:(id *)arg2;
- (_Bool)passcode:(id)arg1 compliesWithPolicyCheckHistory:(_Bool)arg2 outError:(id *)arg3;
- (id)localizedDescriptionOfPasscodePolicy;
- (int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)arg1;
- (int)newPasscodeEntryScreenType;
- (int)currentUnlockSimplePasscodeType;
- (int)currentUnlockScreenType;
- (id)_passcodeCharacteristics;
- (_Bool)unlockDeviceWithPasscode:(id)arg1 outError:(id *)arg2;
- (id)_wrongPasscodeError;
- (_Bool)isDeviceLocked;
- (void)lockDevice;
- (void)lockDeviceImmediately:(_Bool)arg1;
- (_Bool)isPasscodeSet;
- (id)_privatePasscodeDict;
- (id)_publicPasscodeDict;

@end

