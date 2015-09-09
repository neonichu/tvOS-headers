//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject
{
    BSMutableSettings *_observerInfo;
    BSMutableSettings *_otherSettingsObserverInfo;
    _Bool _iteratingObservers;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (void)_addObserver:(id)arg1 forSetting:(unsigned long long)arg2 inInfo:(id)arg3;
- (void)_observeSetting:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)observeOtherSetting:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeAllObservers;
- (void)inspectDiff:(id)arg1 withContext:(void *)arg2;
- (void)dealloc;
- (id)init;

@end

