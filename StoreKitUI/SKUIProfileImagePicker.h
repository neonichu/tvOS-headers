//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/UIImagePickerControllerDelegate-Protocol.h>
#import <StoreKitUI/UINavigationControllerDelegate-Protocol.h>

@class NSString, SKUIClientContext, UIImagePickerController, UILabel, UIScrollView, UIView;
@protocol SKUIProfileImagePickerDelegate;

@interface SKUIProfileImagePicker : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    SKUIClientContext *_clientContext;
    UIView *_contentView;
    UILabel *_descriptionLabel;
    _Bool _firstApperance;
    UIImagePickerController *_imagePicker;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    id <SKUIProfileImagePickerDelegate> _delegate;
}

+ (id)_fixCropRect:(id)arg1 forOriginalImage:(id)arg2;
@property(nonatomic) __weak id <SKUIProfileImagePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showImageSourcePicker;
- (void)_showImagePicker;
- (void)_presentImagePickerWithSourceType:(long long)arg1;
- (void)_didCancel;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithClientContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

