//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/TVSCloudQueryHandler.h>

__attribute__((visibility("hidden")))
@interface TVSCloudItemQueryHandler : TVSCloudQueryHandler
{
}

+ (id)_tvsDataTypeForMLMediaType:(unsigned int)arg1;
+ (id)_mlPropertiesForATVProperties:(id)arg1;
+ (_Bool)_evaluateNumericFilter:(id)arg1 dataToTest:(unsigned long long)arg2;
+ (id)_bookmarkForStoreID:(id)arg1 mediaType:(id)arg2;
+ (id)atvMediaItemsForTrackIDs:(id)arg1 mlLibrary:(id)arg2 dataClient:(id)arg3 propertiesRequested:(id)arg4;
+ (id)atvMediaItemsForCloudIDs:(id)arg1 mlLibrary:(id)arg2 dataClient:(id)arg3 propertiesRequested:(id)arg4;
+ (id)mlPropertyForATVProperty:(id)arg1;
+ (id)mlPredicatePropertyForATVProperty:(id)arg1;
+ (id)mlQueryPropertyForATVProperty:(id)arg1;
- (unsigned long long)_filterContainerTypeFromDataFilter:(id)arg1;
- (unsigned long long)_filterContainerTypeFromQuery:(id)arg1;
- (id)_orderingTermsForProperty:(id)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2 inResponseBuffer:(id)arg3;
- (void)_handleDAAPQuery:(id)arg1;
- (void)_handleQuery:(id)arg1;
- (id)_mlQueryForATVMediaQuery:(id)arg1 playlist:(id *)arg2 usingSections:(_Bool *)arg3;
- (void)handleQuery:(id)arg1 withContext:(void *)arg2;

@end

