//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/NSObject-Protocol.h>

@protocol EKCancellableRemoteOperation <NSObject>
- (void)disconnect;
- (void)cancel;

@optional
- (void)receivedBatchResultsFromServer:(id)arg1 finished:(_Bool)arg2;
@end

