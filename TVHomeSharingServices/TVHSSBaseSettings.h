//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TVSPreferences;

@interface TVHSSBaseSettings : NSObject
{
    id _preferencesDomainObserver;
    TVSPreferences *_preferences;
}

@property(retain, nonatomic) TVSPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) id preferencesDomainObserver; // @synthesize preferencesDomainObserver=_preferencesDomainObserver;
- (void).cxx_destruct;
- (void)_updateSettingWithBlock:(CDUnknownBlockType)arg1 shouldNotify:(_Bool)arg2 forKey:(id)arg3;
- (void)_refreshSettingsFromPreferencesAndShouldNotify:(_Bool)arg1;
- (void)dealloc;
- (id)initWithPreferencesDomain:(id)arg1;
- (id)init;

@end

