//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TLCapabilitiesManager : NSObject
{
    _Bool _ringtoneStoreAvailable;
    _Bool _alertToneStoreAvailable;
}

+ (id)sharedCapabilitiesManager;
@property(nonatomic, getter=_isAlertToneStoreAvailable, setter=_setAlertToneStoreAvailable:) _Bool _alertToneStoreAvailable; // @synthesize _alertToneStoreAvailable;
@property(nonatomic, getter=_isRingtoneStoreAvailable, setter=_setRingtoneStoreAvailable:) _Bool _ringtoneStoreAvailable; // @synthesize _ringtoneStoreAvailable;
@property(readonly, nonatomic) _Bool hasUserGeneratedVibrationsCapability;
@property(readonly, nonatomic) _Bool hasVibratorCapability;
@property(readonly, nonatomic, getter=isAlertToneStoreAvailable) _Bool alertToneStoreAvailable;
@property(readonly, nonatomic, getter=isRingtoneStoreAvailable) _Bool ringtoneStoreAvailable;
- (void)_handleStoreAvailableItemKindsChangedNotification:(id)arg1;
- (void)_checkRingtoneStoreAvailability;
- (_Bool)_hasTelephonyCapability;
- (void)dealloc;
- (id)init;

@end

