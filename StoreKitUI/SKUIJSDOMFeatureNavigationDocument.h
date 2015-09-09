//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKAppNavigationController-Protocol.h>
#import <StoreKitUI/SKUIDOMFeature-Protocol.h>

@class IKAppContext, IKJSNavigationDocument, NSMutableArray, NSString, SKUINavigationDocumentController;

@interface SKUIJSDOMFeatureNavigationDocument : NSObject <IKAppNavigationController, SKUIDOMFeature>
{
    IKJSNavigationDocument *_jsNavigationDocument;
    SKUINavigationDocumentController *_navigationDocumentController;
    NSMutableArray *_stackItems;
    IKAppContext *_appContext;
    NSString *_featureName;
}

+ (id)possibleFeatureNames;
+ (id)makeFeatureJSObjectForFeature:(id)arg1;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) SKUINavigationDocumentController *navigationDocumentController; // @synthesize navigationDocumentController=_navigationDocumentController;
- (void).cxx_destruct;
- (void)removeDocument:(id)arg1;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)popToRootDocument;
- (void)popToDocument:(id)arg1;
- (void)popDocument;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (id)documents;
- (void)clear;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

