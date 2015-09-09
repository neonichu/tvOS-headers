//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptButtonNativeObject.h>

@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject
{
    _Bool _isBackButton;
}

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;
- (id)systemItemString;
- (id)styleString;
- (void)showConfirmationWithTitle:(id)arg1 animated:(_Bool)arg2;
- (void)setupNativeObject;
- (void)setStyleFromString:(id)arg1;
- (void)setLoading:(_Bool)arg1;
- (_Bool)isShowingConfirmation;
- (_Bool)isLoading;
- (_Bool)isBackButton;
- (void)hideConfirmationAnimated:(_Bool)arg1;
- (void)disconnectButtonAction;
- (void)destroyNativeObject;
- (void)connectButtonAction;
- (int)buttonType;
- (id)title;
- (long long)tag;
- (void)setTitle:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)setImageInsets:(struct UIEdgeInsets)arg1;
- (void)setImage:(id)arg1;
- (struct UIEdgeInsets)imageInsets;
- (id)image;

@end

