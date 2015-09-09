//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSFormatter, NSMutableArray, NSString, TSKBundleLoader, UIImage;
@protocol TSKSettingItemUpdateDelegate;

@interface TSKSettingItem : NSObject
{
    NSMutableArray *_konamiCodes;
    _Bool _shouldPresentChildController;
    _Bool _canFocus;
    _Bool _enabled;
    _Bool _editable;
    _Bool _hidden;
    _Bool _sortsByTitle;
    _Bool _readOnly;
    _Bool _enabledInStoreDemoMode;
    _Bool _removeAfterDeletion;
    _Bool _dirty;
    id _representedObject;
    NSString *_keyPath;
    id _defaultValue;
    NSString *_localizedTitle;
    NSString *_localizedValue;
    NSArray *_availableValues;
    NSFormatter *_localizedValueFormatter;
    NSString *_localizedDescription;
    CDUnknownBlockType _updateBlock;
    SEL _action;
    SEL _playButtonAction;
    id _target;
    Class _childControllerClass;
    CDUnknownBlockType _childControllerBlock;
    unsigned long long _accessoryTypes;
    TSKBundleLoader *_bundleLoader;
    NSString *_deepLinkKey;
    NSFormatter *_detailedLocalizedValueFormatter;
    NSString *_detailedLocalizedTitle;
    NSAttributedString *_attributedLocalizedDescription;
    UIImage *_previewImage;
    NSString *_identifier;
    id <TSKSettingItemUpdateDelegate> _updateDelegate;
    SEL _longPressAction;
    SEL _rightButtonAction;
}

+ (id)multiValueItemWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4 availableValues:(id)arg5;
+ (id)toggleItemWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4 onTitle:(id)arg5 offTitle:(id)arg6;
+ (id)textInputItemWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4;
+ (id)titleItemWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4;
+ (id)childPaneItemWithBundle:(id)arg1;
+ (id)childPaneItemWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4 childControllerBlock:(CDUnknownBlockType)arg5;
+ (id)childPaneItemWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4 childControllerClass:(Class)arg5;
+ (id)actionItemWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4 target:(id)arg5 action:(SEL)arg6;
+ (void)setValue:(id)arg1 forSettingItem:(id)arg2;
+ (id)valueForSettingItem:(id)arg1;
@property(nonatomic) SEL rightButtonAction; // @synthesize rightButtonAction=_rightButtonAction;
@property(nonatomic) SEL longPressAction; // @synthesize longPressAction=_longPressAction;
@property(nonatomic) __weak id <TSKSettingItemUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic, getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool removeAfterDeletion; // @synthesize removeAfterDeletion=_removeAfterDeletion;
@property(nonatomic, getter=isEnabledInStoreDemoMode) _Bool enabledInStoreDemoMode; // @synthesize enabledInStoreDemoMode=_enabledInStoreDemoMode;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(copy, nonatomic) NSAttributedString *attributedLocalizedDescription; // @synthesize attributedLocalizedDescription=_attributedLocalizedDescription;
@property(copy, nonatomic) NSString *detailedLocalizedTitle; // @synthesize detailedLocalizedTitle=_detailedLocalizedTitle;
@property(retain, nonatomic) NSFormatter *detailedLocalizedValueFormatter; // @synthesize detailedLocalizedValueFormatter=_detailedLocalizedValueFormatter;
@property(copy, nonatomic) NSString *deepLinkKey; // @synthesize deepLinkKey=_deepLinkKey;
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(retain, nonatomic) TSKBundleLoader *bundleLoader; // @synthesize bundleLoader=_bundleLoader;
@property(nonatomic) _Bool sortsByTitle; // @synthesize sortsByTitle=_sortsByTitle;
@property(nonatomic) unsigned long long accessoryTypes; // @synthesize accessoryTypes=_accessoryTypes;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool canFocus; // @synthesize canFocus=_canFocus;
@property(nonatomic) _Bool shouldPresentChildController; // @synthesize shouldPresentChildController=_shouldPresentChildController;
@property(copy, nonatomic) CDUnknownBlockType childControllerBlock; // @synthesize childControllerBlock=_childControllerBlock;
@property(retain, nonatomic) Class childControllerClass; // @synthesize childControllerClass=_childControllerClass;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL playButtonAction; // @synthesize playButtonAction=_playButtonAction;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(retain, nonatomic) NSFormatter *localizedValueFormatter; // @synthesize localizedValueFormatter=_localizedValueFormatter;
@property(copy, nonatomic) NSArray *availableValues; // @synthesize availableValues=_availableValues;
@property(copy, nonatomic) NSString *localizedValue; // @synthesize localizedValue=_localizedValue;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (id)_metadata;
- (void)_cloneStateToItem:(id)arg1;
- (void)_performUpdateTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)addKonamiCode:(id)arg1;
@property(readonly, nonatomic) NSArray *konamiCodes;
- (id)description;
- (id)init;
- (id)initWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4 readOnly:(_Bool)arg5 accessoryTypes:(unsigned long long)arg6 childControllerClass:(Class)arg7;

@end

