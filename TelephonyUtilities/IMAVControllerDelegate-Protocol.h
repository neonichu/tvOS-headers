//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class IMAVChat, IMHandle;

@protocol IMAVControllerDelegate <NSObject>

@optional
- (void)inviteFailedFromIMHandle:(IMHandle *)arg1 reason:(long long)arg2;
- (void)filteredIncomingIMAVChat:(IMAVChat *)arg1;
- (void)createdOutgoingIMAVChat:(IMAVChat *)arg1;
- (void)invitedToIMAVChat:(IMAVChat *)arg1;
@end

