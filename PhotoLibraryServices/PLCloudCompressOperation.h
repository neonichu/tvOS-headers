//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudOperation.h>

@interface PLCloudCompressOperation : PLCloudOperation
{
    unsigned short _targetQuality;
}

- (void)executeWithRemoteLibrary:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCPLResource:(id)arg1 assetUuid:(id)arg2 filePath:(id)arg3 targetQualityClass:(unsigned short)arg4;
- (id)initWithProperties:(id)arg1;
- (id)serializeObject;

@end

