//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BRCancellable-Protocol.h>

@class NSArray, NSDictionary;

@protocol BRItemNotificationReceiving <BRCancellable>
- (void)receiveUpdates:(NSArray *)arg1 logicalExtensions:(NSDictionary *)arg2 physicalExtensions:(NSDictionary *)arg3 reply:(void (^)(void))arg4;
@end

