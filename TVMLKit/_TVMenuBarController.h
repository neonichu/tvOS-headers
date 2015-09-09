//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import <TVMLKit/IKAppMenuBarDocumentDelegate-Protocol.h>
#import <TVMLKit/UITabBarControllerDelegate-Protocol.h>

@class IKViewElement, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _TVMenuBarController : UITabBarController <IKAppMenuBarDocumentDelegate, UITabBarControllerDelegate>
{
    IKViewElement *_menuBarTemplate;
    NSArray *_menuItemElements;
    NSString *_previousAutoHighlightIdentifier;
    unsigned long long _previousSelectedIndex;
}

@property(nonatomic) unsigned long long previousSelectedIndex; // @synthesize previousSelectedIndex=_previousSelectedIndex;
@property(copy, nonatomic) NSString *previousAutoHighlightIdentifier; // @synthesize previousAutoHighlightIdentifier=_previousAutoHighlightIdentifier;
@property(copy, nonatomic) NSArray *menuItemElements; // @synthesize menuItemElements=_menuItemElements;
@property(retain, nonatomic) IKViewElement *menuBarTemplate; // @synthesize menuBarTemplate=_menuBarTemplate;
- (void).cxx_destruct;
- (id)_titleFromMenuElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)menuBarDocument:(id)arg1 didSelectMenuItem:(id)arg2 animated:(_Bool)arg3;
- (void)menuBarDocument:(id)arg1 didReplaceDocumentForMenuItem:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
