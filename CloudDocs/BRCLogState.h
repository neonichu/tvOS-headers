//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCLogState : NSObject
{
    struct __asl_object_s *_asl_store;
    struct __asl_object_s *_asl_client;
    NSURL *_directory;
    NSString *_basename;
    int _fd;
    NSObject<OS_dispatch_source> *_fdDeletionWatcher;
}

+ (id)defaultLogState;
@property(retain, nonatomic) NSString *basename; // @synthesize basename=_basename;
@property(retain, nonatomic) NSURL *directory; // @synthesize directory=_directory;
- (const char *)currentSectionID;
- (int)indentationLevel;
- (void)logMsg:(int)arg1 facility:(const char *)arg2 func:(const char *)arg3 src:(const char *)arg4 lno:(int)arg5 msg:(const char *)arg6 aslmsg:(struct __asl_object_s *)arg7;
- (void)setPath:(const char *)arg1 base:(const char *)arg2;
- (void)setLevel:(int)arg1;
- (void)openASLStoreIfNeeded;
- (void)closeLog;
- (id)init;

@end

