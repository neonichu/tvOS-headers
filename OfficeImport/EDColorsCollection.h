//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/EDCollection.h>

#import <OfficeImport/OADColorPalette-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDColorsCollection : EDCollection <OADColorPalette>
{
    unsigned long long mDefaultColorsCount;
}

+ (int)oadSchemeColorIdFromThemeIndex:(int)arg1;
+ (unsigned int)xlColorIndexFromTCSystemColorIDEnum:(int)arg1;
+ (int)systemColorIdFromIndex:(unsigned long long)arg1;
+ (_Bool)isSystemColorId:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)addPalette:(const unsigned int *)arg1 paletteSize:(unsigned int)arg2 paletteX:(const unsigned int *)arg3 paletteXSize:(unsigned int)arg4;
- (const unsigned int *)defaultPalette;
- (void)addColors:(const unsigned int *)arg1 count:(unsigned int)arg2 defaultColors:(const unsigned int *)arg3 defaultCount:(unsigned int)arg4;
- (void)addDefaultPalette;
- (unsigned long long)addOrEquivalentColorExcludingDefaults:(id)arg1;
- (id)colorWithIndex:(unsigned long long)arg1;
- (unsigned long long)defaultColorsCount;
- (id)initWithDefaultSetup:(_Bool)arg1;
- (void)setupDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

