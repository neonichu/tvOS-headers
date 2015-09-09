//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileHandle.h>

@class NSObject;
@protocol OS_dispatch_data, OS_dispatch_io, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSConcreteFileHandle : NSFileHandle
{
    int _fd;
    unsigned short _flags;
    struct __CFRunLoopSource *_source;
    struct __CFRunLoop *_rl;
    unsigned short _activity;
    int _error;
    int _resultSocket;
    NSObject<OS_dispatch_source> *_dsrc;
    NSObject<OS_dispatch_data> *_resultData;
    NSObject<OS_dispatch_queue> *_fhQueue;
    NSObject<OS_dispatch_io> *_readChannel;
    CDUnknownBlockType _readabilityHandler;
    CDUnknownBlockType _writeabilityHandler;
    NSObject<OS_dispatch_source> *_readMonitoringSource;
    NSObject<OS_dispatch_source> *_writeMonitoringSource;
    NSObject<OS_dispatch_queue> *_monitoringQueue;
}

- (void)_closeOnDealloc;
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)writeabilityHandler;
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)readabilityHandler;
- (void)_locked_clearHandler:(CDUnknownBlockType *)arg1 forSource:(id *)arg2;
- (id)_monitor:(int)arg1;
- (void)waitForDataInBackgroundAndNotify;
- (void)waitForDataInBackgroundAndNotifyForModes:(id)arg1;
- (void)acceptConnectionInBackgroundAndNotify;
- (void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1;
- (void)readToEndOfFileInBackgroundAndNotify;
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1;
- (void)readInBackgroundAndNotify;
- (void)readInBackgroundAndNotifyForModes:(id)arg1;
- (void)performActivity:(long long)arg1 modes:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_commonDealloc;
- (void)setPort:(id)arg1;
- (id)port;
- (void)closeFile;
- (void)_cancelDispatchSources;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (unsigned long long)seekToEndOfFile;
- (unsigned long long)offsetInFile;
- (void)writeData:(id)arg1;
- (id)readDataToEndOfFile;
- (id)readDataOfLength:(unsigned long long)arg1;
- (unsigned long long)readDataOfLength:(unsigned long long)arg1 buffer:(char *)arg2;
- (id)availableData;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(_Bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (int)fileDescriptor;

@end

