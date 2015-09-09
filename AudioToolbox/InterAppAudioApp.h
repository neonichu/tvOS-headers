//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, NSString, NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface InterAppAudioApp : NSObject
{
    BKSApplicationStateMonitor *appMonitor;
    _Bool _isHost;
    _Bool _isCurrentApp;
    _Bool _isForeground;
    long long _key;
    NSString *_name;
    UIImage *_icon;
    NSURL *_url;
}

@property(readonly, nonatomic) _Bool isForeground; // @synthesize isForeground=_isForeground;
@property(readonly, nonatomic) _Bool isCurrentApp; // @synthesize isCurrentApp=_isCurrentApp;
@property(readonly, nonatomic) _Bool isHost; // @synthesize isHost=_isHost;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long key; // @synthesize key=_key;
- (id)description;
- (_Bool)processRunningOnForeground:(int)arg1;
- (void)dealloc;
- (id)init:(const struct InterAppAudioAppInfo *)arg1 iconSize:(float)arg2;

@end

