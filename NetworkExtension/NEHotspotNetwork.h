//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NEHotspotNetwork : NSObject
{
    struct __CNNetwork *_network;
}

@property(readonly, getter=isChosenHelper) _Bool chosenHelper;
@property(readonly, getter=didJustJoin) _Bool justJoined;
@property(readonly, getter=didAutoJoin) _Bool autoJoined;
@property(readonly, getter=isSecure) _Bool secure;
- (void)setPassword:(id)arg1;
- (void)setConfidence:(long long)arg1;
@property(readonly) double signalStrength;
@property(readonly) NSString *BSSID;
@property(readonly) NSString *SSID;
@property(readonly) NSString *interfaceName;
@property struct __CNNetwork *network; // @synthesize network=_network;
- (id)initWithNetwork:(struct __CNNetwork *)arg1;
- (id)description;
- (void)dealloc;

@end

