//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BSMIGServer : NSObject
{
    NSString *_portName;
    unsigned int _port;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_thread;
    struct mig_subsystem *_subsystem;
    struct __CFRunLoopObserver *_entryObserver;
    struct __CFRunLoopObserver *_exitObserver;
}

- (void)_installAutoreleasePoolsIfNecessaryForMode:(struct __CFString *)arg1;
- (unsigned int)_createPortNamed:(id)arg1;
- (void *)_start;
- (void)setThreadName:(id)arg1;
@property(readonly, nonatomic) NSString *threadName;
@property(nonatomic) int threadPriority;
- (unsigned int)port;
- (void)dealloc;
- (id)init;
- (id)initWithPortName:(id)arg1 subsystem:(struct mig_subsystem *)arg2 separateThread:(_Bool)arg3;

@end

