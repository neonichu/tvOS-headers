//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSSceneSettings.h>

@class NSArray;

@interface FBSMutableSceneSettings : FBSSceneSettings
{
}

+ (_Bool)_isMutable;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSArray *occlusions; // @dynamic occlusions;
- (id)transientLocalSettings;
- (id)ignoreOcclusionReasons;
- (id)otherSettings;
@property(nonatomic, getter=isBackgrounded) _Bool backgrounded; // @dynamic backgrounded;
@property(nonatomic) long long interfaceOrientation; // @dynamic interfaceOrientation;
@property(nonatomic) double level; // @dynamic level;
@property(nonatomic) struct CGRect frame; // @dynamic frame;

@end

