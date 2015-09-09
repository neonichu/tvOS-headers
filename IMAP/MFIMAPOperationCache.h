//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IMAPAccount, NSFileHandle, NSMutableArray;

@interface MFIMAPOperationCache : NSObject
{
    IMAPAccount *_account;
    NSFileHandle *_handle;
    NSMutableArray *_ops;
    unsigned int _lastUid;
    unsigned int _lastSave;
    unsigned int _lastUidValidity;
    _Bool _opsPending;
}

+ (void)setShouldFlattenCacheOperations:(_Bool)arg1;
- (id)deferredOperations;
- (void)performDeferredOperationsWithConnection:(id)arg1;
- (void)_performCopyOperation:(id)arg1 withContext:(CDStruct_f515d62c *)arg2;
- (void)_performAppendOperation:(id)arg1 withContext:(CDStruct_f515d62c *)arg2;
- (void)_performStoreOperation:(id)arg1 withContext:(CDStruct_f515d62c *)arg2;
- (void)_performDeleteOperation:(id)arg1 withContext:(CDStruct_f515d62c *)arg2;
- (void)_performCreateOperation:(id)arg1 withContext:(CDStruct_f515d62c *)arg2;
- (_Bool)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(CDStruct_1f207a6d *)arg3;
- (_Bool)hasOperationsForMailbox:(id)arg1;
- (_Bool)hasPendingOfflineOperations;
- (void)saveChanges;
- (void)expungeTemporaryUid:(unsigned int)arg1;
- (unsigned int)uidForAppendingMessageData:(id)arg1 withFlags:(id)arg2 andInternalDate:(id)arg3 toMailbox:(id)arg4;
- (unsigned int)firstUidForCopyingMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3;
- (void)setFlags:(id)arg1 andClearFlags:(id)arg2 forUids:(id)arg3 forMailbox:(id)arg4;
- (void)setFlags:(id)arg1 andClearFlags:(id)arg2 forMessages:(id)arg3;
- (void)deleteMailbox:(id)arg1;
- (void)createMailbox:(id)arg1;
- (void)_queueDeferredOperation:(id)arg1;
- (id)account;
- (void)dealloc;
- (id)initWithIMAPAccount:(id)arg1;

@end

