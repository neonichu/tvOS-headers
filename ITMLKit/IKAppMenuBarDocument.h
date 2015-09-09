//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKDOMFeature-Protocol.h>
#import <ITMLKit/IKJSMenuBarDocumentAppBridge-Protocol.h>

@class IKAppContext, IKDOMNode, IKViewElement, NSMutableDictionary, NSString;
@protocol IKAppMenuBarDocumentDelegate, NSCopying;

@interface IKAppMenuBarDocument : NSObject <IKJSMenuBarDocumentAppBridge, IKDOMFeature>
{
    IKDOMNode *_parentDOMNode;
    NSMutableDictionary *_jsDocumentsByEntityUniqueIdentifier;
    NSMutableDictionary *_documentsByEntityUniqueIdentifier;
    NSMutableDictionary *_documentOptionsByEntityUniqueIdentifier;
    id <NSCopying> _selectedEntityUniqueIdentifier;
    IKAppContext *_appContext;
    NSString *_featureName;
    id <IKAppMenuBarDocumentDelegate> _delegate;
    IKViewElement *_menuBarElement;
}

+ (id)makeFeatureJSObjectForFeature:(id)arg1;
@property(nonatomic) __weak IKViewElement *menuBarElement; // @synthesize menuBarElement=_menuBarElement;
@property(nonatomic) __weak id <IKAppMenuBarDocumentDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) IKViewElement *selectedMenuItem;
- (id)_menuItemElementForEntityUniqueIdentifier:(id)arg1;
- (id)documentOptionsForEntityUniqueIdentifier:(id)arg1;
- (id)documentForEntityUniqueIdentifier:(id)arg1;
- (id)documentOptionsForMenuItem:(id)arg1;
- (id)documentForMenuItem:(id)arg1;
- (void)jsMenuBarDocument:(id)arg1 setSelectedEntityUniqueIdentifier:(id)arg2 withOptions:(id)arg3;
- (void)jsMenuBarDocument:(id)arg1 setDocument:(id)arg2 forEntityUniqueIdentifier:(id)arg3 withOptions:(id)arg4;
- (id)jsMenuBarDocument:(id)arg1 documentForEntityUniqueIdentifier:(id)arg2;
- (void)migrateToViewElement:(id)arg1;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

