//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreThemeDefinition/TDElementProduction.h>

#import <CoreThemeDefinition/TDElementAttributes-Protocol.h>

@class TDMicaAsset;

@interface TDMicaElementProduction : TDElementProduction <TDElementAttributes>
{
}

- (void)setAttributesFromCopyData:(id)arg1;
- (id)copyDataFromAttributes;
- (void)setAttributesFromData:(id)arg1;
- (id)dataFromAttributes;
- (void)copyAttributesInto:(id)arg1;
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(_Bool)arg2;
- (_Bool)generateRenditionsWithEntityName:(id)arg1 document:(id)arg2 errorDescription:(id *)arg3;
- (id)associatedFileURLWithDocument:(id)arg1;
- (id)relativePath;
- (id)baseKeySpec;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) TDMicaAsset *asset; // @dynamic asset;

@end

