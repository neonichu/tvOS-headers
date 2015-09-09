//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, PSWeakReference;
@protocol PSStorageReporting;

@interface PSUsageBundleApp : NSObject
{
    PSWeakReference *_storageReporterReference;
    float _totalSize;
    NSString *_name;
    NSString *_bundleIdentifier;
    NSArray *_categories;
}

+ (id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 andCategories:(id)arg3;
+ (id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2;
@property(nonatomic) float totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PSStorageReporting> usageBundleStorageReporter;
- (id)description;

@end

