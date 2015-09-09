//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_source, SFAirDropBrowserDelegate;

__attribute__((visibility("hidden")))
@interface SFAirDropBrowser : NSObject
{
    _Bool _didDelay;
    struct __SFBrowser *_browser;
    NSObject<OS_dispatch_source> *_timer;
    double _startTime;
    NSMutableDictionary *_nodes;
    NSArray *_people;
    id <SFAirDropBrowserDelegate> _delegate;
}

@property __weak id <SFAirDropBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *people; // @synthesize people=_people;
- (void).cxx_destruct;
- (void)updateDiscoveredPeople;
- (void)handleBrowserCallBack;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

