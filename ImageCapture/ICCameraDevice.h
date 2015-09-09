//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ImageCapture/ICDevice.h>

@class NSArray, NSString;

@interface ICCameraDevice : ICDevice
{
    void *_cameraProperties;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)receivedDeviceCommandCompletion;
- (void)addToMetadataFetchQ:(id)arg1;
- (void)addToThumbnailFetchQ:(id)arg1;
- (void)removeFolder:(id)arg1;
- (void)addFolder:(id)arg1;
- (void)cancelDownload;
- (void)requestDownloadFile:(id)arg1 options:(id)arg2 downloadDelegate:(id)arg3 didDownloadSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)requestEject;
- (void)requestDeleteFiles:(id)arg1;
- (void)requestSyncClock;
- (void)requestCloseSession;
- (void)requestOpenSession;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)handleCommandCompletionNotification:(id)arg1;
- (id)filesOfType:(id)arg1;
@property(readonly) NSArray *mediaFiles;
@property(readonly) NSArray *contents;
- (void)pendNotifyingDelegateOfAddedItem:(id)arg1;
- (void)notifyDelegateOfAddedItems:(id)arg1;
- (void)notifyDelegateOfAddedItem:(id)arg1;
- (id)deviceQSemaphore;
- (id)generalQ;
@property(getter=isAccessRestrictedAppleDevice) _Bool accessRestrictedAppleDevice;
@property unsigned long long contentCatalogPercentCompleted;
- (void)incrementNumberOfDownloadableItems;
- (void)decrementNumberOfDownloadableItems;
@property unsigned long long numberOfDownloadableItems;
- (void)incrementEstimatedNumberOfDownloadableItems;
- (void)decrementEstimatedNumberOfDownloadableItems;
@property unsigned long long estimatedNumberOfDownloadableItems;
- (double)downloadCancelTimestamp;
@property(readonly) double timeOffset;
@property(readonly) unsigned long long batteryLevel;
@property(readonly) _Bool batteryLevelAvailable;
@property _Bool allowsSyncingClock;
- (void)clearNotifyArray;
- (void)addObjectToNotifyArray:(id)arg1;
@property(readonly) NSArray *notifyArray;
@property(getter=isLocked) _Bool locked;
@property _Bool beingEjected;
@property(getter=isEjectable) _Bool ejectable;
@property(copy) NSString *volumePath;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)init;

@end

