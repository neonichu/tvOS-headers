//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKDContainerInfo, NSObject;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDContainerSpecificInfoOperation : CKDOperation
{
    _Bool _needUserID;
    CKDContainerInfo *_containerInfo;
    NSObject<OS_dispatch_group> *_infoFetchedGroup;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_group> *infoFetchedGroup; // @synthesize infoFetchedGroup=_infoFetchedGroup;
@property(copy, nonatomic) CKDContainerInfo *containerInfo; // @synthesize containerInfo=_containerInfo;
@property(nonatomic) _Bool needUserID; // @synthesize needUserID=_needUserID;
- (void).cxx_destruct;
- (void)main;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)shouldCheckAppVersion;
- (unsigned long long)activityStart;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

