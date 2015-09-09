//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_io, OS_dispatch_queue, __NSCFLocalDownloadFileOpener;

__attribute__((visibility("hidden")))
@interface __NSCFLocalDownloadFile : NSObject
{
    struct stat _stat;
    NSObject<OS_dispatch_io> *_writeIO;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _finished;
    NSString *_path;
    _Bool _skipUnlink;
    _Bool _truncateFile;
    int _error;
    id <__NSCFLocalDownloadFileOpener> _fileProvider;
    CDUnknownBlockType _finishCompletion;
}

@property _Bool truncateFile; // @synthesize truncateFile=_truncateFile;
@property(copy) CDUnknownBlockType finishCompletion; // @synthesize finishCompletion=_finishCompletion;
@property id <__NSCFLocalDownloadFileOpener> fileProvider; // @synthesize fileProvider=_fileProvider;
@property int error; // @synthesize error=_error;
@property _Bool skipUnlink; // @synthesize skipUnlink=_skipUnlink;
@property(retain) NSString *path; // @synthesize path=_path;
- (void)captureFile:(id *)arg1 outStat:(struct stat *)arg2;
- (id)fileURL;
- (void)finishOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)writeBytes:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)truncate;
- (void)dealloc;
- (id)ioChannel;
- (id)initWithExistingUnopenableFile:(id)arg1 fileProvider:(id)arg2;
- (id)initWithExistingFile:(id)arg1 expectedSize:(long long)arg2;
- (id)initTempFileWithDirectory:(id)arg1;
- (id)initQueues;

@end

