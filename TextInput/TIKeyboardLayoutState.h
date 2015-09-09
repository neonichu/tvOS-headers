//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hasCandidateKey;
    _Bool _hasAccentKey;
    _Bool _canMultitap;
    _Bool _isAlphabeticPlane;
    _Bool _interfaceIdiomIsPad;
    NSString *_inputMode;
    NSString *_layoutTag;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool interfaceIdiomIsPad; // @synthesize interfaceIdiomIsPad=_interfaceIdiomIsPad;
@property(copy, nonatomic) NSString *layoutTag; // @synthesize layoutTag=_layoutTag;
@property(nonatomic) _Bool isAlphabeticPlane; // @synthesize isAlphabeticPlane=_isAlphabeticPlane;
@property(nonatomic) _Bool canMultitap; // @synthesize canMultitap=_canMultitap;
@property(nonatomic) _Bool hasAccentKey; // @synthesize hasAccentKey=_hasAccentKey;
@property(nonatomic) _Bool hasCandidateKey; // @synthesize hasCandidateKey=_hasCandidateKey;
@property(copy, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

