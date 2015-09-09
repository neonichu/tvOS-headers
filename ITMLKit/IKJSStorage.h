//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSStorage-Protocol.h>

@class NSMutableDictionary, NSObject;
@protocol IKAppDataStoring, OS_dispatch_queue;

@interface IKJSStorage : IKJSObject <IKJSStorage>
{
    unsigned int _usesExternalDataStore:1;
    id <IKAppDataStoring> _appStorage;
    NSMutableDictionary *_storageDict;
    NSObject<OS_dispatch_queue> *_storageQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue; // @synthesize storageQueue=_storageQueue;
@property(retain, nonatomic) NSMutableDictionary *storageDict; // @synthesize storageDict=_storageDict;
@property(nonatomic) __weak id <IKAppDataStoring> appStorage; // @synthesize appStorage=_appStorage;
- (void).cxx_destruct;
- (void)_verifyExternalDataStoreForKey:(id)arg1;
- (void)clear;
- (void)removeItem:(id)arg1;
- (void)setItem:(id)arg1:(id)arg2;
- (id)getItem:(id)arg1;
- (id)key:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long length;
- (id)initWithAppContext:(id)arg1 appStorage:(id)arg2;

@end

