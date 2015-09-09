//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKit/AVCaptureMetadataOutputObjectsDelegate-Protocol.h>

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSString;
@protocol OS_dispatch_queue, PKCaptureDelegate;

@interface PKCaptureSession : NSObject <AVCaptureMetadataOutputObjectsDelegate>
{
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    AVCaptureVideoPreviewLayer *_previewLayer;
    id <PKCaptureDelegate> _delegate;
}

@property(nonatomic) id <PKCaptureDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_changeCameraConfiguration;
- (void)autoExposeAtPoint:(struct CGPoint)arg1;
- (void)autoFocusAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool isRunning;
- (void)stopRunning;
- (void)startRunning;
- (void)setupCameraSession;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

