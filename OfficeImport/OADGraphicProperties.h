//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADDrawableProperties.h>

#import <OfficeImport/OADEffectsParent-Protocol.h>
#import <OfficeImport/OADProperties3DParent-Protocol.h>

@class NSArray, NSString, OADFill, OADScene3D, OADShape3D, OADStroke;

__attribute__((visibility("hidden")))
@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent>
{
    OADFill *mFill;
    NSArray *mEffects;
    NSArray *mExts;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
    OADStroke *mStroke;
    unsigned int mHasIsBehindText:1;
    unsigned int mIsBehindText:1;
}

@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)hasIsBehindText;
- (void)setIsBehindText:(_Bool)arg1;
- (_Bool)isBehindText;
- (_Bool)hasStroke;
- (void)setStroke:(id)arg1;
- (id)stroke;
- (_Bool)hasShape3D;
- (void)setShape3D:(id)arg1;
- (id)shape3D;
- (_Bool)hasScene3D;
- (void)setScene3D:(id)arg1;
- (id)scene3D;
- (_Bool)hasExts;
- (_Bool)hasEffects;
- (void)setExts:(id)arg1;
- (id)exts;
- (void)setEffects:(id)arg1;
- (id)effects;
- (_Bool)hasNonEmptyFill;
- (_Bool)hasFill;
- (void)setFill:(id)arg1;
- (id)fill;
- (void)setParent:(id)arg1;
- (void)dealloc;
- (id)initWithDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

