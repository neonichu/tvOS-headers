//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UITextInputDelegate-Protocol.h>
#import <UIKit/_UITextDocumentInterfaceDelegate-Protocol.h>

@class NSString, UIInputView, UIKeyboard;
@protocol UITextDocumentProxy;

@interface UIInputViewController : UIViewController <_UITextDocumentInterfaceDelegate, UITextInputDelegate>
{
    _Bool _alignsToContentViewController;
    id <UITextDocumentProxy> _textDocumentProxy;
    NSString *_primaryLanguage;
}

+ (_Bool)_requiresProxyInterface;
@property(copy, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property(nonatomic) _Bool _alignsToContentViewController; // @synthesize _alignsToContentViewController;
@property(readonly, nonatomic) id <UITextDocumentProxy> textDocumentProxy; // @synthesize textDocumentProxy=_textDocumentProxy;
- (void)_didResetDocumentState;
- (void)_willResetDocumentState;
- (void)textDidChange:(id)arg1;
- (void)textWillChange:(id)arg1;
- (void)selectionDidChange:(id)arg1;
- (void)selectionWillChange:(id)arg1;
- (void)requestSupplementaryLexiconWithCompletion:(CDUnknownBlockType)arg1;
- (void)returnToPreviousInputMode;
- (void)advanceToNextInputMode;
- (void)dismissKeyboard;
- (void)setView:(id)arg1;
@property(retain, nonatomic) UIInputView *inputView;
- (id)_textDocumentInterface;
- (id)_proxyInterface;
- (id)_compatibilityController;
@property(readonly, nonatomic) _Bool _isPlaceholder;
@property(readonly, nonatomic) UIKeyboard *_keyboard;
- (_Bool)_shouldForwardSystemLayoutFittingSizeChanges;
- (struct CGSize)_systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_setExtensionContext:(id)arg1;
- (id)_extensionContext;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (void)_setTextDocumentProxy:(id)arg1;
- (void)dealloc;
- (void)_setupInputController;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

