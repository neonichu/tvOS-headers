//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class NSDictionary;

@interface SGPipeline : SGPipelineDissector
{
    NSDictionary *_dissectorsAndDependencies;
}

+ (id)quotedRegionPipelineForIpsosTesting;
+ (id)quotedRegionPipeline;
+ (id)fullPipeline;
+ (id)customPipeline:(id)arg1;
+ (id)parallelPipeline:(id)arg1;
+ (id)dependencyClassesForDissectorClass:(Class)arg1;
- (void).cxx_destruct;
- (void)dissectSpotlightEntity:(id)arg1 bundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4 andStore:(id)arg5;
- (void)dissectEntity:(id)arg1 andStore:(id)arg2;
- (void)_dissectEntity:(id)arg1 andThen:(CDUnknownBlockType)arg2;
- (void)dissect:(id)arg1 andStore:(id)arg2;
- (void)dissect:(id)arg1;
- (id)storeOperation:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 withStore:(id)arg5 dependencies:(id)arg6;
- (id)storeOperation:(id)arg1 withStore:(id)arg2 dependencies:(id)arg3;
- (id)geocodeOperation:(id)arg1 withDependencies:(id)arg2;
- (id)dissectOperations:(id)arg1;

@end

