//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEExtensionTunnelProviderHostContext.h>

#import <NetworkExtension/NEExtensionPacketTunnelProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEExtensionPacketTunnelProviderProtocol-Protocol.h>

@class NSString;

@interface NEExtensionPacketTunnelProviderHostContext : NEExtensionTunnelProviderHostContext <NEExtensionPacketTunnelProviderProtocol, NEExtensionPacketTunnelProviderHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)requestSocket:(_Bool)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchVirtualInterfaceTypeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setVirtualInterfaceSocket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

