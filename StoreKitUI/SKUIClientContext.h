//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SUClientInterfaceDelegatePrivate-Protocol.h>

@class IKAppContext, NSArray, NSBundle, NSDictionary, NSMapTable, NSMutableArray, NSString, SKUIApplicationController, SKUILocalizedStringDictionary, SKUIStoreDialogController, SKUIURL, SKUIURLBag, SSURLBag, SSUpdatableAssetController, SSVPlatformContext, SUClientInterface;

@interface SKUIClientContext : NSObject <SUClientInterfaceDelegatePrivate>
{
    NSString *_additionalPurchaseParameters;
    SKUIApplicationController *_applicationController;
    NSBundle *_bundle;
    SUClientInterface *_clientInterface;
    NSDictionary *_configurationDictionary;
    SKUIStoreDialogController *_dialogController;
    SKUILocalizedStringDictionary *_localizedStrings;
    NSString *_metricsConfigurationIdentifier;
    NSMapTable *_metricsPageContexts;
    NSMutableArray *_navigationHistory;
    NSString *_navigationHistoryPersistenceKey;
    NSString *_purchaseAffiliateIdentifier;
    SKUIURL *_purchaseReferrerURL;
    long long _purchaseURLBagType;
    IKAppContext *_scriptAppContext;
    NSString *_storeFrontIdentifier;
    SSUpdatableAssetController *_updatableAssetController;
    SKUIURLBag *_urlBag;
    long long _userInterfaceIdiomOverride;
}

+ (id)_configurationDictionaryWithBagDictionary:(id)arg1;
+ (id)_cachePathForStoreFrontIdentifier:(id)arg1;
+ (id)_fallbackConfigurationDictionary;
+ (id)defaultContext;
@property(nonatomic) long long userInterfaceIdiomOverride; // @synthesize userInterfaceIdiomOverride=_userInterfaceIdiomOverride;
@property(retain, nonatomic) SSUpdatableAssetController *updatableAssetController; // @synthesize updatableAssetController=_updatableAssetController;
@property(readonly, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(retain, nonatomic, getter=_scriptAppContext, setter=_setScriptAppContext:) IKAppContext *_scriptAppContext; // @synthesize _scriptAppContext;
@property(copy, nonatomic) SKUIURL *purchaseReferrerURL; // @synthesize purchaseReferrerURL=_purchaseReferrerURL;
@property(copy, nonatomic) NSString *navigationHistoryPersistenceKey; // @synthesize navigationHistoryPersistenceKey=_navigationHistoryPersistenceKey;
@property(copy, nonatomic) NSString *metricsConfigurationIdentifier; // @synthesize metricsConfigurationIdentifier=_metricsConfigurationIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *configurationDictionary; // @synthesize configurationDictionary=_configurationDictionary;
@property(readonly, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
@property(nonatomic, getter=_applicationController, setter=_setApplicationController:) __weak SKUIApplicationController *_applicationController; // @synthesize _applicationController;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)_navigationHistory;
- (void)_setValue:(id)arg1 forConfigurationKey:(id)arg2;
- (void)_setPurchaseURLBagType:(long long)arg1;
- (void)_setPurchaseAffiliateIdentifier:(id)arg1;
- (void)_setAdditionalPurchaseParameters:(id)arg1;
- (void)sendOnXEventWithDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;
- (void)sendApplicationWillEnterForeground;
- (void)sendApplicationDidEnterBackground;
- (id)SAPSessionForVersion:(long long)arg1;
- (id)newLoadStoreURLOperationWithURLRequest:(id)arg1;
- (id)newLoadStoreURLOperationWithURL:(id)arg1;
@property(readonly, nonatomic) SSVPlatformContext *platformContext;
- (void)loadValueForConfigurationKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)customizePurchase:(id)arg1;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (void)clientInterface:(id)arg1 dispatchXEvent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)clientInterface:(id)arg1 dispatchOnPageResponseWithData:(id)arg2 response:(id)arg3;
- (id)valueForConfigurationKey:(id)arg1;
@property(readonly, nonatomic) SSURLBag *URLBag;
- (id)tabBarItemsForStyle:(long long)arg1;
- (_Bool)supportsRenderingVersion:(unsigned int)arg1;
- (void)setMetricsPageContext:(id)arg1 forViewController:(id)arg2;
- (void)pushNavigationHistoryPageIdentifier:(id)arg1;
- (id)newLegacyStorePageViewControllerForURLResponse:(id)arg1;
@property(readonly, nonatomic) NSArray *navigationHistory;
- (id)modalDocumentViewControllerForDocument:(id)arg1 options:(id)arg2;
- (id)metricsPageContextForViewController:(id)arg1;
- (id)localizedStringForKey:(id)arg1 inTable:(id)arg2;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedAlertWithError:(id)arg1;
- (void)getDefaultMetricsControllerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)documentViewControllerForTemplateViewElement:(id)arg1;
- (id)additionalRightBarButtonItemForDocumentContainerViewController:(id)arg1;
- (id)additionalLeftBarButtonItemForDocumentContainerViewController:(id)arg1;
- (void)dealloc;
- (id)initWithConfigurationDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

