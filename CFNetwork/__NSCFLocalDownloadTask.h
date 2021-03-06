//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/__NSCFLocalSessionTask.h>

#import <CFNetwork/NSURLSessionDownloadTaskSubclass-Protocol.h>
#import <CFNetwork/__NSCFLocalDownloadFileOpener-Protocol.h>

@class NSDictionary, NSObject, NSString, __NSCFLocalDownloadFile;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener>
{
    CDUnknownBlockType _fileCompletion;
    __NSCFLocalDownloadFile *_downloadFile;
    _Bool _canWrite;
    _Bool _suppressProgress;
    NSObject<OS_dispatch_data> *_writeBuffer;
    unsigned long long _ioSuspend;
    int _seqNo;
    _Bool _needFinish;
    _Bool _didIssueNeedFinish;
    unsigned long long _totalWrote;
    CDUnknownBlockType _resumeCallback;
    long long _initialResumeSize;
    NSDictionary *_originalResumeInfo;
    unsigned long long _transientWriteProgress;
    CDUnknownBlockType _afterDidReportProgressOnQueue;
    CDUnknownBlockType _dataAckCompletion;
}

@property(copy) CDUnknownBlockType dataAckCompletion; // @synthesize dataAckCompletion=_dataAckCompletion;
@property(copy) CDUnknownBlockType _afterDidReportProgressOnQueue; // @synthesize _afterDidReportProgressOnQueue;
@property(copy) CDUnknownBlockType resumeCallback; // @synthesize resumeCallback=_resumeCallback;
@property(retain) __NSCFLocalDownloadFile *downloadFile; // @synthesize downloadFile=_downloadFile;
@property(copy) CDUnknownBlockType fileCompletion; // @synthesize fileCompletion=_fileCompletion;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkWrite;
- (void)_private_fileCompletion;
- (void)_private_errorCompletion;
- (id)createResumeInformation:(id)arg1;
- (void)writeAndResume;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_private_posixError:(int)arg1;
- (void)reportProgress:(unsigned long long)arg1;
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_completeInitialization;
- (int)openItemForPath:(id)arg1 mode:(int)arg2;
- (void)dealloc;
- (id)initWithTask:(id)arg1;
- (id)initWithSession:(id)arg1 resumeData:(id)arg2 ident:(unsigned long long)arg3;
- (id)initWithSession:(id)arg1 request:(id)arg2 filePath:(id)arg3 ident:(unsigned long long)arg4;
- (id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned long long)arg3;
- (_Bool)setupForNewDownload:(id)arg1;
- (id)explicitDownloadDirectory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

