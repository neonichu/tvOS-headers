//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACDPluginLoader : NSObject
{
}

+ (id)pluginForIdentifier:(id)arg1 subpath:(id)arg2;
+ (id)_buildPluginCache;
+ (id)_currentSystemVersion;
+ (id)pluginWithName:(id)arg1 inSubpath:(id)arg2;
+ (id)pluginBundlesAtSubpath:(id)arg1;
+ (id)_validatedBundleAtURL:(id)arg1;
+ (id)_accountsPluginDirectoryURL:(id)arg1;

@end

