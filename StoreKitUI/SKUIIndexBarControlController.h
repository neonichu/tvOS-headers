//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIIndexBarControlDataSource-Protocol.h>
#import <StoreKitUI/SKUIIndexBarControlDelegate-Protocol.h>

@class NSMapTable, NSString, SKUIIndexBarControl, SKUIIndexBarEntryDescriptor, SKUIResourceLoader;
@protocol SKUIIndexBarControlControllerDataSource, SKUIIndexBarControlControllerDelegate;

@interface SKUIIndexBarControlController : NSObject <SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate>
{
    SKUIIndexBarEntryDescriptor *_combinedEntryDescriptor;
    NSMapTable *_entryDescriptorToCachedEntry;
    _Bool _hasValidCombinedEntryDescriptor;
    NSMapTable *_indexPathToEntryDescriptor;
    NSMapTable *_requestIDToDescriptors;
    CDStruct_2ba00048 _dataSourceDelegateFlags;
    id <SKUIIndexBarControlControllerDataSource> _dataSource;
    id <SKUIIndexBarControlControllerDelegate> _delegate;
    SKUIIndexBarControl *_indexBarControl;
    SKUIResourceLoader *_resourceLoader;
}

@property(retain, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) SKUIIndexBarControl *indexBarControl; // @synthesize indexBarControl=_indexBarControl;
@property(nonatomic) __weak id <SKUIIndexBarControlControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SKUIIndexBarControlControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)_URLForEntryDescriptor:(id)arg1;
- (void)_updateCachedEntry:(id)arg1 forEntryDescriptor:(id)arg2;
- (id)_placeholderEntryForEntryDescriptor:(id)arg1;
- (void)_loadEntryForEntryDescriptor:(id)arg1;
- (void)_finishLoadForRequestID:(id)arg1 withResultingImage:(id)arg2;
- (id)_entryForEntryDescriptor:(id)arg1 loadingIfNeeded:(_Bool)arg2;
- (id)_entryDescriptorAtIndexPath:(id)arg1;
- (void)_configureEntry:(id)arg1 withEntryDescriptor:(id)arg2;
- (id)_combinedEntryDescriptor;
- (id)_cachedEntryForEntryDescriptor:(id)arg1;
- (void)_cancelLoadForEntryDescriptors:(id)arg1;
- (void)_artworkRequestDidLoadImageNotification:(id)arg1;
- (void)indexBarControlDidSelectBeyondTop:(id)arg1;
- (void)indexBarControlDidSelectBeyondBottom:(id)arg1;
- (void)indexBarControl:(id)arg1 didSelectEntryAtIndexPath:(id)arg2;
- (long long)indexBarControl:(id)arg1 numberOfEntriesInSection:(long long)arg2;
- (long long)numberOfSectionsInIndexBarControl:(id)arg1;
- (id)indexBarControl:(id)arg1 entryAtIndexPath:(id)arg2;
- (id)combinedEntryForIndexBarControl:(id)arg1;
- (void)reloadData;
- (void)reloadSections:(id)arg1;
- (void)reloadEntryDescriptorAtIndexPath:(id)arg1;
- (void)reloadCombinedEntryDescriptor;
- (void)dealloc;
- (id)initWithIndexBarControl:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

