//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDClientContext, NSDate, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDQueuedFetch : NSObject
{
    _Bool _isFinished;
    _Bool _allowsCellularAccess;
    CDUnknownBlockType _completionHandler;
    NSMutableDictionary *_completionHandlersByItemID;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_deviceIdentifier;
    NSDate *_startDate;
    NSDate *_lastRequestDate;
    CKDClientContext *_context;
    NSOperationQueue *_operationQueue;
    long long _scope;
    long long _usesBackgroundSession;
    long long _qos;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) long long qos; // @synthesize qos=_qos;
@property(nonatomic) long long usesBackgroundSession; // @synthesize usesBackgroundSession=_usesBackgroundSession;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) long long scope; // @synthesize scope=_scope;
@property(nonatomic) __weak NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(retain, nonatomic) NSMutableDictionary *completionHandlersByItemID; // @synthesize completionHandlersByItemID=_completionHandlersByItemID;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
- (void)start;
- (id)operationInfo;
- (id)fetchOperationForItemIDs:(id)arg1;
- (Class)operationInfoClass;
@property(readonly, nonatomic) _Bool shouldStart;
- (_Bool)canBeUsedForOperation:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (void)finishFetchOperationWithError:(id)arg1;
- (void)performCallbacksForItemWithID:(id)arg1 withItem:(id)arg2 error:(id)arg3;
- (id)allItemIDs;
- (id)callbacksForItemWithID:(id)arg1;
- (void)removeCallbacksForItemWithID:(id)arg1;
- (void)addCallbackForItemWithID:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (int)numberOfCallbacks;
- (id)initWithOperation:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;
- (id)init;

@end

