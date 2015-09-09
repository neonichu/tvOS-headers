//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class CPLContainerRelation, NSString;

@interface CPLContainerRelationChange : CPLRecordChange
{
    NSString *_itemIdentifier;
    CPLContainerRelation *_relation;
}

+ (id)relationWithItemIdentifier:(id)arg1 containerIdentifier:(id)arg2;
+ (id)relationToContainerWithIdentifier:(id)arg1;
@property(retain, nonatomic) CPLContainerRelation *relation; // @synthesize relation=_relation;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)identifierForQuarantine;
- (void)setSecondaryIdentifier:(id)arg1;
- (id)secondaryIdentifier;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)identifiersForMapping;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(_Bool)arg2 usingClientCache:(id)arg3;

@end

