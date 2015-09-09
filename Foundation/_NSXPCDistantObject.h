//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>
#import <Foundation/NSXPCProxyCreating-Protocol.h>

@class NSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCDistantObject : NSObject <NSXPCProxyCreating, NSSecureCoding>
{
    NSXPCConnection *_connection;
    NSXPCInterface *_remoteInterface;
    struct __CFDictionary *_knownSelectors;
    int _selectorLock;
    unsigned long long _proxyNumber;
    unsigned long long _generationCount;
    _Bool _exported;
    _Bool _noImportance;
}

+ (_Bool)supportsSecureCoding;
@property _Bool _noImportance; // @synthesize _noImportance;
@property _Bool _exported; // @synthesize _exported;
@property(retain) NSXPCInterface *_remoteInterface; // @synthesize _remoteInterface;
@property(retain) NSXPCConnection *_connection; // @synthesize _connection;
@property unsigned long long _generationCount; // @synthesize _generationCount;
@property unsigned long long _proxyNumber; // @synthesize _proxyNumber;
@property(readonly) _Bool _sync;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_unboostingRemoteObjectProxy;
- (id)remoteObjectProxy;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)_initWithConnection:(id)arg1 exportedObject:(id)arg2 interface:(id)arg3;
- (id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4;
- (id)init;

@end

