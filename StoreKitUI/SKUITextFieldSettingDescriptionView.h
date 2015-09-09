//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIFieldSettingDescriptionView.h>

#import <StoreKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, SKUIFieldSettingDescription, SKUIInputViewElement, UILabel, UITextField;

@interface SKUITextFieldSettingDescriptionView : SKUIFieldSettingDescriptionView <UITextFieldDelegate>
{
    double _aggregateLabelWidth;
    SKUIInputViewElement *_inputViewElement;
    UILabel *_label;
    SKUIFieldSettingDescription *_settingDescription;
    UITextField *_textField;
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)_fillLayoutWithView:(id)arg1 labelForBaselinePosition:(id)arg2;
- (void)_updateTextFieldValue:(id)arg1;
- (id)_currentControllerValue;
- (void)_arrangeTextField:(id)arg1 andLabel:(id)arg2;
- (void)_alignView:(id)arg1 withBaselineLabel:(id)arg2 font:(id)arg3 offsetX:(double)arg4 fitWidth:(double)arg5;
- (void)_addTextInputWithElement:(id)arg1;
- (void)_addLabelWithElement:(id)arg1;
- (void)_addInputWithElement:(id)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setEnabled:(_Bool)arg1;
- (void)commitEdits;
- (void)beginEdits;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

