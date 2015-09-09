//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKDisplayProfile.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, PKColor;

@interface PKPassDisplayProfile : PKDisplayProfile <NSSecureCoding, NSCopying>
{
    _Bool _tallCode;
    long long _passStyle;
    PKColor *_backgroundColor;
    PKColor *_foregroundColor;
    PKColor *_labelColor;
    PKColor *_stripColor;
    NSData *_iconHash;
    NSData *_logoHash;
    NSData *_thumbnailHash;
    NSData *_backgroundHash;
    NSData *_stripHash;
    NSData *_paymentAssetsHash;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool tallCode; // @synthesize tallCode=_tallCode;
@property(retain, nonatomic) NSData *paymentAssetsHash; // @synthesize paymentAssetsHash=_paymentAssetsHash;
@property(retain, nonatomic) NSData *stripHash; // @synthesize stripHash=_stripHash;
@property(retain, nonatomic) NSData *backgroundHash; // @synthesize backgroundHash=_backgroundHash;
@property(retain, nonatomic) NSData *thumbnailHash; // @synthesize thumbnailHash=_thumbnailHash;
@property(retain, nonatomic) NSData *logoHash; // @synthesize logoHash=_logoHash;
@property(retain, nonatomic) NSData *iconHash; // @synthesize iconHash=_iconHash;
@property(retain, nonatomic) PKColor *stripColor; // @synthesize stripColor=_stripColor;
@property(retain, nonatomic) PKColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) PKColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) PKColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long passStyle; // @synthesize passStyle=_passStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)type;
@property(readonly, nonatomic) long long layoutMode;
@property(readonly, nonatomic) _Bool showsStripImage;
@property(readonly, nonatomic) _Bool showsBackgroundImage;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end

