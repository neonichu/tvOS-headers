//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AVCVideoStreamConfig : NSObject
{
    long long _txCodecType;
    long long _rxCodecType;
    long long _videoResolution;
    unsigned long long _framerate;
    unsigned long long _targetBitrate;
    void *_remoteVideoLayer;
    void *_localVideoLayer;
}

@property(nonatomic) void *localVideoLayer; // @synthesize localVideoLayer=_localVideoLayer;
@property(nonatomic) void *remoteVideoLayer; // @synthesize remoteVideoLayer=_remoteVideoLayer;
@property(nonatomic) unsigned long long targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(nonatomic) unsigned long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
@property(nonatomic) long long rxCodecType; // @synthesize rxCodecType=_rxCodecType;
@property(nonatomic) long long txCodecType; // @synthesize txCodecType=_txCodecType;

@end

