//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookUI/ABPasteboardControl.h>

@class ABClippingImageView, ABUIPerson, UIImage, UIImageView;
@protocol ABPersonImageDataDelegate, ABStyleProvider;

@interface ABPersonImageView : ABPasteboardControl
{
    UIImageView *_personImageView;
    UIImageView *_editingImageView;
    ABClippingImageView *_emptyImageView;
    ABClippingImageView *_pasteboardMaskImageView;
    UIImage *_personImage;
    _Bool _isEditing;
    _Bool _showLabel;
    _Bool _needsReflow;
    _Bool _needsReload;
    _Bool _allowsEditing;
    _Bool _multiplePhotoBackdropEnabled;
    ABUIPerson *_displayedPerson;
    id <ABStyleProvider> _styleProvider;
    id <ABPersonImageDataDelegate> _imageDataDelegate;
}

+ (id)newImageWithName:(id)arg1;
@property(nonatomic) id <ABPersonImageDataDelegate> imageDataDelegate; // @synthesize imageDataDelegate=_imageDataDelegate;
@property(nonatomic) _Bool multiplePhotoBackdropEnabled; // @synthesize multiplePhotoBackdropEnabled=_multiplePhotoBackdropEnabled;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) ABUIPerson *displayedPerson; // @synthesize displayedPerson=_displayedPerson;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)abMenuControllerWillHide;
- (void)abMenuControllerWillShow:(id)arg1;
- (_Bool)abShouldShowMenu;
- (id)_supportedPasteboardImageTypesIncludingCustomTypes:(_Bool)arg1;
- (id)_newDictionaryWithImageData;
- (void)setIsEditing:(_Bool)arg1 animate:(_Bool)arg2;
- (void)setNeedsReload;
- (void)setNeedsReflow;
- (void)reload;
- (id)copyDefaultImageForPerson:(id)arg1;
- (void)layoutSubviews;
- (void)reflowIfNeeded;
- (void)reloadIfNeeded;
- (void)reflow;
- (id)framedPhoto;
- (void)_drawEditLabelInFrame:(struct CGRect)arg1;
- (id)pasteboardMaskImageView;
- (id)emptyImageView;
- (id)editingImageView;
- (id)personImageView;
@property(readonly, nonatomic) UIImage *attributionImage;
@property(readonly, nonatomic) UIImage *overlayImage;
@property(readonly, nonatomic) UIImage *backgroundImage;
@property(readonly, nonatomic) UIImage *maskImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;

@end

