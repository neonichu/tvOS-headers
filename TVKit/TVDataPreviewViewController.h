//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVKit/TVSDataClientResultsControllerDelegate-Protocol.h>

@class NSArray, NSString, TVSDataClientResultsController;

@interface TVDataPreviewViewController : UIViewController <TVSDataClientResultsControllerDelegate>
{
    unsigned long long _maxDataQueryImages;
    TVSDataClientResultsController *_dataResultsController;
    NSArray *_dataBaseItems;
    unsigned long long _infoType;
    CDUnknownBlockType _dataBaseItemsChanged;
}

+ (id)previewControllerForSong:(id)arg1 oldController:(id)arg2;
+ (id)previewControllerForSong:(id)arg1;
+ (id)previewControllerForAllSongsWithDataClient:(id)arg1;
+ (id)previewViewControllerForAllMusicVideosWithDataClient:(id)arg1;
+ (id)previewControllerForMusicVideo:(id)arg1 oldController:(id)arg2;
+ (id)previewControllerForMusicVideo:(id)arg1;
+ (id)previewControllerForGeniusMix:(id)arg1 oldController:(id)arg2;
+ (id)previewControllerForGeniusMix:(id)arg1;
+ (id)previewControllerForAlbumsWithPlaylist:(id)arg1;
+ (id)previewControllerForAlbumsWithComposer:(id)arg1;
+ (id)previewControllerForAlbumsWithGenre:(id)arg1;
+ (id)previewControllerForAlbumsWithDataClient:(id)arg1 artist:(id)arg2 genre:(id)arg3;
+ (id)previewControllerForAllAlbumsWithDataClient:(id)arg1;
+ (id)previewControllerForAlbum:(id)arg1 oldController:(id)arg2;
+ (id)previewControllerForAlbum:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType dataBaseItemsChanged; // @synthesize dataBaseItemsChanged=_dataBaseItemsChanged;
@property(nonatomic) unsigned long long infoType; // @synthesize infoType=_infoType;
@property(copy, nonatomic) NSArray *dataBaseItems; // @synthesize dataBaseItems=_dataBaseItems;
@property(retain, nonatomic) TVSDataClientResultsController *dataResultsController; // @synthesize dataResultsController=_dataResultsController;
@property(nonatomic) unsigned long long maxDataQueryImages; // @synthesize maxDataQueryImages=_maxDataQueryImages;
- (void).cxx_destruct;
- (id)_filterDataBaseItems:(id)arg1;
- (_Bool)controller:(id)arg1 shouldHandleUpdate:(id)arg2;
- (void)controller:(id)arg1 didFailQuery:(id)arg2;
- (void)controller:(id)arg1 didChangeResultsForQuery:(id)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)resumePreview;
- (void)pausePreview;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataResultsController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

