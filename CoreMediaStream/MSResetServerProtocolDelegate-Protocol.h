//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMediaStream/MSStreamsProtocolDelegate-Protocol.h>

@class MSResetServerProtocol, NSError;

@protocol MSResetServerProtocolDelegate <MSStreamsProtocolDelegate>
- (void)resetServerProtocol:(MSResetServerProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;
- (void)resetServerProtocol:(MSResetServerProtocol *)arg1 didFinishWithError:(NSError *)arg2;
@end

