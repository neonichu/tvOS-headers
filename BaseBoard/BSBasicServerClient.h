//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSXPCServerClient-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

@interface BSBasicServerClient : NSObject <BSXPCServerClient>
{
    NSObject<OS_xpc_object> *_connection;
    int _resumed;
    int _cancelled;
    _Bool _managingResumeState;
}

+ (id)wrapperWithConnection:(id)arg1;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void)sendMessageWithPacker:(CDUnknownBlockType)arg1 replyHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)sendMessageWithPacker:(CDUnknownBlockType)arg1;
- (void)sendMessage:(id)arg1;
- (void)invalidate;
- (void)suspend;
- (void)resume;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

