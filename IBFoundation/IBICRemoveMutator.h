//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICCatalogMutator.h>

@class IBICAbstractCatalogItem, NSData, NSNumber, NSString;

@interface IBICRemoveMutator : IBICCatalogMutator
{
    IBICAbstractCatalogItem *_item;
    IBICAbstractCatalogItem *_parent;
    NSString *_absoluteFilePath;
    NSString *_targetFileName;
    NSString *_originalFileName;
    _Bool _wasOnlyReference;
    _Bool _wasBrokenReference;
    NSData *_pendingManifestData;
    NSString *_pendingManifestPath;
    NSNumber *_originalIndex;
}

- (void).cxx_destruct;
- (id)inverseMutator;
- (id)mutationDescription;
- (void)applyToDiskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)applyToModel;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 targetFileName:(id)arg2;

@end

