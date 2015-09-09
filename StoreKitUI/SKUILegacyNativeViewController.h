//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUICategoryControllerDelegate-Protocol.h>

@class NSData, NSString, NSURL, SKUICategoryController, SKUIStorePageViewController, SSVLoadURLOperation;

@interface SKUILegacyNativeViewController : SKUIViewController <SKUICategoryControllerDelegate>
{
    NSURL *_activeURL;
    SKUICategoryController *_categoryController;
    NSURL *_defaultURL;
    NSData *_initialData;
    SSVLoadURLOperation *_initialOperation;
    SKUIStorePageViewController *_storePageViewController;
}

- (void).cxx_destruct;
- (id)_storePageViewController;
- (void)_reloadNavigationItem;
- (void)_finishLoadWithResult:(_Bool)arg1 error:(id)arg2;
- (id)_categoryController;
- (id)activeMetricsController;
- (void)categoryController:(id)arg1 didSelectCategory:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)reloadData;
- (void)dealloc;
- (id)initWithData:(id)arg1 fromOperation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

