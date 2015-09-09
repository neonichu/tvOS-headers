//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface PKRemoteAssetManifest : NSObject
{
    NSURL *_fileURL;
    NSMutableDictionary *_remoteAssets;
    NSString *_name;
}

@property(readonly, nonatomic) NSDictionary *remoteAssets; // @synthesize remoteAssets=_remoteAssets;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)dealloc;
- (id)deviceSpecificAsset;
- (id)deviceSpecificAssetForScreenScale:(double)arg1 suffix:(id)arg2;
- (id)initWithFileURL:(id)arg1 passURL:(id)arg2 error:(id *)arg3;

@end

