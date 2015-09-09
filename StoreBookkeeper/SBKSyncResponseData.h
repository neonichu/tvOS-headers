//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, SBKSyncTransaction;

__attribute__((visibility("hidden")))
@interface SBKSyncResponseData : NSObject
{
    SBKSyncTransaction *_transaction;
    NSString *_syncAnchor;
    NSArray *_updatedKeys;
    NSArray *_conflictedKeys;
    NSArray *_deletedKeys;
    NSArray *_successfullyUpdatedKeys;
    NSArray *_successfullyDeletedKeys;
    NSMutableDictionary *_responseOpEntiesByKey;
}

+ (id)deserializedResponseBodyWithTransaction:(id)arg1 responseDictionary:(id)arg2 response:(id)arg3;
@property(retain) NSMutableDictionary *responseOpEntiesByKey; // @synthesize responseOpEntiesByKey=_responseOpEntiesByKey;
@property(readonly) NSArray *successfullyDeletedKeys; // @synthesize successfullyDeletedKeys=_successfullyDeletedKeys;
@property(readonly) NSArray *successfullyUpdatedKeys; // @synthesize successfullyUpdatedKeys=_successfullyUpdatedKeys;
@property(readonly) NSArray *deletedKeys; // @synthesize deletedKeys=_deletedKeys;
@property(readonly) NSArray *conflictedKeys; // @synthesize conflictedKeys=_conflictedKeys;
@property(readonly) NSArray *updatedKeys; // @synthesize updatedKeys=_updatedKeys;
@property(readonly, copy) NSString *syncAnchor; // @synthesize syncAnchor=_syncAnchor;
@property(readonly) SBKSyncTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (void)_deserializeResponseDictionary:(id)arg1 response:(id)arg2;
- (id)payloadDataForUpdateResponseKey:(id)arg1;
- (id)description;
- (id)initWithTransaction:(id)arg1 responseDictionary:(id)arg2 response:(id)arg3;

@end

