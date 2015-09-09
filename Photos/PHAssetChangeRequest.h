//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class CLLocation, NSDate, NSIndexSet, NSManagedObjectID, NSString, NSURL, PHChangeRequestHelper, PHContentEditingOutput, PHObjectPlaceholder;

@interface PHAssetChangeRequest : NSObject <PHUpdateChangeRequest>
{
    NSURL *_editorBundleURL;
    CLLocation *_updatedLocation;
    NSString *_assetDescription;
    PHChangeRequestHelper *_helper;
    _Bool _entitled;
    _Bool _didSetVisibilityState;
    NSString *_clientName;
    _Bool _didChangeAdjustments;
    unsigned short _photoIrisVisibilityState;
    int _clientProcessID;
    PHContentEditingOutput *_contentEditingOutput;
    NSString *_editorBundleID;
    NSIndexSet *_supportedEditOperations;
    NSURL *_videoURLForUpdate;
    NSString *_pairingIdentifier;
    CDStruct_1b6d18a9 _videoDuration;
    CDStruct_1b6d18a9 _imageDisplayTime;
}

+ (void)deleteAssets:(id)arg1;
+ (id)changeRequestForAsset:(id)arg1;
+ (id)creationRequestForAssetFromVideoComplementBundle:(id)arg1;
+ (id)changeRequestForAssetFromVideoFileURL:(id)arg1 imageAsset:(id)arg2 displayTime:(double)arg3;
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromImageAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromImage:(id)arg1;
+ (id)_allAssetEditOperations;
@property(nonatomic) CDStruct_1b6d18a9 imageDisplayTime; // @synthesize imageDisplayTime=_imageDisplayTime;
@property(nonatomic) CDStruct_1b6d18a9 videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSString *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(retain, nonatomic) NSURL *videoURLForUpdate; // @synthesize videoURLForUpdate=_videoURLForUpdate;
@property(retain, nonatomic) NSIndexSet *supportedEditOperations; // @synthesize supportedEditOperations=_supportedEditOperations;
@property(readonly, copy, nonatomic) NSString *editorBundleID; // @synthesize editorBundleID=_editorBundleID;
@property(readonly, nonatomic) _Bool didChangeAdjustments; // @synthesize didChangeAdjustments=_didChangeAdjustments;
@property(retain, nonatomic) PHContentEditingOutput *contentEditingOutput; // @synthesize contentEditingOutput=_contentEditingOutput;
@property(nonatomic) unsigned short photoIrisVisibilityState; // @synthesize photoIrisVisibilityState=_photoIrisVisibilityState;
@property(readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isEntitled) _Bool entitled; // @synthesize entitled=_entitled;
@property(readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;
- (void).cxx_destruct;
- (void)markDidChangeAdjustments;
- (void)didMutate;
- (id)mutations;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *uuid;
- (_Bool)isRevertingContentToOriginal;
- (_Bool)isHiding;
@property(readonly, getter=isMutated) _Bool mutated;
- (_Bool)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)validateContentURL:(id)arg1 error:(id *)arg2 writeAccessRequired:(_Bool)arg3;
- (_Bool)validateContentEditingOutput:(id)arg1 error:(id *)arg2;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *managedEntityName;
- (_Bool)validateAssetDescription:(id)arg1 error:(id *)arg2;
- (_Bool)validateAdjustmentDataForAssetMutation:(id)arg1 error:(id *)arg2;
- (_Bool)validateVideoURLForAssetMutation:(id)arg1 error:(id *)arg2;
- (_Bool)validateVideoURL:(id)arg1 error:(id *)arg2;
- (_Bool)_validateImageURLForAssetMutation:(id)arg1 error:(id *)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (void)revertAssetContentToOriginal;
- (void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(_Bool)arg5 fullSizeRenderSize:(struct CGSize)arg6;
@property(retain, nonatomic) NSString *assetDescription;
@property(retain, nonatomic) CLLocation *location;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(nonatomic, getter=isFavorite) _Bool favorite;
@property(retain, nonatomic) NSDate *modificationDate;
@property(retain, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedAsset;
- (id)initWithXPCDict:(id)arg1 entitled:(_Bool)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithHelper:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

