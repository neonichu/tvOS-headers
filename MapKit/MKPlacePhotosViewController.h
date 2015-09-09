//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <MapKit/MKPlaceAttributionCellProvider-Protocol.h>
#import <MapKit/MKPlacePhotosViewDelegate-Protocol.h>
#import <MapKit/MKStackingViewControllerPreferredSizeUse-Protocol.h>
#import <MapKit/UICollectionViewDataSource-Protocol.h>
#import <MapKit/UICollectionViewDelegate-Protocol.h>

@class MKMapItem, NSString, _MKPlacePhotosCollectionView, _MKPlaceViewController;
@protocol MKPlaceCardPhotosControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKPlacePhotosViewController : UITableViewController <UICollectionViewDataSource, UICollectionViewDelegate, MKStackingViewControllerPreferredSizeUse, MKPlacePhotosViewDelegate, MKPlaceAttributionCellProvider>
{
    _Bool _showAddPhotoButton;
    _Bool _showMorePhotosButton;
    _Bool _hasAttribution;
    _Bool _showAttribution;
    MKMapItem *_mapItem;
    id <MKPlaceCardPhotosControllerDelegate> _photosControllerDelegate;
    unsigned long long _photosCount;
    double _photoWidth;
    _MKPlacePhotosCollectionView *_photoGrid;
    _MKPlaceViewController *_owner;
}

@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner=_owner;
@property(nonatomic) _Bool showAttribution; // @synthesize showAttribution=_showAttribution;
@property(retain, nonatomic) _MKPlacePhotosCollectionView *photoGrid; // @synthesize photoGrid=_photoGrid;
@property(nonatomic) double photoWidth; // @synthesize photoWidth=_photoWidth;
@property(nonatomic) unsigned long long photosCount; // @synthesize photosCount=_photosCount;
@property(nonatomic) _Bool hasAttribution; // @synthesize hasAttribution=_hasAttribution;
@property(nonatomic) _Bool showMorePhotosButton; // @synthesize showMorePhotosButton=_showMorePhotosButton;
@property(nonatomic) _Bool showAddPhotoButton; // @synthesize showAddPhotoButton=_showAddPhotoButton;
@property(nonatomic) __weak id <MKPlaceCardPhotosControllerDelegate> photosControllerDelegate; // @synthesize photosControllerDelegate=_photosControllerDelegate;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (id)placePhotoViewerGetDelegatesMapItem:(id)arg1;
- (void)placePhotoViewer:(id)arg1 attributionTappedForPhotoAtIndex:(unsigned long long)arg2;
- (id)placePhotoViewer:(id)arg1 viewForPhotoAtIndex:(unsigned long long)arg2;
- (void)_photoTappedAtIndex:(unsigned long long)arg1 fromLincense:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)photos;
- (double)_photoCellHeight;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_calculatePhotoSizeForSize:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)_morePhotos;
- (void)_addPhoto;
@property(readonly, nonatomic) _Bool showAttributionButtons;
- (void)viewDidLoad;
@property(readonly, nonatomic) _Bool requiresPreferredContentSizeInStackingView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

