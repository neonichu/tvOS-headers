//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSDictionary;

@protocol DTTapAuthorizedAPI <DTXAllowedRPC>
- (void)fetchDataNow;
- (void)setConfig:(NSDictionary *)arg1;
- (void)unpause;
- (void)pause;
- (void)stop;
- (void)start;
@end

