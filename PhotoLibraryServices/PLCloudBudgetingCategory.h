//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PLCloudResourceRange, PLPhotoLibrary;

@interface PLCloudBudgetingCategory : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    unsigned short _category;
    PLCloudResourceRange *_range;
    CDUnknownBlockType predicate;
    unsigned long long budgetShare;
}

@property(nonatomic) unsigned long long budgetShare; // @synthesize budgetShare;
@property(copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate;
- (id)description;
- (void)enumerateNodesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)totalSizeForQualityClass:(unsigned short)arg1;
- (unsigned long long)totalSizeForQualityClass:(unsigned short)arg1 inRange:(struct _NSRange)arg2;
- (id)resourcesForAsset:(id)arg1 inQualityClass:(unsigned short)arg2;
@property(readonly, nonatomic) unsigned long long totalAssetsCount;
- (struct _NSRange)excludeAssetWithUuid:(id)arg1;
- (struct _NSRange)includeAsset:(id)arg1;
@property(readonly, nonatomic) unsigned short category;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithIdentifier:(unsigned short)arg1 photoLibrary:(id)arg2;

@end

