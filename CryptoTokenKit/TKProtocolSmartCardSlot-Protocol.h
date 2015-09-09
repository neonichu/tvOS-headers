//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CryptoTokenKit/TKProtocolSlot-Protocol.h>

@class NSData, NSDictionary, NSNumber, TKSmartCardUserInteraction;
@protocol NSSecureCoding;

@protocol TKProtocolSmartCardSlot <TKProtocolSlot>
- (void)runUserInteraction:(TKSmartCardUserInteraction<NSSecureCoding> *)arg1 reply:(void (^)(NSData *, NSError *))arg2;
- (void)setAttrib:(unsigned int)arg1 data:(NSData *)arg2 reply:(void (^)(_Bool, _Bool))arg3;
- (void)getAttrib:(unsigned int)arg1 expectedLength:(unsigned int)arg2 reply:(void (^)(NSData *, _Bool))arg3;
- (void)sendControl:(id)arg1 data:(NSData *)arg2 expectedLength:(unsigned int)arg3 reply:(void (^)(NSData *))arg4;
- (void)sessionWithParameters:(NSDictionary *)arg1 reply:(void (^)(id <TKProtocolSmartCardSession>, NSDictionary *, NSError *))arg2;
- (void)reserveProtocols:(NSNumber *)arg1 currentlyReserved:(NSNumber *)arg2 reply:(void (^)(NSNumber *))arg3;
@end

