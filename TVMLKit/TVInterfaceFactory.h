//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/TVInterfaceCreating-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol TVInterfaceCreating;

@interface TVInterfaceFactory : NSObject <TVInterfaceCreating>
{
    struct {
        unsigned int respondsToViewForElement:1;
        unsigned int respondsToViewControllerForElement:1;
        unsigned int respondsToURLForResource:1;
        unsigned int respondsToImageProxyForElement:1;
        unsigned int respondsToCollectionViewCellClassForElementName:1;
    } _extenderFlags;
    NSMutableDictionary *_viewCreatorsByKey;
    NSMutableDictionary *_viewControllerCreatorsByKey;
    NSMutableDictionary *_controllerTransitionCreatorsByKey;
    NSArray *_factories;
    id <TVInterfaceCreating> _extendedInterfaceCreator;
}

+ (id)_URLForResource:(id)arg1 bundle:(id)arg2;
+ (id)_tvResourceMap;
+ (id)_tvmlResourceMap;
+ (id)sharedInterfaceFactory;
+ (void)initialize;
@property(retain, nonatomic) id <TVInterfaceCreating> extendedInterfaceCreator; // @synthesize extendedInterfaceCreator=_extendedInterfaceCreator;
- (void).cxx_destruct;
- (id)_imageProxyForElement:(id)arg1;
- (Class)_collectionViewCellClassForElementName:(id)arg1 elementType:(unsigned long long)arg2;
- (id)_controllerTransitionFromElement:(id)arg1;
- (void)_registerControllerTransitioningCreator:(CDUnknownBlockType)arg1 withType:(unsigned long long)arg2;
- (id)_viewControllerFromElement:(id)arg1 existingController:(id)arg2;
- (id)_viewFromElement:(id)arg1 existingView:(id)arg2;
- (void)_registerViewControllerCreator:(CDUnknownBlockType)arg1 withType:(unsigned long long)arg2;
- (void)_registerViewCreator:(CDUnknownBlockType)arg1 withType:(unsigned long long)arg2;
- (id)URLForResource:(id)arg1;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;
- (id)viewForElement:(id)arg1 existingView:(id)arg2;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

