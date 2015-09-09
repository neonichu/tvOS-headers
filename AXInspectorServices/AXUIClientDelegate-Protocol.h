//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXInspectorServices/NSObject-Protocol.h>

@class AXAccessQueue, AXUIClient, NSDictionary, NSMutableDictionary;

@protocol AXUIClientDelegate <NSObject>

@optional
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(AXUIClient *)arg1;
- (void)userInterfaceClient:(AXUIClient *)arg1 willActivateUserInterfaceServiceWithInitializationMessage:(NSMutableDictionary *)arg2;
- (_Bool)userInterfaceClient:(AXUIClient *)arg1 messageWithIdentifierRequiresWritingBlock:(unsigned long long)arg2;
- (AXAccessQueue *)userInterfaceClient:(AXUIClient *)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2;
- (void)userInterfaceClient:(AXUIClient *)arg1 processMessageFromServerAsynchronously:(NSDictionary *)arg2 withIdentifier:(unsigned long long)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (_Bool)userInterfaceClient:(AXUIClient *)arg1 messageFromServerForWithIdentifierShouldBeProcessedAsynchronously:(unsigned long long)arg2;
- (NSDictionary *)userInterfaceClient:(AXUIClient *)arg1 processMessageFromServer:(NSDictionary *)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;
@end

