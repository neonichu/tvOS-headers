//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureDeviceInput;

@interface AVCaptureDeviceInternal : NSObject
{
    int openRefCount;
    int configLockRefCount;
    int configLockPid;
    _Bool usingDevice;
    AVCaptureDeviceInput *activeInput;
}

@end

