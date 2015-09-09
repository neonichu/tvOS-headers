//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDAgentDelegate;
@protocol NSXPCProxyCreating;

@interface MDAgent : NSObject
{
    MDAgentDelegate *_delegate;
    id <NSXPCProxyCreating> _clientLink;
}

+ (id)clientBundleIDForConnection:(id)arg1;
+ (id)clientXPCInterface;
+ (id)xpcInterface;
+ (id)machServiceName;
@property(retain) id <NSXPCProxyCreating> clientLink; // @synthesize clientLink=_clientLink;
@property __weak MDAgentDelegate *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_clientForBundleID:(id)arg1;
- (id)initWithClientConnection:(id)arg1 clientLink:(id)arg2 indexer:(id)arg3;

@end

