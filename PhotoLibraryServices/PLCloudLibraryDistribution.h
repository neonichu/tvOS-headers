//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface PLCloudLibraryDistribution : NSObject
{
    NSArray *_categories;
    unsigned long long _reservedBudget;
    unsigned long long _requiredBudget;
    unsigned long long _behavior;
    unsigned long long _totalAssetsCount;
}

@property(readonly, nonatomic) unsigned long long totalAssetsCount; // @synthesize totalAssetsCount=_totalAssetsCount;
@property(readonly, nonatomic) unsigned long long behavior;
@property(readonly, nonatomic) unsigned long long remainingBudget;
@property(readonly, nonatomic) unsigned long long requiredBudget;
@property(readonly, nonatomic) unsigned long long reservedBudget;
@property(readonly, nonatomic) NSArray *budgetingCategories;
- (id)distributionForBudgetingCategory:(unsigned short)arg1;
- (id)description;
- (void)dealloc;
- (id)plistSerializedObject;
- (id)initWithSerializedPlist:(id)arg1;
- (id)initWithLayoutStore:(id)arg1 layoutBehavior:(unsigned long long)arg2 reservedBudget:(unsigned long long)arg3;

@end

