//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVSettingKit/TSKSettingGroup.h>

@class NSArray;

@interface TSKRadioSettingGroup : TSKSettingGroup
{
    NSArray *_cachedAvailableValues;
    CDUnknownBlockType _itemUpdateBlock;
}

+ (id)radioGroupWithTitle:(id)arg1 representedObject:(id)arg2 keyPath:(id)arg3 availableValues:(id)arg4;
@property(copy, nonatomic) CDUnknownBlockType itemUpdateBlock; // @synthesize itemUpdateBlock=_itemUpdateBlock;
- (void).cxx_destruct;
- (void)_updateCheckmarkForItem:(id)arg1 value:(id)arg2;
- (id)_itemsFromInputValues:(id)arg1 currentValue:(id)arg2;
- (void)_itemSelected:(id)arg1;
- (void)_updateSettingItemsWithValue:(id)arg1;
- (void)_prepareSettingItems;
- (id)settingItemForValue:(id)arg1;
- (id)initWithTitle:(id)arg1 representedObject:(id)arg2 keyPath:(id)arg3 availableValues:(id)arg4;

@end

