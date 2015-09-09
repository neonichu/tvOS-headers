//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

@class RUIObjectModel, UIActivityIndicatorView, UIColor, UILabel, UIView;

@interface RUISpinnerView : RUIElement
{
    UIView *_view;
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
    RUIObjectModel *_objectModel;
    UIColor *_spinnerColor;
}

@property(retain, nonatomic) UIColor *spinnerColor; // @synthesize spinnerColor=_spinnerColor;
@property(nonatomic) __weak RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
- (void).cxx_destruct;
- (void)viewDidLayout;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)spinnerView;

@end

