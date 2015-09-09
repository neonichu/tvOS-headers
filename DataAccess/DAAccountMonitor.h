//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface DAAccountMonitor : NSObject
{
    NSHashTable *_accounts;
    NSObject<OS_dispatch_queue> *_accountsQueue;
}

+ (id)sharedMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accountsQueue; // @synthesize accountsQueue=_accountsQueue;
@property(retain, nonatomic) NSHashTable *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (id)monitoredAccounts;
- (void)unmonitorAccount:(id)arg1;
- (void)monitorAccount:(id)arg1;
- (id)init;

@end

