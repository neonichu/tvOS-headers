//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVOutputDeviceInternal, NSString;

@interface AVOutputDevice : NSObject
{
    AVOutputDeviceInternal *_outputDevice;
}

+ (id)sharedLocalDevice;
- (double)frecencyScore;
- (void)updateFrecencyScore;
- (void)setSecondDisplayEnabled:(_Bool)arg1;
- (struct OpaqueFigEndpoint *)figEndpoint;
@property(readonly, nonatomic) NSString *ID;
@property(readonly, nonatomic) NSString *name;
- (id)_figEndpointPropertyValueForKey:(struct __CFString *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)_weakReference;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1;
- (id)init;

@end

