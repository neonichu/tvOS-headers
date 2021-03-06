//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardServices/FBSDisplayLayoutMonitorClientDelegate-Protocol.h>

@class FBSDisplayLayout, FBSDisplayLayoutMonitorClient, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface FBSDisplayLayoutMonitor : NSObject <FBSDisplayLayoutMonitorClientDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    unsigned long long _displayType;
    _Bool _queue_invalidated;
    NSHashTable *_queue_observers;
    FBSDisplayLayout *_queue_currentLayout;
    CDUnknownBlockType _queue_handler;
    FBSDisplayLayoutMonitorClient *_queue_client;
    _Bool _sharedInstance;
}

+ (id)sharedMonitorForDisplayType:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
- (void)client:(id)arg1 handleNewDisplayLayout:(id)arg2 withContext:(id)arg3;
- (unsigned long long)clientDisplayType:(id)arg1;
- (void)_calloutQueue_postLayout:(id)arg1 withContext:(id)arg2 toObserver:(id)arg3;
- (void)_queue_updateLayout:(id)arg1 withContext:(id)arg2;
- (void)_queue_updateClient;
- (id)_observers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, retain, nonatomic) FBSDisplayLayout *currentLayout;
@property(copy, nonatomic) CDUnknownBlockType handler;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDisplayType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithDisplayType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

