//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLPhotoDerivativeUtilities : NSObject
{
}

+ (id)generateDerivativeForMSAsset:(id)arg1 derivativeType:(int)arg2 withSpecificationInfo:(id)arg3 collectionGUID:(id)arg4;
+ (_Bool)_resizeImageUsingNewScalerForUtiType:(id)arg1 inputFilePath:(id)arg2 outputFilePath:(id)arg3 derivedSize:(struct CGSize)arg4;
+ (_Bool)_resizeImageUsingSWForUtiType:(id)arg1 inputFilePath:(id)arg2 outputFilePath:(id)arg3 derivedSize:(struct CGSize)arg4;
+ (_Bool)_resizeImageUsingHWForUtiType:(id)arg1 inputFilePath:(id)arg2 outputFilePath:(id)arg3 derivedSize:(struct CGSize)arg4;
+ (_Bool)resizeImageForUtiType:(id)arg1 masterFilePath:(id)arg2 derivedSize:(struct CGSize)arg3 derivedAssetPath:(id)arg4;

@end

