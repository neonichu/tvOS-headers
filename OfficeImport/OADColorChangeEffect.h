//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADColorChangeEffect : OADBlipEffect
{
    OADColor *mFromColor;
    OADColor *mToColor;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (void)setToColor:(id)arg1;
- (id)toColor;
- (void)setFromColor:(id)arg1;
- (id)fromColor;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

