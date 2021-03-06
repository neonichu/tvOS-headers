//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVSettingKit/TSKSettingGroup.h>

@class NSArray;

@interface TSKListSettingGroup : TSKSettingGroup
{
    CDUnknownBlockType _itemConfigurationBlock;
    NSArray *_cachedValue;
}

+ (id)listGroupWithTitle:(id)arg1 representedObject:(id)arg2 keyPath:(id)arg3 configurationBlock:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) NSArray *cachedValue; // @synthesize cachedValue=_cachedValue;
@property(copy, nonatomic) CDUnknownBlockType itemConfigurationBlock; // @synthesize itemConfigurationBlock=_itemConfigurationBlock;
- (void).cxx_destruct;
- (id)_itemsFromInputValues:(id)arg1;
- (void)_updateSettingItemsWithValue:(id)arg1;
- (void)_prepareSettingItems;
- (id)initWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4 readOnly:(_Bool)arg5 accessoryTypes:(unsigned long long)arg6 childControllerClass:(Class)arg7;

@end

