//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSString, PLManagedAsset;

@interface PLCloudResourceNode : PLManagedObject
{
}

+ (void)_enumerateSelfAndDescendantsInOrderFromLocalRoot:(id)arg1 withCallbackBlock:(CDUnknownBlockType)arg2 currentDepth:(int)arg3;
+ (id)nodeForAssetWithUuid:(id)arg1 inContext:(id)arg2;
+ (void)markStaleForAsset:(id)arg1;
+ (void)_insertFloatingNodeForAsset:(id)arg1;
+ (id)entityName;
- (id)description;
- (unsigned long long)countOfResourcesOnSelfAndDescendants;
- (unsigned long long)countOfDescendants;
- (void)enumerateDescendantsInOrder:(CDUnknownBlockType)arg1;
- (void)updateTotalResourceSizesForQualityLevels:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) PLCloudResourceNode *predecessorNode;
@property(readonly, retain, nonatomic) PLCloudResourceNode *successorNode;
- (id)siblingNode;
@property(readonly, retain, nonatomic) PLCloudResourceNode *uncleNode;
@property(readonly, retain, nonatomic) PLCloudResourceNode *grandparentNode;
- (id)nodeAtIndex:(unsigned long long)arg1 withLocalRoot:(id)arg2;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (void)setSelfResourceSize:(unsigned long long)arg1 forQualityClass:(unsigned short)arg2;
- (unsigned long long)selfResourceSizeForQualityClass:(unsigned short)arg1;
- (void)setTotalResourceSize:(unsigned long long)arg1 forQualityClass:(unsigned short)arg2;
- (unsigned long long)totalResourceSizeForQualityClass:(unsigned short)arg1;
- (id)supportingResourcesForQualityClass:(unsigned short)arg1;
- (id)resourceForQualityClass:(unsigned short)arg1;
@property(readonly, retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
- (void)_rotateLeftWithTreeRoot:(id *)arg1;
- (void)_rotateRightWithTreeRoot:(id *)arg1;
- (void)insertChildNode:(id)arg1 usingComparer:(CDUnknownBlockType)arg2;
- (unsigned long long)nodeHeight;
- (_Bool)isLeaf;
- (_Bool)isNullNode;

// Remaining properties
@property(retain, nonatomic) NSString *assetUuid; // @dynamic assetUuid;
@property(nonatomic) unsigned short budgetingCategory; // @dynamic budgetingCategory;
@property(nonatomic) unsigned short color; // @dynamic color;
@property(retain, nonatomic) NSDate *dateCreated; // @dynamic dateCreated;
@property(nonatomic) _Bool floating; // @dynamic floating;
@property(nonatomic) unsigned int layoutStatus; // @dynamic layoutStatus;
@property(retain, nonatomic) PLCloudResourceNode *leftChild; // @dynamic leftChild;
@property(retain, nonatomic) PLCloudResourceNode *next; // @dynamic next;
@property(retain, nonatomic) PLCloudResourceNode *parent; // @dynamic parent;
@property(nonatomic) unsigned long long refcount; // @dynamic refcount;
@property(retain, nonatomic) PLCloudResourceNode *rightChild; // @dynamic rightChild;
@property(nonatomic) unsigned long long selfResourceSizeClassHi; // @dynamic selfResourceSizeClassHi;
@property(nonatomic) unsigned long long selfResourceSizeClassLo; // @dynamic selfResourceSizeClassLo;
@property(nonatomic) unsigned long long selfResourceSizeClassMed; // @dynamic selfResourceSizeClassMed;
@property(nonatomic) unsigned long long totalAssetCount; // @dynamic totalAssetCount;
@property(nonatomic) unsigned long long totalResourceSizeClassHi; // @dynamic totalResourceSizeClassHi;
@property(nonatomic) unsigned long long totalResourceSizeClassLo; // @dynamic totalResourceSizeClassLo;
@property(nonatomic) unsigned long long totalResourceSizeClassMed; // @dynamic totalResourceSizeClassMed;

@end

