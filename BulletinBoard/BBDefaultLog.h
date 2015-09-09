//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSFileLogger.h>

@class NSMutableSet;

@interface BBDefaultLog : BSFileLogger
{
    NSMutableSet *_knownCategories;
}

- (unsigned long long)logDestinations;
- (_Bool)_shouldEnableCategory:(id)arg1;
- (void)reloadFromDefaults;
- (id)logPath;
- (id)logPreferenceDomain;
- (id)logPreferenceName;
- (void)_setLevel:(int)arg1;
- (void)_setEnabled:(_Bool)arg1;
- (id)name;
- (int)level;
- (void)dealloc;
- (id)init;

@end

