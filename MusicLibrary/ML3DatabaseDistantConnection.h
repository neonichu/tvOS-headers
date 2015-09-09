//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3DatabaseConnection.h>

@class MLMediaLibraryService, NSUUID;
@protocol ML3DatabaseDistantConnectionDelegate;

@interface ML3DatabaseDistantConnection : ML3DatabaseConnection
{
    MLMediaLibraryService *_mediaLibraryService;
    NSUUID *_currentTransactionID;
    _Bool _connectionOpen;
    id <ML3DatabaseDistantConnectionDelegate> _distantDelegate;
}

@property(nonatomic) __weak id <ML3DatabaseDistantConnectionDelegate> distantDelegate; // @synthesize distantDelegate=_distantDelegate;
- (void).cxx_destruct;
- (void)_serviceTerminatedTransactionNotification:(id)arg1;
- (_Bool)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (_Bool)_internalEndTransactionAndCommit:(_Bool)arg1;
- (_Bool)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1 isRetry:(_Bool)arg2;
- (_Bool)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1;
- (int)checkpointDatabase;
- (id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(_Bool)arg4;
- (_Bool)registerModule:(id)arg1;
- (_Bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4;
- (_Bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)close;
- (_Bool)_openWithFlags:(int)arg1;
- (id)currentTransactionID;
- (void)setProfilingLevel:(int)arg1;
- (void)setReadOnly:(_Bool)arg1;
- (_Bool)isReadOnly;
- (_Bool)isOpen;
- (_Bool)shouldCacheStatements;
- (struct sqlite3 *)_sqliteHandle;
- (void)dealloc;
- (id)initWithDatabasePath:(id)arg1;

@end
