//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData;
@protocol LAContextCallbackXPC, LAUIDelegate;

@protocol LAContextManager
- (void)prearmTouchIdWithReply:(void (^)(id <LAPrearmContextXPC>, NSError *))arg1;
- (void)connectToContext:(NSData *)arg1 uiDelegate:(id <LAUIDelegate>)arg2 callback:(id <LAContextCallbackXPC>)arg3 reply:(void (^)(id <LAContextXPC>, NSDictionary *, NSError *))arg4;
@end

