//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVHomeSharingServices/TVHSSBaseSettings.h>

@interface TVHSSDaemonSettings : TVHSSBaseSettings
{
    _Bool _cacheIPAddresses;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool cacheIPAddresses; // @synthesize cacheIPAddresses=_cacheIPAddresses;
- (void)_refreshSettingsFromPreferencesAndShouldNotify:(_Bool)arg1;
- (id)_init;
- (id)init;

@end

