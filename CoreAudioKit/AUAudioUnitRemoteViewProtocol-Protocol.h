//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreAudioKit/AUAudioUnitViewProtocol-Protocol.h>

@class NSUUID;

@protocol AUAudioUnitRemoteViewProtocol <AUAudioUnitViewProtocol>
- (void)connectToContextWithSessionID:(NSUUID *)arg1 withCompletion:(void (^)(void))arg2;
@end

