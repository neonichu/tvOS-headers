//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSWorkspaceSceneUpdateResponse;

@interface FBSWorkspaceSceneUpdateResponseEvent : FBSWorkspaceSceneEvent
{
    FBSWorkspaceSceneUpdateResponse *_response;
}

@property(retain, nonatomic) FBSWorkspaceSceneUpdateResponse *response; // @synthesize response=_response;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)dealloc;

@end

