//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>

@class BSMutableSettings, NSHashTable, NSString;
@protocol BSSettingDescriptionProvider;

@interface BSSettingsDiff : NSObject <NSCopying, BSXPCCoding>
{
    id <BSSettingDescriptionProvider> _descriptionProvider;
    BSMutableSettings *_changes;
    NSHashTable *_flagRemovals;
    NSHashTable *_objectRemovals;
}

+ (id)_newHashTableWithInitialCapacity:(unsigned long long)arg1;
+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (unsigned long long)_diffTypesForSetting:(unsigned long long)arg1;
- (id)allSettings;
- (void)_enumerateSettingsInTable:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)inspectChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)applyToSettings:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithChanges:(id)arg1 flagRemovals:(id)arg2 objectRemovals:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

