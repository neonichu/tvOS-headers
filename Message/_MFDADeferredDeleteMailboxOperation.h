//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFOfflineCacheOperation.h>

#import <Message/MFDADeferredFolderChangeOperation-Protocol.h>

@class NSString;

@interface _MFDADeferredDeleteMailboxOperation : MFOfflineCacheOperation <MFDADeferredFolderChangeOperation>
{
    NSString *_folderID;
}

- (id)description;
- (id)folderChangeResult;
- (void)applyToFolderMap:(id)arg1;
- (_Bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFolderID:(id)arg1;

@end

