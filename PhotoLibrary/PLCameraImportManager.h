//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibrary/ICDeviceBrowserDelegate-Protocol.h>

@class ICDeviceBrowser, NSMutableArray, NSString;

@interface PLCameraImportManager : NSObject <ICDeviceBrowserDelegate>
{
    ICDeviceBrowser *_deviceBrowser;
    NSMutableArray *_importers;
    NSMutableArray *_importersToEject;
    _Bool _wantsToStopListening;
    id _stopListeningCallbackTarget;
    SEL _stopListeningCallbackSelector;
}

+ (id)sharedCameraImportManager;
@property(retain, nonatomic) NSMutableArray *importers; // @synthesize importers=_importers;
- (void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(_Bool)arg3;
- (void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(_Bool)arg3;
- (id)importerMatchingDevice:(id)arg1;
- (void)ejectCameras;
- (void)removeImporter:(id)arg1;
- (void)_cameraImporterDidFinishImporting:(id)arg1;
- (void)addImporter:(id)arg1;
- (void)stopListeningWithCallbackTarget:(id)arg1 selector:(SEL)arg2;
- (void)stopListening;
- (void)_stopListening;
- (unsigned long long)startListening;
- (id)importerForDevice:(id)arg1 withDelegate:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

