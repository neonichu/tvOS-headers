//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface TVPhotoStreamClient : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchImageForAssetURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCollectionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

