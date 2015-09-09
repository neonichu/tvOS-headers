//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLPhotoEditDataExporter-Protocol.h>
#import <PhotoLibraryServices/PLPhotoEditDataImporter-Protocol.h>

@class NSString;

@interface PLPhotoEditPFDataConverter : NSObject <PLPhotoEditDataImporter, PLPhotoEditDataExporter>
{
}

+ (id)_settingsDictionaryForLegacyAutoEnhanceFilters:(id)arg1;
+ (id)_filtersForLegacyAutoEnhanceSettingsDictionary:(id)arg1;
+ (id)dataFromPhotoEditModel:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 exifOrientation:(int)arg4;
+ (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
+ (_Bool)_validateValueTypesForKeys:(id)arg1 requiredKeys:(id)arg2 inDictionary:(id)arg3 error:(id *)arg4;
+ (_Bool)validateAdjustmentsEnvelope:(id)arg1;
+ (_Bool)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 baseOrientation:(long long)arg5;
+ (id)_supportedAdjustments;
+ (long long)_supportLevelForSettings:(id)arg1 typesForKnownKeys:(id)arg2 requiredKeys:(id)arg3;
+ (_Bool)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
+ (id)_knownFormatVersions;
+ (id)formatVersion;
+ (id)formatIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

