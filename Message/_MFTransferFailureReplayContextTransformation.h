//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFOfflineCacheReplayContextTransformation-Protocol.h>

@class MFOfflineTransferFailureSnapshot, NSString;

@interface _MFTransferFailureReplayContextTransformation : NSObject <MFOfflineCacheReplayContextTransformation>
{
    NSString *_temporaryID;
    MFOfflineTransferFailureSnapshot *_snapshot;
}

- (void)applyToReplayContext:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemporaryID:(id)arg1 transferFailureSnapshot:(id)arg2;

@end

