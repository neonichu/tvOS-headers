//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class NSString;

@interface FBSWorkspaceCreateSceneRequestResponseEvent : FBSWorkspaceEvent
{
    NSString *_sceneID;
}

@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)dealloc;

@end

