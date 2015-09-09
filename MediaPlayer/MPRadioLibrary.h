//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPRadioController, NSArray;

@interface MPRadioLibrary : NSObject
{
    MPRadioController *_radioController;
}

+ (id)defaultRadioLibrary;
- (void).cxx_destruct;
- (id)_radioModel;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_radioRecentStationsDidChangeNotification:(id)arg1;
- (void)_radioAvailabilityDidChangeNotification:(id)arg1;
- (void)addStationBasedOnTrackIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)stationWithIdentifier:(long long)arg1;
@property(readonly, nonatomic) NSArray *stations;
@property(readonly, nonatomic) unsigned long long stationCount;
@property(readonly, nonatomic) _Bool isEnabled;
- (void)getRecentStationGroupsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

