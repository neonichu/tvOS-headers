//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDownloadsChildViewControllerDelegate-Protocol.h>
#import <StoreKitUI/SSDownloadManagerObserver-Protocol.h>

@class NSArray, NSCache, NSMutableDictionary, NSString, SKUIIPadDownloadsViewController, SKUIIPhoneDownloadsViewController, SKUIImageDataConsumer, SSDownloadManager, UIImage;

@interface SKUIDownloadsViewController : SKUIViewController <SSDownloadManagerObserver, SKUIDownloadsChildViewControllerDelegate>
{
    SKUIImageDataConsumer *_consumer;
    SSDownloadManager *_downloadManager;
    NSArray *_downloads;
    NSMutableDictionary *_imageOperations;
    NSCache *_images;
    SKUIIPhoneDownloadsViewController *_iphoneViewController;
    SKUIIPadDownloadsViewController *_ipadViewController;
    UIImage *_nullImage;
}

+ (long long)_sizeClassForSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (void)_setArtwork:(id)arg1 forURLString:(id)arg2;
- (void)_reloadManagerFromServer;
- (void)_reloadBadge;
- (void)_reloadView;
- (void)_reloadViewControllerWithSize:(struct CGSize)arg1;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)childViewController:(id)arg1 artworkForDownload:(id)arg2;
- (void)childViewController:(id)arg1 removeDownloads:(id)arg2;
- (void)childViewController:(id)arg1 performActionForDownload:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

