//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DCIMImageWriter : NSObject
{
}

+ (id)avalanchePathExtension;
+ (id)diagnosticPathExtension;
+ (id)largeThumbnailInflightPathExtension;
+ (id)incomingAssetFilenameDelimiter;
+ (id)defaultFileExtensionForAssetType:(short)arg1;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (id)uniqueIncomingPathForAssetWithUUID:(id)arg1 andExtension:(id)arg2 isPhotoStream:(_Bool)arg3;
+ (id)incomingDirectoryPathForPhotoStream;
+ (id)incomingDirectoryPath;
+ (void)writeableDataForImage:(id)arg1 previewImage:(id)arg2 imageData:(id)arg3 imageUTIType:(struct __CFString *)arg4 exifProperties:(id)arg5 imageOrientation:(long long)arg6 thumbnailDataOut:(id *)arg7 imageUTITypeOut:(id *)arg8 exifPropertiesOut:(id *)arg9 isJPEGOut:(_Bool *)arg10 imageDataOut:(id *)arg11;
+ (void)writeableDataForImageData:(id)arg1 thumbnailDataOut:(id *)arg2 imageUTITypeOut:(id *)arg3 exifPropertiesOut:(id *)arg4 isJPEGOut:(_Bool *)arg5 imageDataOut:(id *)arg6;
+ (id)sharedDCIMWriter;
- (_Bool)_writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(_Bool)arg5;
- (_Bool)writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4;
- (id)_cameraAssetExtensionForType:(short)arg1;
- (_Bool)saveImageJobToDisk:(id)arg1;

@end

