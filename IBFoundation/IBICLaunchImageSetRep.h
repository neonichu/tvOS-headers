//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAbstractImageRep.h>

@interface IBICLaunchImageSetRep : IBICSlottedAbstractImageRep
{
}

+ (id)contentReferenceTypeName;
+ (Class)slottedAssetClass;
+ (Class)repIdentifierClass;
+ (id)assetRepWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(_Bool)arg3;
+ (id)assetRepWithRepIdentifier:(id)arg1;
- (_Bool)isMinimallyFitForCompiling;
- (_Bool)isImageDataSizedProperly;
- (id)baseFileNameForVersionedInfoPlistEntry;
- (void)setSlot:(id)arg1;
- (id)slot;
- (id)parent;
- (id)initWithSlot:(id)arg1;
- (_Bool)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 error:(id *)arg3;

@end

